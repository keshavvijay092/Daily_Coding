#include<iostream> 
#include<vector>
#include<algorithm>
using namespace std;

void print(vector<int> ans)
{
    if(!ans.size()) return ;
     cout<<ans.back()<<" ";
      ans.pop_back();
      print(ans);
}

int main()
{
    vector<int> ans = {1,2,3,4,6,9};
    reverse(ans.begin(),ans.end());
    print(ans);
    return 0;
}