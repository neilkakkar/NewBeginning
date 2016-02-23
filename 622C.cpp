#include <bits/stdc++.h>

using namespace std;
#define sz (int)2e5+5
int A[sz];

vector<int> B[10*sz];
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
        B[A[i]].push_back(i);
    }
    for(int i=0;i<m;i++)
    {
        int l,r,x;
        cin>>l>>r>>x;
        l--;r--;
        if(B[x].size()==0)
        {
            cout<<l+1<<"\n";
        }
        else
        {
            int k;
            for(k=0;k<B[x].size();k++)
            {
                if(B[x][k]>=l)
                {
                    break;
                }
            }
            if(B[x][k]>l)
            {
                cout<<l+1<<"\n";
            }
            else
            {
                int flag=0;
                int j;
                for(j=k;j<B[x].size() && B[x][j]<=r;j++)
                {
                    if(B[x][j]!=l)
                    {
                        cout<<l+1<<"\n";
                        flag=1;
                        break;
                    }
                    l++;
                }
                if(flag==0 && j<B[x].size())
                {
                    cout<<"-1\n";
                }
                else if(j==B[x].size())
                {
                    if(l>r)
                    {
                        cout<<"-1\n";
                    }
                    else
                    cout<<l+1<<"\n";
                }
            }
        }
    }



}

