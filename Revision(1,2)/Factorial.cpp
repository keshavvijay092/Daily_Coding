// find the factorial of n = 1 to 10 

#include<iostream>
using namespace std;
int fact(int n)
{
    if( n == 0) return 0;
     if(n == 1) return 1;

     int ans = n * fact(n-1);
     return ans;

}
int main()
{
    int n = 10;
    for(int i=0;i<=n;i++)
    {
        int ans = fact(i);
        cout<<"the fact of the number "<<i<<" is "<<ans;
        cout<<endl;
    }
    return 0;
}
