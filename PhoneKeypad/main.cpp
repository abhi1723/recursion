#include <iostream>
#include <cstring>
#include <sstream>
using namespace std;
void possibleStrings(string  numberInString,string possibleString){
    if(numberInString.length()==0) {cout<< possibleString<<endl;return;}
    string uri="",turi="";
    uri+=numberInString[0];
    for(int i=1;i<numberInString.length();i++)
        turi+=numberInString[i];
    stringstream geek(uri);
    int n;
    geek>>n;
    int p=n%10;
    if(p==0)
        possibleStrings(turi,possibleString+" ");
    if(p==1){
        possibleStrings(turi,possibleString+".");
        possibleStrings(turi,possibleString+"+");
        possibleStrings(turi,possibleString+"@");
        possibleStrings(turi,possibleString+"$");
    }
    if(p==2){
        possibleStrings(turi,possibleString+"a");
        possibleStrings(turi,possibleString+"b");
        possibleStrings(turi,possibleString+"c");
    }
    if(p==3){
        possibleStrings(turi,possibleString+"d");
        possibleStrings(turi,possibleString+"e");
        possibleStrings(turi,possibleString+"f");
    }
    if(p==4){
        possibleStrings(turi,possibleString+"g");
        possibleStrings(turi,possibleString+"h");
        possibleStrings(turi,possibleString+"i");
    }
    if(p==5){
        possibleStrings(turi,possibleString+"j");
        possibleStrings(turi,possibleString+"k");
        possibleStrings(turi,possibleString+"l");
    }
    if(p==6){
        possibleStrings(turi,possibleString+"m");
        possibleStrings(turi,possibleString+"n");
        possibleStrings(turi,possibleString+"o");
    }
    if(p==7){
        possibleStrings(turi,possibleString+"p");
        possibleStrings(turi,possibleString+"q");
        possibleStrings(turi,possibleString+"r");
        possibleStrings(turi,possibleString+"s");
    }
    if(p==8){
        possibleStrings(turi,possibleString+"t");
        possibleStrings(turi,possibleString+"u");
        possibleStrings(turi,possibleString+"v");
    }
    if(p==9){
        possibleStrings(turi,possibleString+"w");
        possibleStrings(turi,possibleString+"x");
        possibleStrings(turi,possibleString+"y");
        possibleStrings(turi,possibleString+"z");
    }
}
int main()
{
    string numberInString;
    cin>>numberInString;
    stringstream geek(numberInString);
    int n;
    geek>>n;
    possibleStrings(numberInString,"");
    return 0;
}
