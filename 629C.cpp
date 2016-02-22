#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define sz 2005
#define MOD ((int)1e9+7)
ll n,m,dp[sz][sz];

int main()
{
    for(int i=0;i<sz;i++)
    {
        for(int j=0;j<sz;j++)
        {
            dp[i][j]=0;
        }
    }
    ios_base::sync_with_stdio(0);
    cin>>n>>m;
    string s;
    cin>>s;

    dp[0][0]=1;
    for(int i=1;i<=n-m;i++)
    {
        dp[i][0] = dp[i-1][1];
        for(int j=1;j<=i;j++)
        {
            dp[i][j] = dp[i-1][j-1]+dp[i-1][j+1];
            dp[i][j]%=MOD;
        }
    }
    int b,minB;
    minB = MOD;
    b=0;
    for(int i=0;i<m;i++)
    {
        if(s[i]=='(')
        {
            b++;
        }
        else
            b--;
        minB = min(b,minB);
    }
    ll ans=0;
    for(int i=0;i<=n-m;i++)
    {
        for(int j=0;j<=i;j++)
        {
            if(j>=-minB)
            {
                if(j+b>=0 && j+b<=n-m)
                {
                    ans+=dp[i][j]*dp[n-m-i][j+b] % MOD;
                    ans%=MOD;
                }
            }

        }
    }
    cout<<ans;


}

