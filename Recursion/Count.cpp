#include<bits/stdc++.h>
#include<iostream>
using namespace std;


void count(int n)
{
    if(n ==0 ) return ;

    cout<<n<<endl;
    count(n-1);
    return ;
}
int main()
{

    int n =5;
    count(5);
    return 0;
}