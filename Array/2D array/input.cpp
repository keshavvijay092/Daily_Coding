#include<iostream>
using namespace std;
int main()
{


    int arr[3][3];
    int row =3 ,col = 3;
    //    cout<<row<<" "<<col;
    for(int i=0;i<row;i++)
    {
        for(int j = 0;j<col;j++)
        {
              cout<<"enter the value "<<endl;
              cin>>arr[i][j];
        }
    }

    cout<<"ab print karenge"<<endl;
    for(int i=0;i<row;i++)
    {
        for(int j = 0;j<col;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}