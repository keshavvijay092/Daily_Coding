#include<iostream>
#include<queue>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int value)
    {
       this->data = value;
       this->left = NULL;
       this->right = NULL;
    }
};

Node* insertIntoBst(Node* root,int data)
{
    if(root == NULL)
    {
        root = new Node(data);
        return root;
    }

    // its not the first Node 
    if(data> root->data)
    {
      root->right=insertIntoBst(root->right,data);
    }
    else 
    {
        root->left = insertIntoBst(root->left,data);
    }
    return root;
}

void createBst(Node* &root)
{
    cout<<"enter the  data"<<endl;
    int data;
    cin>>data;
    while(data !=-1)
    {
        root = insertIntoBst(root,data);
        cout<<"enter the data"<<endl;
        cin>>data;
    }
}
void levelordertraversal(Node* root)
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
int main()
{
    Node* root = NULL;
    createBst(root);
    levelordertraversal(root);
    return 0;
}