#include<iostream>
#include<climits>
using namespace std;
void MaxVal(int arr[],int i,int n,int &maxi)
{
    if(i>=n) return ;

    maxi = max(arr[i],maxi);

     MaxVal(arr,i+1,n,maxi);

}
int main()
{
    int arr[] = {1343434,2455,366,334,5343};
    int i=0;
    int n=5;
    int maxi = INT_MIN;
    MaxVal(arr,i,n,maxi);
    cout<<maxi<<endl;
    return 0;
}