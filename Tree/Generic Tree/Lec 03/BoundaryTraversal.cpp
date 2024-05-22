#include<iostream> 
#include<map>
#include<vector> 
#include<queue> 
using namespace std;

class Node{
      public:
      int data;
      Node* left;
      Node* right;

      Node(int val){
        this->data = val;
        this->left = nullptr;
        this->right = nullptr;
      }
};

Node* createTree(){
    cout<<"Enter element:";
    int element;
    cin>>element;
    if(element == -1) return nullptr;
      
    Node* root = new Node(element);
    root->left = createTree();
    root->right = createTree();
    return root;
 
}
void inorder(Node* root){
if(root == nullptr) return ;

  inorder(root->left);
  cout<<root->data<<" ";
  inorder(root->right);
  return ;
}

void preorder(Node* root){
if(root == nullptr) return ;

  cout<<root->data<<" ";
  inorder(root->left);
  inorder(root->right);
  return ;
}

void postorder(Node* root)
{

if(root == nullptr) return ;

  inorder(root->left);
  inorder(root->right);
  cout<<root->data<<" ";
  return ;
}

void LevelOrderTraversal(Node* root){
       queue<Node*> qt;

       qt.push(root);
        qt.push(nullptr);
        cout<<endl;

        while(!qt.empty()){
            Node* front = qt.front();
            qt.pop();
            if(front == NULL)
            {
                      cout<<endl;
                      if(!qt.empty()) qt.push(nullptr);        
            }
            else{
                cout<<front->data<<" ";
                if(front->left){
                    qt.push(front->left);
                }
                if(front-> right){
                    qt.push(front->right);
                }
            }

        }     
}

void printLeft(Node* root)
{
    if(root == nullptr) return ;

    if(!root->left && !root->right ) return ;

    cout<<root->data<<" ";

    if(root->left !=nullptr) printLeft(root->left);
    else printLeft(root->right);
}
void printRight(Node* root)
{
    if(root == NULL ) return ;

    if(!root->right  && !root->left) return ;

    if(root->right !=nullptr) printRight(root->right);
    else printRight(root->left);
    cout<<root->data<< " ";
  
}

void printLeaf(Node*root)
{
    if(root == nullptr) return ;
    if(!root->right && !root->left) cout<<root->data<<" ";

    printLeaf(root->left);
    printLeaf(root->right);
  
}
void Boundary(Node* root){
    if(root == nullptr) return ;

    cout<<root->data<<" ";
    printLeft(root->left);
    printLeaf(root->left);
    printLeaf(root->right);
    printRight(root->right);
    return ;
}
int main()
{
    Node* root = createTree();
    LevelOrderTraversal(root);
    Boundary(root);
    return 0;
}