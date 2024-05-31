// give a CBT we need to check Valid Heap

#include<iostream>
#include<queue>
using namespace std;
class info{
        public:
        int maxVal;
        bool isHeap;

        info(int a,bool b)
        {
            this->maxVal = a;
            this->isHeap = b;
        }
};

info Check(Node* root)
{
    if(root == NULL){
        info temp;
        temp.maxVal = INT_MIN;
        temp.isHeap = true;
        return temp;
    }

    if(root->left == NULL root->right == NULL)
    {
        info temp;
        temp.maxVal = root->data;
        temp.isHeap = true;
        return temp;
    }

    info leftans = Check(root->left);
    int rightans = check(root->right);

    // 1 casemujhe solve karna 

    if(root->data > leftans.maxVal && root->data > rightans.maxVal && leftans.isHeap && rightans.isHeap)
    {
           Info ans;
           ans.maxVal = root->data;
           ans.isHeap = true;
           return ans;
    }
    else {
        ans.maxVal = max(root->data,max(leftans.maxVal,rightans.maxVal));
        ans.isHeap = false;
    }
    return ans;
}

int main()
{

    return 0;
}