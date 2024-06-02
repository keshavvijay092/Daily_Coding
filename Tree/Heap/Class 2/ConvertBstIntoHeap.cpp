// we are given a bst + cbt and we have convert it into the valid heap
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

void createBst(Node*& root)
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
void replacePostOrder(Node* root,vector<int> & inorder,int& i)
{
     if(!root) return ;

     replacePostOrder(root->left,inorder,i);
     replacePostOrder(root->right,inorder,i);
     root->data = inorder[i];
     i++;
}

void storeInOrder(Node*& root, vector<int> & inorder)
{
    if(root == NULL) return ;

    storeInOrder(root->left,inorder);
    inorder.push_back(root->data);
    storeInOrder(root->right,inorder);
    return ;
}

Node* convertBstIntoHeap(Node*& root)
{
    vector<int> inorder;
    storeInOrder(root,inorder);

    // replacce the node values with the sorted inorder value using postorder traversal
    int i = 0;

    replacePostOrder(root,inorder,i);
    return root;
}
int main()
{
    Node* root = NULL;
    createBst(root);
    levelordertraversal(root);
    cout<<endl;

    cout<<"heap now";
    root = convertBstIntoHeap(root);
    cout<<"printing "<<endl;
    levelordertraversal(root);
    return 0;
}