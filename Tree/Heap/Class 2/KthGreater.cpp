// find the kth greater value 
#include<queue> 
#include<iostream>
using namespace std;

int  KthGreaterValue(int arr[],int n,int k)
{
    priority_queue<int,vector<int> , greater<int>> pq;

    for(int i=0;i<k;i++)
    {
        pq.push(arr[i]);
    }

    for(int i=k;i<n;i++)
    {
        int currElement = pq.top();
        int newElement = arr[i];

        if(currElement < newElement)
        {
            pq.pop();
            pq.push(newElement);
        }
    }

    return pq.top();

}
int main()
{
    int arr[] = {10,5,20,4,15};
    int n = 5;
    int k =15;
    int ans = KthGreaterValue(arr,n,k);
    cout<<" the Greater value at "<<k<<"rd is "<<ans<<endl;
    return 0;
}