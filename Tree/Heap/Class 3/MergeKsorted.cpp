#include<iostream>
#include<queue>
using namespace std;

class Info{
    public:
    int data;
    int rowIndex;
    int colIndex;

    Info(int a,int b,int c)
    {
        this->data = a;
        this->rowIndex = b;
        this->colIndex = c;
    }
};

class Compare{
    public:
    bool operator()(Info *a,Info * b)
    {
        return a->data > b->data;
    } 
};

void mergeKsortedArray(int arr[][4],int n,int k,vector<int> &ans)
{
    priority_queue<Info *,vector<Info*> ,Compare>pq;
    // 1st step : process first k step

    for(int row = 0;row<k;row++)
    {
        int element = arr[row][0];
        Info * temp = new Info(element,row,0);
        pq.push(temp);
    }

    while(!pq.empty())
    {
        Info * temp = pq.top();
        pq.pop();
        int topdata = temp->data;
        int toprow = temp->rowIndex;
        int topcol = temp->colIndex;

        // store in ans vector
        ans.push_back(topdata);
       // next element for the same row,hisme se pop kia h just abhi 
    //    usse insert bhi toh karna hai element 


    if(topcol+1<n)
    {
        // iska mtlb row me aur bhi element hai 
        Info * newInfo = new Info(arr[toprow][topcol+1],toprow,topcol+1);
        pq.push(newInfo);
    }
    }
}

int main()
{
    int arr[3][4] = {
        {1,4,8,11},
        {2,3,6,10},
        {5,7,12,14}
    };

    int n = 4;
    int k = 3;

    vector<int> ans;
    mergeKsortedArray(arr,n,k,ans);

    cout<<"printing "<<endl;

    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }

    return 0;
}