#include <bits/stdc++.h>

using namespace std;
#define sz 105

int pr[sz][sz];
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N,K;
        cin>>N>>K;
        int p[K+1];
        for(int i=0;i<=N;i++)
        {
            for(int j=0;j<=K;j++)
            {
                pr[i][j]=(int)2e9;
            }
        }
        p[0]=0;
        for(int i=1;i<=K;i++)
        {
            cin>>p[i];
            if(p[i]!=-1)
            pr[1][i]=p[i];
            else
                pr[1][i]=(int)2e9;
        }
        for(int i=2;i<=N;i++)
        {
            for(int j=1;j<=K;j++)
            {
                for(int k=0;k<=j;k++)
                {
                    if(p[k]!=-1)
                    pr[i][j] = min(pr[i][j],pr[i-1][j-k]+p[k]);
                }
            }
        }
        if(pr[N][K]==(int)2e9)
        {
            cout<<"-1"<<endl;
        }
        else
        cout<<pr[N][K]<<endl;
    }
}
