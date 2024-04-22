#include <iostream>
using namespace std;

int derangement(int n) {
   int sum =0;

   for(int i=0;i<n;i++)
   {
    for(int j=i+1;j<n;j++)
    {
        sum++;
    }
   }
   return sum;
}

int main() {
    int n = 6;
    int result = derangement(n);
    cout << "Number of sequences possible for n = " << n << ": " << result << endl;
    return 0;
}