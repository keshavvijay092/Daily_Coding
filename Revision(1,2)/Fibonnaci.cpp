// series which is 1 1 2 3 5 8 13 21 34 55 89 ........

#include<iostream>
using namespace std;
int fib(int n)
{
    if( n == 0) return 1;
    if(n == 1)   return 1;

    int ans = fib(n-2)+fib(n-1);
     return ans;
}
int main()
{
    int n = 12;
    for(int i=0;i<=n;i++)
    {
        int ans = fib(i);
        cout<<" "<< ans <<" -> ";
    }
    return 0;
}