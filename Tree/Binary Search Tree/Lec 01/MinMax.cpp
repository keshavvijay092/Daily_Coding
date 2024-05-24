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

Node* minVal(Node* root)
{
    if(root == nullptr) return nullptr;

    Node* temp = root;

    while(temp->left)
    {
        temp = temp->left;
    }
    return temp;
}

Node* maxVal(Node* root)
{
    if(root == NULL) return nullptr;

    Node* temp = root;

    while(temp->right)
    {
        temp =temp->right;
    }
    return temp;
}
int main()
{
    Node* root = NULL;
    createBST(root);
    levelorder(root);
    //   50 30 20 25 40 60 70 80 55 -1
    cout<<endl;

    Node* minval = minVal(root);
      cout<<"the min val is :"<<minval->data;
       cout<<endl;
      Node* maxval = maxVal(root);
    
      cout<<endl<<"the max val is : "<<maxval->data;
  
    return 0;
}