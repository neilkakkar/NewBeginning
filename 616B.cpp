#include <bits/stdc++.h>

using namespace std;

int A[105];
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        int mini=(int)2e9;
        for(int j=0;j<m;j++)
        {
            int c;
            cin>>c;
            if(c<mini)
            {
                mini=c;
            }
        }
        A[i]=mini;
    }
    int maxi=0;
    for(int i=0;i<n;i++)
    {
        if(A[i]>maxi)
        {
            maxi=A[i];
        }
    }
    cout<<maxi;

}

