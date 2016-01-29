#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cin>>N;

    int inc[N+1];
    for(int i=0;i<=N;i++)
    {
        inc[i]=0;
    }
    vector<int> ans;
    int given[N][N];
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            cin>>given[i][j];
        }
    }

    for(int i=0;i<N;i++)
    {
        int maxim=0;
        for(int j=0;j<N;j++)
        {
            if(given[i][j]>given[i][maxim])
            {
                maxim=j;
            }
        }
        if(inc[given[i][maxim]]==0)
        {
            inc[given[i][maxim]]++;
            ans.push_back(given[i][maxim]);
        }
        else
        {
            ans.push_back(-1);
        }

    }
    for(int k=0;k<=N;k++)
    {
        if(ans[k]==-1)
        {
            int maxim=0;
            for(int r=0;r<N;r++)
            {
                if(given[k][r]>given[k][maxim])
                {
                    maxim=r;
                }
            }
            for(int r=maxim+1;r<=N;r++)
            {
                if(inc[r]==0)
                {
                    ans[k]=r;
                    break;
                }
            }
        }
    }
    for(int i=0;i<N;i++)
    {
        cout<<ans[i]<<" ";
    }
}

