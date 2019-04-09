#include <iostream>
#include <algorithm>
#define lint long long int
using namespace std;
void input_array(lint* A,lint n){
    for(lint i=0;i<n;i++)
        cin>>A[i];
}
/*lint searchLastOccuranceOfTheElement(lint *A,lint s,lint e,lint elementToBeSearched,lint index){
    if(s>e) return -1;
    lint mid=(s+e)/2;
    if(A[mid]==elementToBeSearched) {index=mid;s=mid+1;}
    if(A[mid]<elementToBeSearched) s=mid+1;
    if(A[mid]>elementToBeSearched) e=mid-1;
    lint newIndex=searchLastOccuranceOfTheElement(A,s,e,elementToBeSearched,index);
    if(newIndex<index)
    return index;
    else return newIndex;
}*/
lint searchLastOccuranceOfElementLinearSearch(lint *A,int n,int elementToBeSearched){
    if(n==-1)return -1;
    if(A[n]==elementToBeSearched) return n;
    int foundOrNotFound=searchLastOccuranceOfElementLinearSearch(A,n-1,elementToBeSearched);
    return foundOrNotFound;
}
int main()
{
    lint n;
    cin>>n;
    lint A[n];
    input_array(A,n);
    lint elementToBeSearched;
    cin>>elementToBeSearched;
    sort(A,A+n);
    //lint foundOrNotFound=searchLastOccuranceOfTheElement(A,0,n-1,elementToBeSearched,-1);
    lint foundOrNotFound=searchLastOccuranceOfElementLinearSearch(A,n-1,elementToBeSearched);
    cout<<foundOrNotFound;
    return 0;
}
