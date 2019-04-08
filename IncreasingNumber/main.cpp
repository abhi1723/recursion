#include <iostream>

using namespace std;
// 1st Method
/*void printNumbersInIncreasingOrder(int n,int currentNumberToBePrinted){
    if(currentNumberToBePrinted==n){
        cout<<n;
        return;
    }
    cout<<currentNumberToBePrinted<<endl;
    printNumbersInIncreasingOrder(n,currentNumberToBePrinted+1);

}*/
//2nd Method
void printNumbersInIncreasingOrder(int n){
    if(n==0) return;
    printNumbersInIncreasingOrder(n-1);
    cout<<n<<endl;
}
int main()
{
    int n,currentNumberToBePrinted=1;
    cin>>n;
    //Function call for the first method
    //printNumbersInIncreasingOrder(n,currentNumberToBePrinted);
    //Function call for the second method
    printNumbersInIncreasingOrder(n);
    return 0;
}
