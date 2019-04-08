#include <iostream>
#include <cstring>
using namespace std;
int convertToInteger(char* word,int len,int pro){
    if(len==-1){
        return 0;
    }
    char c=(word[len]-48);
    int num=c;
    int res=convertToInteger(word,len-1,pro*10);
    res=res+(num*pro);
    return res;
}
int main()
{
    char word[1000];
    cin>>word;
    int len=strlen(word);
    int result=convertToInteger(word,len-1,1);
    cout<<result;
    return 0;
}
