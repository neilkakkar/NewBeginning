#include <bits/stdc++.h>

using namespace std;
#define sz 3005

int A[sz][sz];
int main()
{
    ios::sync_with_stdio(0);
    int n,m;
    cin>>n>>m;
    long long ans=0;
    for(int i=1;i<=n;i++)
    {
        string s;
        cin>>s;
        for(int j=1;j<=m;j++)
        {
            if(s[j-1]=='z')
            {
                A[i][j]=1;
                ans++;
            }
            else
            {
                A[i][j]=0;
            }
        }
    }
    int N=1;
    while(N<min(n,m))
    {
        for(int i=1;i+N<=n;i++)
        {
            for(int j=1;j+N<=m;j++)
            {
                int flag=0;
                for(int k=0;k<=N;k++)
                {
                    if(A[i][j+k]!=1)
                    {
                        flag=1;
                        break;
                    }
                    if(A[i+N][j+k]!=1)
                    {
                        flag=1;
                        break;
                    }
                    if(A[i+k][j+N-k]!=1)
                    {
                        flag=1;
                        break;
                    }
                }
                if(flag==0)
                {
                    ans++;
                }

            }
        }
        N++;
    }
    cout<<ans;

}

