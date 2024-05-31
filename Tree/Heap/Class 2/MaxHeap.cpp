// code of max heap priority queue 

#include<iostream>
#include<queue> 
using namespace std;
int main()
{
    priority_queue<int> pq;
    pq.push(10);
    pq.push(20);
    pq.push(30);
    pq.push(5);
pq.pop();
// cout<<pq.top();

cout<<pq.empty();
    
}