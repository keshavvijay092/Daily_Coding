#include<iostream> 
#include<unordered_map>
#include<map>
using namespace std;
int main()
{
    unordered_map<string,int> mp;
    // instertion pair se hoti hai 

    pair<string,int>p = make_pair("love",13);
    pair<string,int> q("helw",12);

    pair<string,int>r;

    mp.insert(p);
    mp.insert(q);
    mp.insert(r);

    mp["keshav"]= 1;

    cout<<"size of maps is " <<mp.size()<<endl;

   //access 
   cout<<mp.at("love")<<endl;
//    cout<<mp[love]<<endl;

    return 0;
}