#include <bits/stdc++.h>

using namespace std;

#define sz (int)1e5+5

int A[sz];

int G[505][505];
int mark[505][505];
int main()
{
    int x,y,x0,y0;
    cin>>x>>y>>x0>>y0;
    string s;
    cin>>s;
    G[x0][y0]=1;
    int slen= s.length();
    for(int i=0;i<slen-1;i++)
    {
        if(s[i]=='U')
        {
            if(x0-1<1)
            {
                A[i]=0;
            }
            else if(G[x0-1][y0]==1)
            {
                x0--;
                A[i]=0;
            }
            else
            {
                x0--;
                G[x0][y0]=1;
                A[i]=1;
            }
        }
        if(s[i]=='L')
        {
            if(y0-1<1)
            {
                A[i]=0;
            }
            else if(G[x0][y0-1]==1)
            {
                y0--;
                A[i]=0;
            }
            else
            {
                y0--;
                G[x0][y0]=1;
                A[i]=1;
            }
        }
        if(s[i]=='R')
        {
            if(y0+1>y)
            {
                A[i]=0;
            }
            else if(G[x0][y0+1]==1)
            {
                y0++;
                A[i]=0;
            }
            else
            {
                y0++;
                G[x0][y0]=1;
                A[i]=1;
            }
        }
        if(s[i]=='D')
        {
            if(x0+1>x)
            {
                A[i]=0;
            }
            else if(G[x0+1][y0]==1)
            {
                x0++;
                A[i]=0;
            }
            else
            {
                x0++;
                G[x0][y0]=1;
                A[i]=1;
            }
        }

    }
    int sum=x*y - 1;
    cout<<"1 ";
    for(int i=0;i<slen-1;i++)
    {
        sum-=A[i];
        cout<<A[i]<<" ";
    }
    cout<<sum;


}
