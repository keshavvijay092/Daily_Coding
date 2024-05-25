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
void convert(Node* root,Node*&head)
{
    if(!root) return ;

   //here we apply a approach wherre first we will go right then concept the head to root then goes left 

   convert(root->right,head);

//    now goes to N (means root);

   root->right = head;
  
   if(head) 
   head->left = root;

   head = root;

   convert(root->left,head);
}

void print(Node* head)
{
    cout<<"i have reached here"<<head->data<<endl;
    Node* temp = head;
    while(temp)
    {
        cout<<temp->data<<"->";
        temp = temp->right;
    }
    cout<<endl;
    return ;
}
int main()
{
    Node* root = NULL;
    createBST(root);
    levelorder(root);
    Node* head = NULL;
    convert(root,head);
    cout<<"printing the doubly linkedlist"<<endl;
    print(head);
  
  
    return 0;
}