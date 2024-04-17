#include<iostream>
using namespace std;
int print(int arr[3][3],int row,int col)
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
void transpose(int arr[3][3],int row ,int col)
{
    for(int i=0;i<row;i++)
    {
        for(int j=i;j<col;j++)
        {
            swap(arr[i][j],arr[j][i]);
        }
    }
    print(arr,row,col);
    return ;
}
int main()
{
    int arr[3][3]= {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
 print(arr,3,3);
 cout<<endl;
    transpose(arr,3,3);
    return 0;
}