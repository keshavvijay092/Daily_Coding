#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int getlength(char arr[])
{
    int i = 0;
    while(arr[i] != '\0')
    {
        i++;
    }
    return i;
}
int main()
{
    // char arr[100];
    // cin.getline(arr,100);
    // cout<<arr;

    char arr[100];
    cout<<"Enter i/p: "<<endl;
   cin.getline(arr,100);
    cout<<endl<<arr<<endl;
    int an = getlength(arr);
     cout<<"size aagya 8 hehe "<<an<<endl;
    return 0;
}