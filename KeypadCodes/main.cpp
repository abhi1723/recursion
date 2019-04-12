#include <iostream>
#include <cstring>
#include <sstream>
using namespace std;
void possibleStrings(string  numberInString,string possibleString){
    if(numberInString.length()==0) {cout<< possibleString<<" ";return;}
    string uri="",turi="";
    uri+=numberInString[0];
    for(int i=1;i<numberInString.length();i++)
        turi+=numberInString[i];
    stringstream geek(uri);
    int n;
    geek>>n;
    int p=n%10;
    if(p==0)
        possibleStrings(turi,possibleString+"");
    if(p==1){
        possibleStrings(turi,possibleString+"a");
        possibleStrings(turi,possibleString+"b");
        possibleStrings(turi,possibleString+"c");
    }
    if(p==2){
        possibleStrings(turi,possibleString+"d");
        possibleStrings(turi,possibleString+"e");
        possibleStrings(turi,possibleString+"f");
    }
    if(p==3){
        possibleStrings(turi,possibleString+"g");
        possibleStrings(turi,possibleString+"h");
        possibleStrings(turi,possibleString+"i");
    }
    if(p==4){
        possibleStrings(turi,possibleString+"j");
        possibleStrings(turi,possibleString+"k");
        possibleStrings(turi,possibleString+"l");
    }
    if(p==5){
        possibleStrings(turi,possibleString+"m");
        possibleStrings(turi,possibleString+"n");
        possibleStrings(turi,possibleString+"o");
    }
    if(p==6){
        possibleStrings(turi,possibleString+"p");
        possibleStrings(turi,possibleString+"q");
        possibleStrings(turi,possibleString+"r");
        possibleStrings(turi,possibleString+"s");
    }
    if(p==7){
        possibleStrings(turi,possibleString+"t");
        possibleStrings(turi,possibleString+"u");
        possibleStrings(turi,possibleString+"v");
    }
    if(p==8){
        possibleStrings(turi,possibleString+"w");
        possibleStrings(turi,possibleString+"x");
    }
    if(p==9){
        possibleStrings(turi,possibleString+"y");
        possibleStrings(turi,possibleString+"z");
    }
}
int main()
{
    string numberInString;
    cin>>numberInString;
    stringstream geek(numberInString);
    int n,p=1,pd=0;
    geek>>n;
    for(int i=0;i<numberInString.length();i++){
        string s(1,numberInString[i]);
        stringstream geeks(s);
         geeks>>pd;
        if(pd==1 || pd==2|| pd==3|| pd==4|| pd==5|| pd==7){
            p=p*3;
        }
        if(pd==6) p*=4;
        if(pd==8||pd==9) p*=2;
    }
    possibleStrings(numberInString,"");
    cout<<endl<<p;
    return 0;
}
