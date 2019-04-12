#include <iostream>

using namespace std;
void input_array(int *A,int n){
    for(int i=0;i<n;i++)
        cin>>A[i];
}
int subset_sum(int *A,int s,int e,int c,int check){
    if(s>e)
    {
        if(c==0) check++;
        return check;
    }
    check=subset_sum(A,s+1,e,c+A[s],check);
    check=subset_sum(A,s+1,e,c,check);
    return check;
}
int main()
{
    int noOfTestCases;
    cin>>noOfTestCases;
    int checkWhetherSubsetIsZero[noOfTestCases];
    int n;
    for(int i=0;i<noOfTestCases;i++){
        cin>>n;
        int A[n];
        input_array(A,n);
        checkWhetherSubsetIsZero[i]=subset_sum(A,0,n-1,0,0);
    }
    for(int i=0;i<noOfTestCases;i++){
        if(checkWhetherSubsetIsZero[i]<2)
            cout<<"false"<<endl;
        else
            cout<<"true"<<endl;
    }

    return 0;
}
