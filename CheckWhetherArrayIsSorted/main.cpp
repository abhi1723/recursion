#include <iostream>
#define lint long long int
using namespace std;
bool isSorted(lint *arrayToBeSorted,int n){
    if(n==0)return true;
    bool check=isSorted(arrayToBeSorted,n-1);
    if(!check) return false;
    if(arrayToBeSorted[n]>=arrayToBeSorted[n-1]) return true;
    else return false;
}
void printArray(int *arrayToBeChecked,int n){
    for(int i=0;i<n;i++){
        cout<<arrayToBeChecked[i]<<" ";
    }
}
int main()
{
    int n;
    cin>>n;
    lint arrayToBeChecked[n];
    for(int i=0;i<n;i++)
        cin>>arrayToBeChecked[i];
    bool result = isSorted(arrayToBeChecked,n);
    if(result) cout<<"true"; else cout<<"false";
    return 0;
}
