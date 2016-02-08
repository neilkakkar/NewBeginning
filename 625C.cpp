#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int A[n+1][n+1];
    int r=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<k;j++)
        {
            A[i][j]=r;
            r++;
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=k;j<=n;j++)
        {
            A[i][j]=r;
            r++;
        }
    }
    int cnt =0;
    for(int i=1;i<=n;i++)
    {
        cnt+=A[i][k];
    }
    cout<<cnt<<endl;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
}

