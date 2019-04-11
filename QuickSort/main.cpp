#include <iostream>

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
int partitioning(int *A,int s,int e){
    int pivot=A[e];
    int i=s-1;
    for(int j=s;j<=e-1;j++){
        if(A[j]<pivot){
            i++;
            int temp=A[i];
            A[i]=A[j];
            A[j]=temp;
        }
    }
    int temp=A[i+1];
    A[i+1]=A[e];
    A[e]=temp;
    return (i+1);
}
void quickSort(int* A,int s,int e){
    if(s>=e) return;
    //int pivot=A[n];
    int pivot=partitioning(A,s,e);
    quickSort(A,s,pivot-1);
    quickSort(A,pivot+1,e);
}
int main()
{
    int n;
    cin>>n;
    int A[n];
    input_array(A,n);
    display_array(A,n);
    quickSort(A,0,n-1);
    display_array(A,n);
    return 0;
}
