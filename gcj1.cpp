#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("B-large.in","r",stdin);
    freopen("output.txt","w",stdout);
    int T;
    cin>>T;
    for(int It=1;It<=T;It++)
    {
        string s;
        cin>>s;
        int slen = s.length();
        int ans=0;
        for(int i=1;i<slen;i++)
        {
            if(s[i]!=s[i-1])
            {
                ans++;
            }

        }
        if(s[slen-1]=='-')
        {
            ans++;
        }
        printf("Case #%d: %d\n",It,ans);
    }
}
