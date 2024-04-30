// solving 2 ki power n 2^n

#include<iostream>
using namespace std;
int power(int n)
{
    if(n == 0) return 1;
     
     int ans = 2 * power(n-1);
     return ans;
    
}
int main()
{
    int n = 5;
    for(int i=0;i<=n;i++)
    {
        int ans = power(i);
        cout<<"the answer of 2 to the power "<<i<<" is "<<ans<<endl;

    }
    return 0;
}