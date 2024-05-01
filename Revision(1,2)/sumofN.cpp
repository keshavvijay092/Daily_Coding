#include<iostream> 
using namespace std;

int sum(int n)
{
    if(n == 1) return 1;
   
    int val  = n + sum(n-1) ;
       return val;
}

int main()
{
    int n = 5;
    int z = 0;
    int ans =  sum(n);
    cout<<"ans is : "<<ans;
}