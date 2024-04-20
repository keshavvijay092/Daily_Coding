#include<iostream>
using namespace std;
void MaxVal(int arr[],int i ,int n)
{
    if(i>=n) return ;
     arr[i] = 2*arr[i];
     MaxVal(arr,i+1,n);
     return ;
    
}

int main()
{
    int arr[5] = {1,2,3,4,5};
    int n = 5;
    int i = 0;
    MaxVal(arr,i,n);
    for(int em:arr)
{
    cout<<em<<" ";
}
    return 0;
}