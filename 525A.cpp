#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int ans=0;
    int keys[26]={0};
    for(int i=0;i<2*n-2;i+=2)
    {
        if(s[i]-s[i+1]=='a'-'A')
        {

        }
        else
        {
            if(keys[s[i+1]-'A']>=1)
            {
                keys[s[i+1]-'A']--;
                keys[s[i]-'a']++;
            }
            else
            {
                keys[s[i]-'a']++;
                ans++;
            }

        }

    }
    cout<<ans;

}

