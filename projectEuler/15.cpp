#include <bits/stdc++.h>

using namespace std;

long long dp[22][22];
int main()
{
    int x=22;
    dp[0][0]=1;
    for(int i=0;i<x;i++){
        dp[1][i]=1;
    }
    for(int i=0;i<x;i++){
        dp[i][1]=1;
    }
    for(int i=2;i<x;i++){
        for(int j=2;j<x;j++)
        {
            dp[i][j] = dp[i-1][j]+dp[i][j-1];
        }
    }
    cout<<dp[21][21];


}
