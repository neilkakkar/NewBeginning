#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int A[m+1];
    for(int i=0;i<=m;i++)
    {
        A[i]=0;
    }
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        for(int i=0;i<x;i++)
        {
            int r;
            cin>>r;
            A[r]++;
        }
    }
    for(int i=1;i<=m;i++)
    {
        if(A[i]==0)
        {
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
}
