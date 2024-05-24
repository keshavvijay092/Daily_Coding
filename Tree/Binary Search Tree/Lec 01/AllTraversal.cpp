#include<iostream>
#include<queue>
using namespace std;
class Node{
    public:
  int data ;
  Node* left;
  Node* right;

  Node(int value)
  {
    this->data = value;
    this->left  = NULL;
    this->right = NULL;
  }

};

Node* insert(int data,Node* root)
{
    if(root == NULL) 
    {
        root = new Node(data);
        return root;
    }

    if(data > root->data)
    {
        root->right = insert(data,root->right);

    }
    else{
        root->left = insert(data,root->left);
    }
    return root;
}
void createBST(Node* &root)
{
      cout<<"enter the data"<<endl;
    int data;
    cin>>data;
    while(data !=-1)
    {
        root = insert(data,root);
        cout<<"enter the data"<<endl;
        cin>>data;
            }
}


void levelorder(Node* root)
{
    queue<Node*> qt;
    qt.push(root);
    qt.push(NULL);
    while(!qt.empty())
    {
        Node* front = qt.front();
        qt.pop();
        if(front ==NULL)
        {
            cout<<endl;
            if(!qt.empty())
            {
                qt.push(NULL);
            }
        }
        else
        {
            cout<<front->data<<" ";
            if(front->left != NULL)
            {
                qt.push(front->left);
            }
            if(front->right != NULL)
            {
                qt.push(front->right);
            }
        }
    }
  
}
void preorder(Node* root)
{
    if(root == nullptr)
    return ;

    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void inorder(Node* root)
{
    if(root == nullptr)
    return ;

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void postorder(Node* root)
{
    if(root == nullptr)
    return ;

    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
int main()
{
    Node* root = NULL;
    createBST(root);
    levelorder(root);
  cout<<endl<<"preorder";
    preorder(root);
    cout<<endl<<"inorder";
    inorder(root);
    cout<<endl<<"postorder";
    postorder(root);
    return 0;
}