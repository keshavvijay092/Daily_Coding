// Search in Array
#include<iostream>
using namespace std;

bool Search(int arr[],int i,int n , int t)
{
    if(i>=n) return false;
    if(arr[i] == t) return true;
      
    Search(arr,i+1,n,t); 
    

}
int main()
{
    int arr[] = {1,2,3,4,5};
    int n = 5;
    int i=0;
    int target = 0;
   if( Search(arr,i,n,target))
   cout<<"Milgya";
   else 
   cout<<"nhi mila";

    return 0;
}