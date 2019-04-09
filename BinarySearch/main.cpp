#include <iostream>

using namespace std;
void input_array(int* A,int n){
    for(int i=0;i<n;i++)
        cin>>A[i];
}
int binary_search_algo(int *A,int s,int e,int elementToBeSearched){
    if(s>e) return -1;
    int mid=(s+e)/2;
    if(A[mid]==elementToBeSearched) return mid;
    if(A[mid]<elementToBeSearched) s=mid+1;
    if(A[mid]>elementToBeSearched) e=mid-1;
    int foundOrNotFound=binary_search_algo(A,s,e,elementToBeSearched);
    return foundOrNotFound;
}
int main()
{
    int n;
    cin>>n;
    int A[n];
    input_array(A,n);
    int elementToBeSearched;
    cin>>elementToBeSearched;
    elementToBeSearched=binary_search_algo(A,0,n,elementToBeSearched);
    cout << elementToBeSearched << endl;
    return 0;
}
