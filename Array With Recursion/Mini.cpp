#include<iostream>
#include<climits>
using namespace std;
int minVal(int arr[],int i ,int n,int mini)
{
    // base case 
    if(i>=n) return mini;

    mini = min(mini,arr[i]);

  return minVal(arr,i+1,n,mini);
}
int main()
{
    int arr[] = {12,2233233,2323233,2321,5};
    int n = 5;
    int i =0;
    int mini = INT_MAX;
    int ans = minVal(arr,i,n,mini);
   cout<<"min val is "<<ans<<endl;

    return 0;
}