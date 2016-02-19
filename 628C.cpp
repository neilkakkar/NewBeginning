#include <bits/stdc++.h>

using namespace std;

int main()
{

    ios::sync_with_stdio(0);
    int n,k;
    string s;
    cin>>n>>k;
    cin>>s;
    int dmax=0;
    for(int i=0;i<n;i++)
    {
        dmax+=max(s[i]-'a','z'-s[i]);
    }
    if(k>dmax)
    {
        cout<<"-1\n";
        return 0;
    }
    string ans="";

    for(int i=0;i<n;i++)
    {
        dmax=max(s[i]-'a','z'-s[i]);
        if(k==0)
        {
            ans+=s[i];
        }
        else if(k<=dmax)
        {
            if(s[i]+k-'z'<=0)
            {
                ans+=s[i]+k;
            }
            else
            {
                ans+=s[i]-k;
            }
            k=0;
        }
        else
        {
            if(s[i]-'a'==dmax)
            {
                ans+='a';
            }
            else
            {
                ans+='z';
            }
            k-=dmax;
            //cout<<k<<endl;

        }
    }
    cout<<ans;


}

