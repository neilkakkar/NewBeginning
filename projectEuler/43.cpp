#include <bits/stdc++.h>

using namespace std;

#define ll long long
ll toint(string s)
{
    ll ans=0;
    for(int i=0;i<s.length();i++)
    {
        ans=ans*10+s[i]-'0';
    }
    return ans;
}
int sane(string s)
{
    if((s[3]-'0')%2==0 && (s[2]+s[3]+s[4]-3*'0')%3==0 && (s[5]-'0')%5==0 && abs(s[5]+s[7]-s[6]-'0')%11==0)
    {
        string x ="";x+=s[4];x+=s[5];x+=s[6];
        string y ="";y+=s[6];y+=s[7];y+=s[8];
        string z = "";z+=s[7];z+=s[8];z+=s[9];
        //cout<<x<<endl;
        if(toint(x)%7==0 && toint(y)%13==0 && toint(z)%17==0)
        {
            return 1;
        }
        return 0;
    }
    return 0;
}
int main()
{
    //cout<<sane("1406357289");
    long long int cnt=0;
    string r = "0123456789";
    while(next_permutation(r.begin(),r.end()))
    {
        if(sane(r))cnt+=toint(r);
        //r = next_permutation(r.begin(),r.end());
    }
    cout<<cnt;
    //*/
}
