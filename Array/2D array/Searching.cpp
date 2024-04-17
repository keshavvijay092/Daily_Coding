#include<iostream>
using namespace std;

void input(int arr[3][3],int row,int col)
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<"enter the element"<<" ";
            cin>>arr[i][j];
            cout<<endl;
        }
    }
  
}

void print(int arr[3][3],int row,int col)
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
bool search(int arr[3][3],int row,int col,int key)
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(arr[i][j] == key)
            {
                return true;
           
            }
        }
    }
    return false;    
}
int main()
{

    // input function
    // print that 2d matrix
    // search in that matrix
    int arr[3][3];
    input(arr,3,3);
    print(arr,3,3);
    bool ans = search(arr,3,3,14);
    if(ans)
    {
cout<<"yes";
    }
    else
    {
cout<<"no";
    }
    
    return 0;
}