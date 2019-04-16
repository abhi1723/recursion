#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
int permutation(char * word,int i,string referenceWord[],int k,string refs){
    if(word[i]=='\0')
        {
            //cout<<word<<endl;
            string wrd=word;
            if(wrd<refs){
            /*int t=1;
            for(int h=0;h<k;h++){
                if(referenceWord[h]==wrd)
                t=2;
            }
            if(t==1){*/
            referenceWord[k]=word;
            k++;
            }
            //}
            return k;
        }
    for(int j=i;word[j]!='\0';j++){
        swap(word[i],word[j]);
        k=permutation(word,i+1,referenceWord,k,refs);
        swap(word[i],word[j]);
    }
    return k;
}
bool compare(string a,string b){
    int len=a.length();
    int i=0;
    int p=-1;
    while(i<len){
        if(a[i]!=b[i]){
            p=i;
            break;
        }
        i++;
    }
    if(a[0]!=b[0]){
    if(a[p]>b[p])
        return true;
    else return false;
    }
    else{
        if(a[p]>b[p])
        return true;
    else return false;
    }
}
int main()
{
    char word[1000000];
    cin>>word;
    string referenceWord[10000];
    string refs=word;
    int k=permutation(word,0,referenceWord,0,refs);
    //sort(referenceWord,referenceWord+k);
    for(int i=0;i<k;i++)
        cout<<referenceWord[i]<<endl;
    return 0;
}
