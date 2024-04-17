#include<iostream>
using namespace std;
void print(int arr[],int n,int i)
{
    if(n==0) return ;
    cout<<arr[i]<<" ";
    print(arr,n-1,++i);
    return ;
}

int main()
{
    int arr[5]={1,2,3,4,5};
    print(arr,5,0);
    return 0;
}