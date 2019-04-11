#include <iostream>
#include <cstring>
#include <bits/stdc++.h>
using namespace std;
int generateSubsequence(char* word,int s,int e,string newSequence,int c){
   if(s>e) {cout<<newSequence<<" ";return (c+1);}
   string sequence1=newSequence;
   string sequence2=newSequence;
   string wordToString(1,word[s]);
   sequence1+=wordToString;
   c=generateSubsequence(word,s+1,e,sequence2,c);
   c=generateSubsequence(word,s+1,e,sequence1,c);
   return  c;
}
int main()
{
    char word[1000];
    string se="";
    cin>>word;
    int len=strlen(word);
    int c =generateSubsequence(word,0,len-1,se,0);
    cout<<endl<<c;
    return 0;
}
