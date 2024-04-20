#include<iostream>
#include<climits>
using namespace std;
void MiniVal(int arr[],int i ,int n , int &mini)
{
  if(i>=n) return ;

  mini = min(mini,arr[i]);  
  MiniVal(arr,i+1,n,mini);


}
int main()
{
  int arr[] = {32,12,34,56,78,90,444444};
  int n = 7;
  int i = 0;
  int mini = INT_MAX;
  MiniVal( arr,i, n ,mini); 
  cout<<"the value is "<<mini;
  
  return 0;
}





























// #include<iostream>
// #include<climits>
// using namespace std;
// int MinVal(int arr[],int mini,int n , int i)
// {
//   if( i>=n ) return mini;

//    mini = min(mini,arr[i]);

//   mini = MinVal(arr,mini,n,i+1);
//   return mini;

// }

// int main()
// {
//   int arr[] = {12341,233232,34443443,4,4455};
//   int mini = INT_MAX;
//   int n = 5;
//   int i = 0;

//   cout<<"Ans is: "<<MinVal(arr,mini,n,i);
//   return 0;
// }