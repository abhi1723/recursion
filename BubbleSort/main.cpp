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
void swapping(int *A,int n,int current_pos){
    if(current_pos==n) return;
    if(A[current_pos]>A[current_pos+1]){
        int temp=A[current_pos];
        A[current_pos]=A[current_pos+1];
        A[current_pos+1]=temp;
    }
    swapping(A,n,current_pos+1);
}
void bubbleSort(int *A,int n){
    if(n==0) return;
    swapping(A,n,0);
    /*for(int i=0;i<=n-1;i++){
        if(A[i]>A[i+1]){
            int temp=A[i];
            A[i]=A[i+1];
            A[i+1]=temp;
        }
    }*/
    bubbleSort(A,n-1);
}
int main()
{
     int n;
    cin>>n;
    int A[n];
    input_array(A,n);
    bubbleSort(A,n-1);
    display_array(A,n);
    return 0;
}
