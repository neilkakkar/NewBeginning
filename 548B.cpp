#include <bits/stdc++.h>

using namespace std;

int counts(int  A[],int n)
{
    int prevcount=0;
    int cnt =0;
    for(int i=0;i<n;i++)
    {
        if(A[i]==1)
        {
            cnt++;
        }
        else
        {
            if(prevcount<cnt)
            {
                prevcount=cnt;
            }
            cnt=0;
        }
    }
    if(cnt>prevcount)
    {
        return cnt;
    }
    return prevcount;
}
int main()
{
    //int Ax[]={1,1,1,1};
    //cout<<counts(Ax,4);
    int n,m,q;
    cin>>n>>m>>q;

    int A[n+1][m+1];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>A[i][j];
        }
    }
    int Maxsum=0;
    int MaxRow=-1;
    for(int i=0;i<n;i++)
    {
        //cout<<counts(A[i],m)<<endl;
        int sum= counts(A[i],m);

        if(sum>Maxsum)
        {
            Maxsum=sum;
            MaxRow = i;
        }
    }
    while(q--)
    {
        int x,y;
        cin>>x>>y;
        x--;
        y--;
        if(A[x][y]==0)
        {
            A[x][y]=1;
            int newSum = counts(A[x],m);
            //cout<<newSum<<" ";
            if(x==MaxRow)
            {
                Maxsum = newSum;
                cout<<Maxsum<<endl;
            }
            else
            {
                if(newSum>Maxsum)
                {
                    MaxRow = x;
                    Maxsum = newSum;
                    cout<<Maxsum<<endl;
                }
                else
                {
                    cout<<Maxsum<<endl;
                }
            }
        }
        else
        {
            A[x][y]=0;
            if(MaxRow ==x)
            {
                Maxsum=0;
                for(int i=0;i<n;i++)
                {
                    int sum = counts(A[i],m);
                    if(sum>Maxsum)
                    {
                        MaxRow = i;
                        Maxsum = sum;
                    }
                }
                cout<<Maxsum<<endl;
            }
            else
            {
                cout<<Maxsum<<endl;
            }
        }
    }


}
