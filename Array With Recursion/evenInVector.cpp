#include<iostream>
#include<vector>
using namespace std;
void Even(int arr[],int n ,int i,vector<int> &ans)
{
     if(i>=n) return ;
     if(!(arr[i]&1)) 
     {
        ans.push_back(arr[i]);
     }
     
     Even(arr,n,i+1,ans);
     return ;
}
int main()
{
    int a = 0;
    int n = 5;
    int arr[] = {2,3,4,22,11};
    vector<int> ans;
    Even(arr,n,a,ans);

  for(int i=0;i<ans.size();i++)
  {
    cout<<ans[i]<<" ";
  }

    return 0;
}