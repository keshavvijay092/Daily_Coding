#include<iostream>
using namespace std;

void solve(int arr[3][3],int row,int col)
{
    int sum = 0;
    // for(int i=0;i<row;i++)
    // {
    //     for(int j=0;j<col;j++)
    //     {
    //         if(i == j) sum +=arr[i][j];
    //     }
    // }
    // o(n^2)

    // better approach one loop only 
    for(int i=0;i<row;i++)
    {
        sum +=arr[i][i];
    }
    cout<<"the answer of my question is : "<<sum<<endl;
    return ;
}
int main()
{
    int arr[3][3]={
        {1,2,3},
        {4,65,6},
        {7,8,9}
    };
   solve(arr,3,3);
    return 0;
}