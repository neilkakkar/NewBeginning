#include <bits/stdc++.h>

using namespace std;
#define sz (int)1e5+5

int A[sz];
vector<int> X[sz];
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        A[i]=0;
    }
    for(int i=0;i<m;i++)
    {
        int x,y;
        cin>>x>>y;
        X[x].push_back(y);
        X[y].push_back(x);
    }
    long long ans=0;
    int u;
    for(int i=1;i<=n;i++)
    {
        A[i]=1;
        for(int u=0;u<X[i].size();u++)
        {
            if(X[i][u]<i)
            {
                A[i] = max(A[i],A[X[i][u]]+1);
            }
        }
        ans= max(ans,A[i]*(long long)X[i].size());
    }

    cout<<ans;
}
