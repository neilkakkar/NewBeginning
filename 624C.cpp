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
        int numB=N;
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
                src=r;
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
    color[src]=1;
    ans[src]=1;

    int numA=0;
    int numC=0;
    queue<int> Q;
    Q.push(src);

    while(!Q.empty())
    {
        int u= Q.front();
        Q.pop();

        for(int v=0;v<N;v++)
        {
            if(A[u][v] && color[v]==-1)
            {
                color[v] = 1 - color[u];
                ans[v]=1-ans[u];
                Q.push(v);
            }
            else if(A[u][v] && color[u]==color[v])
            {

                cout<<"No";
                return 0;
            }
        }
    }
    for(int i=0;i<N;i++)
    {
        if(color[i]==1)
        {
            numA++;
        }
        else if(color[i]==0)
            numC++;
    }
    //numB = N - numA - numC;


    if(numA*numC!=(N*(N-1))/2 - M)
    {
        cout<<"No";
        return 0;
    }

    cout<<"Yes\n";
    for(int i=0;i<N;i++)
    {
        if(ans[i]==0)
        {
            cout<<"a";
        }
        if(ans[i]==1)
        {
            cout<<"c";
        }
        if(ans[i]==2)
        {
            cout<<"b";
        }
    }
}


