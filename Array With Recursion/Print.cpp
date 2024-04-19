// print array using recursion 

#include<iostream>
using namespace std;
void print(int arr[],int n,int i)
{
    if(i>=n) return ;

     cout<<arr[i]<<" ";
    print(arr,n,i+1);
   
}

int main()
{
    int arr[] = {1,2,3,4,5};
    int n = 5;
    int i=0;
    print(arr,n,i);
    return 0;
}