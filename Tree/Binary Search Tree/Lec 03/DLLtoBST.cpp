// convert binary search tree to doubly linked list 
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
Node* convert(Node* &head,int n)
{
    if(head == nullptr|| n<=0) return nullptr;

   Node* subleft= convert(head,n/2);
   
   Node* root = head;
   root->left = subleft;
//    head update
head = head->right;

Node* subright = convert(head,n-n/2-1);
root->right = subright;
return root;
   
}


int main()
{
    
   Node* first = new Node(10);
  Node* second = new Node(20);
  Node* third = new Node(30);

  first->right = second;
  second->left = first;
  second->right = third;
  third->left = second;

  Node* head = first;

  Node* root = convert(head,3);
  levelorder(root);
    return 0;
}