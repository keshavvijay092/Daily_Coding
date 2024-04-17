#include<bits/stdc++.h>
using namespace std;

int fact(int n)
{ 
    int ans=1;
    if(n == 1) return ans ;
    ans =  n * fact(n-1);
}
int main()
{
    int n =6;
    cout<<"ans is "<<fact(n);
    return 0;
}