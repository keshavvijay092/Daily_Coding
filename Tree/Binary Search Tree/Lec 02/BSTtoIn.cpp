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

Node* BSTtoIn(int inorder[],int s,int e)
{
    if(s>e) return nullptr;
    
    int mid = s+(e-s)/2;
    Node* root = new Node(inorder[mid]);

    root->left = BSTtoIn(inorder,s,mid-1);
    root->right = BSTtoIn(inorder,mid+1,e);
    return root;
}

int main()
{
   

   int inorder[] ={10,20,30,40,50,60,70};
   int n = 7;
   int s = 0;
   int e = n-1;
   Node* root = BSTtoIn(inorder,s,e);
   levelorder(root);
    return 0;
}