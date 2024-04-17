// we need to get the sum row Wise
#include<iostream>
#include<vector>
using namespace std;
vector<int> rowwise(int arr[3][4],int row,int col)
{
    vector<int> ans;
    for(int i = 0;i<row;i++)
    {
        int sum = 0;
    for(int j = 0;j<col;j++)
    {
        sum += arr[i][j];
    }
    ans.push_back(sum);
    }
    return ans;
}
void printArray(int arr2[3][4],int row,int col)
{
   for(int i=0;i<row;i++)
   {
    for(int j=0;j<col;j++)
    {
        cout<<arr2[i][j]<<" ";
    }
    cout<<endl;
   }
}
int main()
{
    int arr[3][4]={
        {10,20,5,7},
        {2,4,6,8},
        {10,15,15,10}
    };

 vector<int> ans = rowwise(arr,3,4);
printArray(arr,3,4);

for(auto em:ans)
{
    cout<<em<<" ";
    
}
    return 0;
}