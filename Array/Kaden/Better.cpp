#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;

int solve(int arr[],int n)
{
    int maxi = INT_MIN;
    for(int i=0;i<n;i++)
    {
        int sum = 0;
        for(int j=i;j<n;j++)
        {
            sum = arr[j]+sum;
            maxi = max(sum,maxi); 
        }
    } 
    return maxi;
}

int main()
{
    int n = 8;
    int arr[8] = {-2,-3,4,-1,2,1,15,-3};
    cout<<"this is the answer of my question" <<solve(arr,n);
    return 0;
}