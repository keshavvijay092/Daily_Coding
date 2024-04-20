#include<iostream>
using namespace std;
int FindVal(int arr[],int i,int n ,int target)
{
    if(i>=n) return -1;

    if(arr[i] == target) return i ;

    i = FindVal(arr,i+1,n,target);
    return i;
}
int main()
{
    int arr[5]={22,3343,2,21,211};
    int i=0;
    int n = 5;
    int target = 334433;
  int a =FindVal(arr,i,n,target);
  cout<<"Ans Index is: "<<a<<endl; 
    return 0;
}