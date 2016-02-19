#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    string s;
    cin>>s;
    int slen = s.length();
    long long ans=0;
    for(int i=0;i<slen-1;i++)
    {
        if(((s[i]-'0')*10+(s[i+1]-'0'))%4==0)
        {
            ans+=i+1;
        }

    }
    for(int i=0;i<slen;i++)
    {
        if((s[i]-'0')%4==0)
        {
            ans++;
        }
    }
    cout<<ans;

}

