#include <bits/stdc++.h>

using namespace std;

string rev(string s)
{
    int slen = s.length();
    string x="";
    for(int i=slen-1;i>=0;i--)
    {
        x+=s[i];
    }
    return x;
}
int main()
{
    string s;
    cin>>s;

    string r=s;
    r[1]=s[2];
    r[2]=s[4];
    r[3]=s[3];
    r[4]=s[1];

    long long x=0;
    for(int i=0;i<5;i++)
    {
        x =10*x+r[i]-'0';
    }

    long long temp=x;
    for(int i=0;i<4;i++)
    {
        temp = temp*x;
        temp =temp%(int)1e5;
    }
    string c = "";
    while(temp>0)
    {
        c+=temp%10+'0';
        temp = temp/10;
    }
    if(c.length()==5)
    {
        cout<<rev(c);
    }
    else
    {
        for(int i=c.length();i<5;i++)
        {
            cout<<"0";
        }
        cout<<rev(c);
    }

    //cout<<temp%(int)1e5;

}
