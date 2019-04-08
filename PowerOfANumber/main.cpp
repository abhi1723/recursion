#include <iostream>
#define lint long long int
using namespace std;
lint findPower(int base,int power,lint result){
    if(power==0)
        return 1;
    if(power==1)
        return result;
    findPower(base,power-1,result*base);

}
int main()
{
    int base,power;
    cin>>base>>power;
    lint result=base;
    lint result_final=findPower(base,power,result);
    cout<<result_final;
    return 0;
}
