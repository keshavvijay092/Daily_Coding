// coding ninja 

#define MOD 1000000007
#include<vector> 

long long int solve(int n , vector<long long int> &ans)
{
  if( n == 1) return 0;
    if( n== 2) return 1;

 if( ans[n] != -1 )
   ans[n] =  ( (n-1)%MOD *((solve(n-1)%MOD)+(solve(n-2)%MOD)));
   return ans[n];
}
long long int countDerangements(int n) {
  vector<long long int> ans(n+1,-1);
  return solve(n,ans);
}
