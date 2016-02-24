#include <bits/stdc++.h>

using namespace std;
#define sz 1005

int A[sz][sz];

int marked[sz][sz];

char S[sz][sz];
int n,m;
int dfs(int x,int y)
{
    if(x<0 || y<0 || x>=n || y>=m)
    {
        return 0;
    }

//        cout<<x<<" "<<y<<endl;
    if(A[x][y]==0 && marked[x][y]==0)
    {
        //cout<<"prob";

        marked[x][y]=1;
        return 1 + dfs(x-1,y)+dfs(x,y-1)+dfs(x+1,y) + dfs(x,y+1);
    }
    else
    {
        return 0;
    }
}
int main()
{
    //ios_base::sync_with_stdio(0);
    //int n,m;
    //cin>>n>>m;
    scanf("%d %d",&n,&m);
    for(int i=0;i<n;i++)
    {
        //cin>>S[i];
        scanf("%s",&S[i]);
        for(int j=0;j<m;j++)
        {
            if(S[i][j]=='*')
            {
                A[i][j]=-1;
            }
            else
            {
                A[i][j]=0;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(marked[i][j]==0)
            {
                A[i][j]=dfs(i,j);
            }


        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(S[i][j]=='*')
            {
                S[i][j]= A[i][j]%10 +'0';
            }
        }
        //cout<<S[i]<<"\n";
        printf("%s\n",S[i]);
    }

}

