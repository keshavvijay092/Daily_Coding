#include<iostream>
#include<vector>
using namespace std;
int main()
{
    // vector<int> vt;
    // cout<<vt.size();
    // vt.push_back(1);
    // cout<<vt.capacity();

    // how to copy a vector 
    // vector<int> vt(5,0);
    // size and thenn value which needs to be asiigned 
    // cout<<vt.at(1);


// copy a vector 
vector<string> vt = {"asops","asests","heheeh"};
for(auto em:vt)
cout<<em<<" ";
vector<string> vt1(vt);
for(auto em:vt1)
cout<<em<<" ";

    return 0;
}