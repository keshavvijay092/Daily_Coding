#include<iostream>
using namespace std;

int sorted(int arr[],int n)
{
       
    //    approach - elements hai and positive elements hai 
    // 2 pointer approach
   int j = 0;
   int i = 0;
   while(i<n)
   {
    if(arr[i]>0)
    {
        swap(arr[i],arr[j]);
        j++;
    }
     i++;
   }
      for(int i = n-1;i>0;i--)
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