#include <bits/stdc++.h>

using namespace std;

#define sz 102
#define ll long long
ll A[sz][sz];
ll dp[sz][sz];

int main()
{
    freopen("triangle.txt","r",stdin);
    int n=100;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cin>>A[i][j];
        }
    }
        dp[1][1]= A[1][1];
    for(int i=2;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            dp[i][j] = A[i][j]+max(dp[i-1][j],dp[i-1][j-1]);
            //cin>>A[i][j];
        }
    }
    ll ans=0;
    for(int i=0;i<sz;i++)
    {
        ans = max(ans,dp[n][i]);
    }
    cout<<ans<<endl;

}
