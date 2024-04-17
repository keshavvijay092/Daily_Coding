#include<iostream>
#include<iostream>
using namespace std;

int solve(int n)
{
    if(n == 1) return 1;

   return  n + solve(n-1);
    // return ans;
}
int main()
{
    int n = 10;
    cout<<"the sum of 1 to n is "<<solve(n);
    
    return 0;
}