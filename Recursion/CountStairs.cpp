#include<iostream> 
using namespace std;
int ClimbStairs(int n)
{
    //  n will be how many stairs to cover 
    
    // base case 
    if(n == 0) return 1;
    if(n == 1) return 1;

    // processing 

    // recursive function 
    
    int ans = ClimbStairs(n-1)+ClimbStairs(n-2);
    return ans;
}
int main()
{

    int n = 3;
   int ans =  ClimbStairs(n);
   cout<<"ANS IS : "<<ans;
    return 0;
}