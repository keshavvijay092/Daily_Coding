#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int fact(int n)
{
    if(n == 0) return 0;
    if(n == 1) return 1;

    int term = fact(n-1)+fact(n-2);
    return term;
}
int main()
{
    int n = 9;
    for(int i=0;i<=n;i++)
    {
     int term = fact(i);
    cout<<"the term in fibonacci series is "<<term<<endl;
    }
  
    return 0;
}