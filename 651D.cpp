#include <bits/stdc++.h>

using namespace std;

#define sz (int)5e5+5

int dp1[sz];
int dp2[sz];
int main()
{
    int n,a,b,T;
    cin>>n>>a>>b>>T;
    string s="k";
    string r;
    cin>>r;
    s+=r;
    if(s[0]=='w')dp1[1]=1+b;
    else dp1[1]=1;
    for(int i=2;i<=n;i++)
    {
        dp[i]=dp[i-1]+a;
        if(s[i]=='w'){
            dp1[i]+=b;
        }
        dp1++;
    }
    dp2[1]=dp1[1];



}
