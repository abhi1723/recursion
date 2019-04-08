#include <iostream>

using namespace std;
void printNumbersInDecreasingOrder(int n){
    if(n==0) return;
    cout<<n;
    printNumbersInDecreasingOrder(n-1);
}

int main()
{
    int n;
    cin>>n;
    printNumbersInDecreasingOrder(n);
    return 0;
}
