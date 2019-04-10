#include <iostream>

using namespace std;
void input_array(int *A,int n){
    for(int i=0;i<n;i++)
        cin>>A[i];
}
void search_number(int *A,int n,int elementToBeSearched){
    if(n==-1) return;
    search_number(A,n-1,elementToBeSearched);
    if(A[n]==elementToBeSearched) cout<<(n)<<" ";
}
int main()
{
    int n;
    cin>>n;
    int A[n];
    input_array(A,n);
    int elementToBeSearched;
    cin>>elementToBeSearched;
    search_number(A,n,elementToBeSearched);
    return 0;
}
