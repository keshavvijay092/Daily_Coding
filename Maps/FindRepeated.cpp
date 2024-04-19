// You are given an integer n and an integer array arr of size n+2. All elements of the array are in the range from 1 to n.
//  Also,all elements occur once except two numbers which occur twice. Find the two repeating numbers.
// Note: Return the numbers in their order of appearing twice. So, if X and Y are the repeating numbers, 
// and X's second appearance comes before second appearance of Y, then the order should be (X, Y).

#include<iostream>
using namespace std;
#include<vector>
#include<map>
int main()
{
    vector<int> arr = { 1,3,3,4,2,1};
    int n = arr.size();
     map<int,int> val;
    
    for(int i=0;i<n;i++)
    {
        val[arr[i]]++;
    }
    vector<int> ans;
    for( auto em: val)
    {
        if(em.second == 2)
        {
            ans.push_back(em.first);
        }
    }

    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}