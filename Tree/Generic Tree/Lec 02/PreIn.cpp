// we have given preorder aand inorder and we have to print the tree

// this is the common code for tree 
// it has classes and all the 4 traversal 


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

// Node* PreIn(int inorder[],int preorder[],int n,int &pre,int s,int e,map<int,int>mp)
// {
//    if(pre>=n || s>e)
//    {
//     return nullptr;
//    }   
//    int element = preorder[pre];
//    pre++;

//    Node* root = new Node(element);

//    int pos = mp[element];

//    root->left = PreIn(inorder,preorder,n,pre,s,pos-1,mp); 
//    root->right =PreIn(inorder,preorder,n,pre,pos+1,e,mp);

//    return root;
// }
void creation(int inorder[] ,map<int,int> & mp,int size){
    // here we will map all the element in the map
 
  for(int i=0;i<size;i++){
    int element = inorder[i];
    int index = i;
    mp[element] = index;
  }

    return ;
}

Node* PosIn(int post[],int inorder[],int n,int& pos,int s,int e,map<int,int> mp)
{
    if(pos< 0 || s>e)
    {
        return nullptr;
    }


    int element = post[pos];
    pos--;
    Node* root = new Node(element);

    int position = mp[element];

    root->right = PosIn(post,inorder,n,pos,position+1,e,mp);
    root->left = PosIn(post,inorder,n,pos,s,position-1,mp);
    return root;
}
int main()
{
    // int inorder[] = {10,8,6,2,4,12};
    // int preorder[] = {2,8,10,6,4,12};
    // int n = 6;
    // int pre = 0;
    // int s = 0;
    // int e = n-1;
    // map<int,int> mp;
    // creation(inorder,mp,n);
    // Node* root =  PreIn(inorder,preorder,n,pre,s,e,mp);
    // cout << "Printing the entire tree: " << endl;
    // LevelOrderTraversal(root);
    
    int inorder[]  = {8,14,6,2,10,4};
    int postorder[] = {8,6,14,4,10,2};
    int n = 6;
    int pos = n-1;
    int s = 0;
    int e = n-1;
    map<int,int> mp;
    creation(inorder,mp,n);
    Node* root =  PosIn(inorder,postorder,n,pos,s,e,mp);
    cout << "Printing the entire tree: " << endl;
    LevelOrderTraversal(root);
    return 0;
}