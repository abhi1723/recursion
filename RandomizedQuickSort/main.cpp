#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
void input_array(int *A,int n){
    for(int i=0;i<n;i++)
        cin>>A[i];
}
void display_array(int *A,int n){
    for(int i=0;i<n;i++)
        cout<<A[i]<<" ";
    cout<<endl;
}
void suffle_array(int *A,int s,int e){
    srand(time(NULL));
    int i,j,temp;
    for(int i=e;i>0;i--){
        j=rand()%(i+1);
        swap(A[i],A[j]);
    }
}
int partitioning(int *A,int s,int e){
    int pivot=A[e];
    int i=s-1,j;
    for(j=s;j<=e;j++){
        if(A[j]<pivot){
            i++;
            swap(A[i],A[j]);
        }
    }
    swap(A[i+1],A[e]);
    return (i+1);
}
void quickSort(int *A,int s,int e){
    if(s>=e) return;
    int positionOfPartition=partitioning(A,s,e);
    quickSort(A,s,positionOfPartition-1);
    quickSort(A,positionOfPartition+1,e);
}
int main()
{
    int n;
    cin>>n;
    int A[n];
    input_array(A,n);
    suffle_array(A,0,n-1);
    quickSort(A,0,n-1);
    display_array(A,n);
    return 0;
}
