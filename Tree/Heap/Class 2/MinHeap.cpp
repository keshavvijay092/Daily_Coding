#include<iostream>
#include<queue>
using namespace std;
int main()
{
    priority_queue<int,vector<int>,greater<int>> pq;
    pq.push(20);
    pq.push(10);
    pq.push(21);
    pq.push(13);
    pq.push(12);
    pq.pop();
    cout<<pq.top();
    return 0;
}