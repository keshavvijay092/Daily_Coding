// 10 20 40 -1 -1 50 70 110 -1 -1 11 -1 -1 80 -1 -1 30 -1  60 -1 90 112 -1 -1 113 -1 -1


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

void printTopView(Node* root)
{
    map<int,int> mp;
    queue<pair<Node*,int>> qt;
    qt.push(make_pair(root,0));
    while(!qt.empty())
    {
        pair<Node*,int> temp = qt.front();
        qt.pop();
        Node* frontnode = temp.first;
        int hd = temp.second;

        if(mp.find(hd) == mp.end())
        {
            mp[hd] = frontnode->data;
        }

        if(frontnode->left !=NULL)
        {
            qt.push(make_pair(frontnode->left,hd-1));
        }
        if(frontnode->right !=NULL)
        {
            qt.push(make_pair(frontnode->right,hd+1));
        }
    }
        cout<<"printing top<<endl";
        for(auto i:mp)
        {
          cout << i.second << " ";
        }
}
int main()
{
   Node* root = createTree();
	//10 20 40 -1 -1 50 70 110 -1 -1 111 -1 -1 80 -1 -1 30 -1 60 -1 90 112 -1 -1 113 -1 -1 
  LevelOrderTraversal(root);



  printTopView(root);

    return 0;
}