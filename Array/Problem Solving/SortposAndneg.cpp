#include<iostream>
using namespace std;

int sorted(int arr[],int n)
{
       
    //    approach - elements hai and positive elements hai 
    // 2 pointer approach
    int s = 0;
    int e = n-1; 
    while(s<e)
    {
        if(arr[s]>0 && arr[e]<0)
        { 
        swap(arr[s],arr[e]);
        }
        s++;
        e--;
    }
     for(int i = 0;i<n;i++)
   {
    cout<<arr[i]<<" ";
   }
    return 0;
}
int main()
{
    int n=7;
    int arr[n] ={23,-7,12,-10,-11,40,60};
  
   for(int i = 0;i<n;i++)
   {
    cout<<arr[i]<<" ";
   }
   cout<<endl;
   cout<<"sorted"<<endl;

sorted(arr,n);
 

    return 0;
}