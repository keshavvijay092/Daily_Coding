#include<iostream>
// #include<bits/stdc++.h>
#include<climits>
#include<algorithm>
using namespace std;
                 
int solve(int arr[],int n)
{
    int maxi = INT_MIN;

    for(int i=0;i<n;i++)
    {
        for(int j = i;j<n;j++)
        {
            int sum = 0;
            for(int k = i;k<=j;k++)
            {
            sum = arr[k]+sum; 
            }
            maxi = max(sum,maxi);
        }
    }
    return maxi;
}


int main()
{
    int n = 8;
    int arr[8] = {-2,-3,4,-1,2,1,5,-3};
   cout<<"this is the answer of my question "<<solve(arr,n);
    return 0;
}


// time complexity : O(n^3);
// space complexity :O(1);