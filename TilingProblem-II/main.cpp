#include <iostream>

using namespace std;
// Not effective For very large numbers. For those numbers, Dynamic programming needs to be done. Check for the code in the Dynamic Programming section.
int tilingProblem(int n,int m){
    int final_count=0;
    if(n==0) return 1;
    else if(n<0) return 0;
    else if(n<m) final_count+=tilingProblem(n-1,m);
    else {
        final_count+=(tilingProblem(n-1,m)+tilingProblem(n-m,m));
    }
    return final_count;
}
int main()
{
    int n,m;
    int noOfTestCases;
    cin>>noOfTestCases;
    int results[noOfTestCases];
    for(int i=0;i<noOfTestCases;i++){
        cin>>n>>m;
        int noOfWays=tilingProblem(n,m);
        results[i]=noOfWays;
    }
    for(int i=0;i<noOfTestCases;i++)
        cout<<(results[i]%1000000007)<<endl;
    return 0;
}
