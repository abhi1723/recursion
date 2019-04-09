#include <iostream>
#include <cstring>
using namespace std;
string extractString(int digit){
    switch(digit){
    case 0:
        return "zero";
        break;
    case 1:
        return "one";
        break;
    case 2:
        return "two";
        break;
    case 3:
        return "three";
        break;
    case 4:
        return "four";
        break;
    case 5:
        return "five";
        break;
    case 6:
        return "six";
        break;
    case 7:
        return "seven";
        break;
    case 8:
        return "eight";
        break;
    case 9:
        return "nine";
        break;
    }
}
string numberToString(int n){
    if(n==0)
        return "";
    int digit=n%10;
    string digitInWord=extractString(digit);
    string finalString=numberToString(n/10);
    finalString=finalString+digitInWord+" ";
    return finalString;
}
int main()
{
    int number;
    cin>>number;
    string word=numberToString(number);
    cout<<word;
    return 0;
}
