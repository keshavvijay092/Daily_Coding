#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> print(int n , vector<int>& ans)
{
    if( n == 0) return ans;

    int val = n%10;
   
    n = n/10;

    print(n,ans);
     ans.push_back(val);
    return ans;
}
int main()
{
    int n =456;
    vector<int> ans;
    print(n,ans);
    // reverse(ans.begin(),ans.end());
    for(int em : ans)
    {
        cout<<em<<" ";
    }
    return 0;
}