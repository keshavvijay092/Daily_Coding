// binary search 
// assume that key is possible 
#include<iostream>
using namespace std;
int binarySearch(int arr[],int n,int s,int e ,int k)
{
    int mid = s + (e-s)/2;
   if(arr[mid] == k)
   return mid;
   else if(arr[mid]>k)
   return binarySearch(arr,n,s,mid-1,k);
   else 
   return binarySearch(arr,n,mid+1,e,k);
}

int main()
{
    int arr[6] = {1,3,5,6,9,10};
    int n = 6;
    int k = 3;
    int s = 0;
    int e = n-1;
    cout<<"index of the key(9) val "<<binarySearch(arr,n,s,e,k);
}