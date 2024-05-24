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

bool searchInBST(Node*& root,int target)
{
    if(root == nullptr) return false;

    if(root->data == target) return true;
    bool leftans = false;
    bool rightans = false;

    if(target > root->data)
    { 
       rightans = searchInBST(root->right,target);
    }
    else{
          leftans = searchInBST(root->left,target);
    }
    return leftans || rightans;
}
int main()
{
    Node* root = NULL;
    createBST(root);
    levelorder(root);
     
     int t;
     cout<<"target: "<<endl;
     cin>>t;

     while(t !=-1)
     {
        bool ans = searchInBST(root,t);
        if(ans == true) cout<<"founded"<<endl;
        else cout<<"nope"<<endl;

        cout<<"target: "<<endl;
        cin>>t; 
     }
  
    return 0;
}