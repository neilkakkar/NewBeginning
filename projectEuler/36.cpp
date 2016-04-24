#include<bits/stdc++.h>

using namespace std;

const int sz = (int)1e6+1;

string toString(int a)
{
    string r ="";
    while(a>0)
    {
        string x = "";
        x+=a%10+'0';
        a = a/10;
        r = x+r;
    }
    return r;
}
int toint(string s)
{
    int ans=0;
    for(int i=0;i<s.length();i++)
    {
        ans = ans*10 + s[i]-'0';
    }
    return ans;
}
string toBin(int a)
{
    string r ="";
    string x="";
    while(a)
    {
        if(a%2==0 && r==""){
            x+="0";
                    a/=2;
                    continue;
        }
        r+=a%2+'0';
        //else r+="0";
        a/=2;
    }
    return r+x;

}
int ispalin(string s)
{
    int slen = s.length();
    int lp =0;
    int rp = slen-1;
    while(lp<rp)
    {
        if(s[lp]!=s[rp])return 0;
        lp++;
        rp--;
    }
    return 1;

}
int main()
{
    int sum=0;
    for(int i=1;i<sz;i++)
    {
        if(ispalin(toString(i)) && ispalin(toBin(i)))
        {
            sum+=i;
        }
    }
    cout<<sum;
}
