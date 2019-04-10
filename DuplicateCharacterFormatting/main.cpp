#include <iostream>
#include <cstring>
#include<bits/stdc++.h>
using namespace std;
string formatTheWord(string word,int n,int len){
    if(n==-1) return "";
    string formattedWord="";
    formattedWord+=formatTheWord(word,n-1,len);
    if(n==len) formattedWord+=word[n];
    else {
            string s(1, word[n]);
            if(word[n]==word[n+1]) formattedWord+=(s+"*");
            else formattedWord+=word[n];
    }
    return formattedWord;
}
int main()
{
    string word,formattedWord;
    cin>>word;
    int len=word.length();
    formattedWord=formatTheWord(word,len-1,len-1);
    cout << formattedWord<< endl;
    return 0;
}
