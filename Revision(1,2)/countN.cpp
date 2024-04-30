// count number from n to 1 

// #include<iostream>
// using namespace std;

// void count(int n)
// {
//     if(n == 0) return ;

//     cout<<n<<" -> ";
//     count(n-1);
//     return ;
// }
// int main()
// {
//     int n = 10;
//     count(n);
//     return 0;
// }


// count number from 1 to n

#include<iostream>
using namespace std;
void count(int n)
{
    if( n == 0) return ;

    count(n-1);
    cout<<n<<" -> ";
    return ;
}
int main()
{
    int n = 10;
    count(n);
    return 0;
}