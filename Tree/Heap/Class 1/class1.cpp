#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class Heap{
    public:
    int *arr;
    int capacity;
    int size;

    Heap(int capacity)
    {
        this->arr = new int[capacity];
        this->capacity = capacity;
        // size current no. of element in heap
        this->size = 0;
    }

    void insert(int val)
    {
        if(size == capacity)
        {
            cout<<"Heap overflow"<<endl;
            return ;
        }
       // size increase kar jagega
       size++;
       int index = size;
       arr[index] = val;

        //take the val to its correct position 
        while(index>1)
        {
            int parentIndex = index/2;
            if(arr[index]>arr[parentIndex])
            {
                swap(arr[index],arr[parentIndex]);
                index = parentIndex;
            }
            else
            {
                break;
            }
        }
    }
    void printtheap()
    {
        for(int i=1;i<=size;i++)
        {
            cout<<arr[i]<<" ";
        }
    }

    int deleteNode()
    {
        int ans = arr[1];
        // replacement 
        arr[1] = arr[size];
        size--;

        int i = 1;
        while(i<size)
        {
            int largest = i;
            int left = 2*i;
            int right = 2*i+1;

            if(left<=size && arr[largest]<arr[left]){
                largest = left;
            }
            if(right<=size && arr[largest]<arr[right])
            {
                largest = right;
            }

            if(i == largest){
                break;
            }
            else 
            {
                swap(arr[i],arr[largest]);
                i = largest;
            }
        }

        return ans;
    }
};
void heapify(int *arr,int n,int i)
{
    int left  = 2*i;
    int right = 2*i+1;
    int large = i;

    // teeno mai se max lao 
    if(left<=n && arr[left]>arr[large])
    {
        large = left;
    }

    if(right<=n  && arr[right]> arr[large])
    {
        large = right;
    }

    if(i != large)
    {
        swap(arr[i],arr[large]);
        heapify(arr,n,large);
    }
}

void build(int arr[],int n)
{
    for(int i = n/2;i>0;i--)
    {
        heapify(arr,n,i);
    }
}
void heapsort(int arr[],int n)
{
while(n !=1)
{
    swap(arr[1],arr[n]);
    n--;
    heapify(arr,n,1);
}
}
int main()
{
    // Heap h(20);
    // h.insert(10);
    // h.insert(20);
    // h.insert(5);
    // h.insert(11);
    // h.insert(6);
    
    // cout<<"printing the content of heap:"<<endl;
    // h.printtheap();
    // cout<<endl;

    // int ans = h.deleteNode();
    // cout<<"Answer: "<<ans<<endl;
    //  cout<<"printing the new heap: ";
    // h.printtheap();

    int arr[] = {-1,5,10,15,20,25,12};
    build(arr,6);
    cout<<"printing heap"<<endl;
    for(int i=1;i<=6;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    heapsort(arr,6);
    cout<<"printing heap: "<<endl;
    for(int i=1;i<=6;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
} 