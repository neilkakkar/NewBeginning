#include <bits/stdc++.h>

using namespace std;
#define ll long long
const int sz=201;

ll dp[sz];
int values[8] = {1,2,5,10,20,50,100,200};
int main()
{
    dp[0]=1;
    //dp[1]=1;
    for(int j=0;j<8;j++)
    {
        for(int i=1;i<sz;i++)
        {
            if(i-values[j]>=0)
            dp[i] += dp[i-values[j]];
        }
    }
    cout<<dp[200];

}
