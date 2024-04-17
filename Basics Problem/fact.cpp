#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int fact(int n)
{
    int ans = 1;
    for(int i=1;i<=n;i++)
    {
        ans = ans*i;
    }
    return ans;
}
int main()
{
    int n = 4;
    cout <<"ans of 4 is "<<fact(n);
    return 0;
}