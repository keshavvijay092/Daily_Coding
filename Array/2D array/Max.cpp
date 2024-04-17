#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;
int maxVal(int arr[3][3],int row,int col)
{
    int maxVal = INT_MIN;
for(int i=0;i<row;i++)
{
    for(int j=0;j<col;j++)
    {
        maxVal = max(maxVal,arr[i][j]);
    }
}
return maxVal;
}
int main()
{
 
    int arr[3][3]= {
        {4,5,12},
        {55,54,23},
        {12,99,121}
    };
    cout<<"this is the maxx val in a matrix "<<maxVal(arr,3,3);    
    return 0;
}