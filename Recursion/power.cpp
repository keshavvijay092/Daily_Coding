#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int power(int n)
{
    if(n == 0) return 1;

    int ans = 2 * power(n-1);
    return ans;



} 
int main()
{
    int n =10;
    int ans = power(n);
    cout<<"the power of 2 ^ 5  ans is "<<ans;
    return 0;
}