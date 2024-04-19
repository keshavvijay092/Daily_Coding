#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int miniVal(int arr[],int i,int s,int mo)
{
        if(i>=s) return mo;

        mo = min(mo,arr[i]);
        
      return miniVal(arr,i+1,s,mo);
        
}
int main()
{
    int arr[5] = {32,2,320,40,0};
    int n = 5;
    int i=0;
 
    int mini = INT_MAX;
    cout<<"ANs "<<miniVal(arr,i,n,mini);
    
    return 0;
}