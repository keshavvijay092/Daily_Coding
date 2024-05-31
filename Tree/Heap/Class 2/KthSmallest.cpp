// we have been given an input array and we have to find the kth smallest element in that array 
#include<iostream>
#include<queue>
using namespace std;

int getKthSmallestElement(int arr[],int n , int k)
{
    priority_queue<int> pq;
    
    for(int i = 0;i<k;i++)
    {
        pq.push(arr[i]);
    }

    // for remaining element push only if they are less than top

    for(int i = k;i<n;i++)
    {
        int topElement = pq.top();
        if(arr[i] < topElement)
        {
            pq.pop();
            pq.push(arr[i]);
        }
    }

    return pq.top();
}
int main()
{
    int arr[] = {10,5,20,4,15};
    int n = 5;
    int k = 3;

    int ans = getKthSmallestElement(arr,n,k);
    cout<<"the "<<k<<"rd element is "<<ans<<endl;
    return 0;
}