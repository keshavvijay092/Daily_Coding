// print index of all the occurences 
#include<iostream>
#include<vector>
using namespace std;
vector<int> Find(int arr[],int i,int n , int target,vector<int> &ans)
{
    if(i>=n) return ans;
   
   if(target == arr[i]) ans.push_back(i);
   
   ans = Find(arr,i+1,n,target,ans);
   return ans;
}
int main()
{
    int n =12;
    int arr[] = {1,2,3,4,5,4,2,1,1,3,4,1};
    int target = 1;
    int i=0;
    vector<int> ans;
    Find(arr,i,n,target,ans);
    for(int em:ans)
    {
        cout<<em<<" ";
    }
     
    return 0;
}