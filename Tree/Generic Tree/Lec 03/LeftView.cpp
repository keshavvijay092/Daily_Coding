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

void leftview(Node* root,int level , vector<int> &ans)
{
      if(root == nullptr) return ;

      if(level == ans.size())
      {
        ans.push_back(root->data);

      }
      leftview(root->left,level+1,ans);
      leftview(root->right,level+1,ans);
      return ;
}
int main()
{
    Node* root = createTree();
    LevelOrderTraversal(root);
    vector<int> ans;
    leftview(root,0,ans);
    cout<<"printing the left view"<<endl;
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}