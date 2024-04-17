#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v1(10,0);
    vector<int> v2(8,1);
    vector<int> v3(2,4);
    vector<int> v4(5,2);
    vector<int>v5(9,1);

    vector<vector<int>> brr;
    brr.push_back(v1);
    brr.push_back(v2);
    brr.push_back(v3);
    brr.push_back(v4);
    brr.push_back(v5);

    for(int i=0;i<brr.size();i++)
    {
        for(int j=0;j<brr[i].size();j++)
        {
            cout<<brr[i][j]<<" ";
        }
        cout<<endl;
    }






    return 0;
}