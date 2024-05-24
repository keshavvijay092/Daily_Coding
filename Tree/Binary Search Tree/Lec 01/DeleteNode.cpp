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
Node* maxVal(Node* root)
{
    if(root == nullptr) return nullptr;
    
    Node* temp = root;

    while(temp->right)
    {
        temp = temp->right;

    }
    return temp;
}
Node* deleteBST(Node* root,int target)
{
    // find the target
    // target ko delete karo 
    if(root == nullptr) return nullptr;

    if(root->data ==target)
     {
        // 4 cases 
        // 1st case is when we have to delete leaf node 
      if(!root->left && !root->right)
      {
        delete root;
        return nullptr;
      }
        // 2nd case when there is a left child but not right child 

        if(root->left && !root->right)
        {
            Node* child = root->left;
            delete root;
            return child;
        }
        //3rd case when there is a right child but not left child 

        if(root->right && !root->left)
        {
            Node* child = root->right;
            delete root;
            return child;
        }
        if(root->left && root->right)
        {
            Node* conq = maxVal(root->left);
            root->data = conq->data;
            root->left = deleteBST(root->left,conq->data);
            return root;
        }
     }
        else if(root->data >target)
        {root->left = deleteBST(root->left,target);
        }
        else 
        {
            root->right = deleteBST(root->right,target);
        }
        return root;
}


int main()
{
    Node* root = NULL;
    createBST(root);
    levelorder(root);
    int target;
    cout<<"enter the delete node:"<<endl;
    cin>>target;

    while(target!=-1)
    {
        root = deleteBST(root,target);
        cout<<"printing level order traversal:"<<endl;
         levelorder(root);
    cout<<"enter the delete node:"<<endl;
    cin>>target;
    }
  
    return 0;
}