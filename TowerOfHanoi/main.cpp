#include <iostream>

using namespace std;
void towerOfHanoi(int n,char source,char helper,char destination){
    if(n==0) return;
    towerOfHanoi(n-1,'A','B','C');
    cout<<"Moving ring "<<n<<" from "<<source<<" to "<<destination<<endl;
    towerOfHanoi(n-1,'C','A','B');
}
int main()
{
    int n;
    cin>>n;
    towerOfHanoi(n,'A','C','B');
    return 0;
}
