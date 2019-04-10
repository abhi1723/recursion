#include <iostream>
#define lint long long int
using namespace std;
void input_array(lint *A,int n){
    for(lint i=0;i<n;i++)
        cin>>A[i];
}
void display_array(lint *A,lint n){
    for(lint i=0;i<n;i++)
        {cout<<A[i]<<" ";}
}
void merging(lint *A,int s,int mid,int e){
    lint i=s,j=mid+1,k=s;
    lint temp[100000000];
    while(i<=mid && j<=e){
        if(A[i]<A[j]){
            temp[k++]=A[i++];
        }
        else temp[k++]=A[j++];
    }
    while(i<=mid)
        temp[k++]=A[i++];
    while(j<=e)
        temp[k++]=A[j++];
    for(int i=s;i<=e;i++){
        A[i]=temp[i];
    }
}
void mergeSort(lint *A,int s,int e){
    if(s==e) return;
    lint mid=(s+e)/2;
    mergeSort(A,s,mid);
    mergeSort(A,mid+1,e);
    merging(A,s,mid,e);
}
int main()
{
    int n;
    cin>>n;
    lint A[n];
    input_array(A,n);
    mergeSort(A,0,n-1);
    display_array(A,n);
    return 0;
}
