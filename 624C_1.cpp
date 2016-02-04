#include <bits/stdc++.h>

using namespace std;
#define sz 505

int A[sz][sz];
int N;
int isBipartite(int Gr[][sz],int src)
{
}
int main()
{
    int N,M;
    cin>>N>>M;
    int ans[N];
    for(int i=0;i<N;i++)
    {
        ans[i]=0;
    }
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            if(i!=j)
            A[i][j]=1;
            else
                A[i][j]=0;
        }
    }
    for(int i=0;i<M;i++)
    {
        int x,y;

        cin>>x>>y;
        x--;
        y--;
        A[x][y]=0;
        A[y][x]=0;
    }
    int numB=0;
    int src=-1;
    for(int r=0;r<N;r++)
    {
        for(int k=0;k<N;k++)
        {
            if(A[r][k]==1)
            {
                src=r;
                break;
            }
        }
    }
    if(src==-1)
    {
        cout<<"Yes\n";
        while(N--)
        {
            cout<<"b";
        }
        return 0;
    }
    for(int r=0;r<N;r++)
    {
        int flag=0;
        for(int k=0;k<N;k++)
        {
            if(A[r][k]!=0)
            {
                flag=1;
                //src=r;
                break;
            }
        }
        if(!flag)
        {
            ans[r]=2;
            numB++;
        }
    }

    int color[N];
    for(int i=0;i<N;i++)
    {
        color[i]=-1;
    }
    for(int i=0;i<N;i++)
    {
        if(color[i]==-1)
        {
            ans[i]=1;
            color[i]=1;
        }
        for(int j=0;j<N;j++)
        {
            if(A[i][j])
            {
                if(color[j]==-1)
                {
                    color[j]=1-color[i];
                }
                else if(color[j]==color[i])
                {
                    cout<<"No";
                    return 0;
                }
            }
        }
    }

    int numA=0;
    int numC=0;

    for(int i=0;i<N;i++)
    {
        if(color[i]==1)
        {
            numA++;
        }
        else if(color[i]==0)
            numC++;
    }
    numA = N - numB - numC;

    if(numA*numC!=(N*(N-1))/2 - M)
    {
        cout<<"No";
        return 0;
    }
    cout<<"Yes\n";
    while(numC--)
    {
        cout<<"c";
    }
    while(numA--)
    {
        cout<<"a";
    }
    while(numB--)
    {
        cout<<"b";
    }
}



