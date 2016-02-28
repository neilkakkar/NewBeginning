#include <bits/stdc++.h>

using namespace std;

int A[32][32];

int cnt(int i,int j,int x,int y)
{
    int ans=0;
    for(int a=i;a<=x;a++)
    {
        for(int b=j;b<=y;b++)
        {
            if(A[a][b]==1)
            {
                ans++;
            }
        }
    }
    return ans;

}
int main()
{
    int r,c,n,k;
    cin>>r>>c>>n>>k;
    for(int i=1;i<=r;i++)
    {
        for(int j=1;j<=c;j++)
        {
            A[i][j]=0;
        }
    }
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        A[x][y]=1;
    }
    int ans=0;
    for(int i=1;i<=r;i++)
    {
        for(int j=1;j<=c;j++)
        {
            for(int z=0;i+z<=r;z++)
            {
                for(int y=0;j+y<=c;y++)
                {
                    if(cnt(i,j,i+z,j+y)>=k)
                    {
                        ans++;
                    }

                }

            }

        }
    }
    cout<<ans;

}

