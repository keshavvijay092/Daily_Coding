#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void print(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
}
void sortcolor(int arr[],int n)
{
    // using 2 pointer approach 
    int s = 0;
    int e = n-1;
    int i  = 0; 
    //1 2 0 1 0 1
    // 0 0 1 1 2 1 
   int a = -1;
   int size = n;
    while(size>0)
    {
       if(arr[i] == 0)
       {
        swap(arr[i],arr[s]);
        i++;
        s++;
       size--;   
       }
       else if(arr[i] == 2 && a !=i )
       {
        swap(arr[i],arr[e]);
        a = e;
        e--;
        size--;
        
       }
       else{
        i++;
       size--;
       }

    }

    print(arr,n);
     return ;
}

int main()
{
    int n = 13;

 int arr[n]={2,0,2,2,1,2,0,1,2,1,1,1,0};
 sortcolor(arr,n);
    return 0;
}