#include<iostream>
#include<vector> 
using namespace std;
int main()
{
    vector<vector<int>> arr(5,vector<int>(10,0));
    // initialzer type name size , each row size,element

    // row-> size = arr.size();
    int n = arr.size();
    for(int i=0;i<n;i++)
    {
        for(int j = 0;j<arr[i].size();j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}