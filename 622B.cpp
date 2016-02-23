#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    int hour = (s[0]-'0')*10+(s[1]-'0');
    int minutes = (s[3]-'0')*10+(s[4]-'0');
    //cout<<hour<<" "<<minutes;
    int add;
    cin>>add;

    int hadd= add/60;
    int madd = add%60;

    int newMin = minutes+madd;
    int carry = newMin/60;
    newMin = newMin %60;

    int newHour = hour+hadd+carry;
    newHour = newHour%24;
    string H="";
    string M = "";
    if(newHour==0)
    {
        H="00";
    }
    else
    {
        H+=newHour/10+'0';
        H+=newHour%10+'0';
    }
    if(newMin==0)
    {
        M="00";
    }
    else
    {

        M+=newMin/10+'0';
        M+=newMin%10+'0';
    }
    cout<<H<<":"<<M;
}
