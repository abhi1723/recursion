#include <iostream>

using namespace std;
void input_array(int* A,int n){
    for(int i=0;i<n;i++)
        cin>>A[i];
}
void display_array(int* A,int n){
    for(int i=0;i<n;i++)
        cout<<A[i]<<" ";
}
int linear_search(int *A,int n,int elementToBeSearched){
    if(n==-1) return -1;
    int c=linear_search(A,n-1,elementToBeSearched);
    if(c==-1){
        if(A[n]==elementToBeSearched)c=n;
    }
    return c;
}
int main()
{
    int n;
    cin>>n;
    int A[n];
    input_array(A,n);
    int elementToBeSearched;
    cin>>elementToBeSearched;
    int foundOrNotFound=linear_search(A,n,elementToBeSearched);
    if(foundOrNotFound==-1)cout<<"Element Not Found";
    else cout<<"Element Found at index "<<foundOrNotFound;
    //display_array(A,n);
    return 0;
}
