#include<iostream>
using namespace std;

// row wise access
void printArray(int arr2[2][4],int row,int col)
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

void printCArray(int arr2[2][4],int row,int col)
{
    for(int i=0;i<col;i++)
    {
        for(int j = 0;j<row;j++)
        {
            cout<<arr2[j][i]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
   
   int brr[]={1,2,3,4};
//    cout<<brr[2];

    // creation of 2d array
    // int arr[5][5];
    int arr2[2][4] = {
        {1,2,3,4},
        {5,6,7,8}
    };

    int arr3[4][3]= {
        {1,2,3},
        {4,5,6},
        {7,8,9},
        {10,11,12}
    };

    printCArray(arr2,2,4);
     return 0;
}



// 2d array 
// ------------------------------------------------------
// ------------------------------------------------------
// ------------------------------------------------------
// ------------------------------------------------------
// ------------------------------------------------------