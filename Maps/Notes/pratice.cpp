

#include<bits/stdc++.h>
#include<iostream>
using namespace std;



int val(int arr[],int n)
{
     int cnt = 0;
    //   3 ,2,6 

     for(int i=0;i<n;i++)
     {
        if(arr[i]%3 == 0)
        {
            cnt += arr[i]/3;
        }
        else
        {
           
            if(arr[i] < 3)
            {
                cnt++;
            }
            else
            {
               cnt += (arr[i] % 3 == 0) ? 0 : 1;
            }
        }
     }
     return cnt;

}
int main()
{
    int arr[4] ={1,2,3,4};
    int n = 4;
    int a = val(arr,n); 
    cout<<a;
    return 0;
}