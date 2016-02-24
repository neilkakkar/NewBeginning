#include <bits/stdc++.h>
#include <vector>
using namespace std;
#define sz 105

vector<int> A[sz];
int m[sz][sz];
int main()
{
    /*vector<int>x;
    x.push_back(2);
    x.push_back(2);
    x.clear();
    cout<<x.size();*/
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        int a,b;
        cin>>a>>b;
        A[a].push_back(b);
        A[b].push_back(a);
    }
    int ans=0;
    int flag=0;
    for(int x=1;x<=n;x++)
    {

        flag=0;
        vector<pair<int,int> > del;
        for(int i=1;i<=n;i++)
        {
            if(A[i].size()==1)
            {
                flag=1;
                int r = A[i][0];

                del.push_back(make_pair(r,i));

                A[i].clear();
            }
        }
    if(flag==0)
    {
        break;
    }
    else
    {
        for(int i=0;i<del.size();i++)
        {
            int r = del[i].first;
            int d= del[i].second;
            for(int j=0;j<A[r].size();j++)
            {
                if(A[r][j]==d)
                {
                    A[r].erase(A[r].begin()+j);
                }
            }

        }
        del.clear();
    }
    ans++;
    //break condition for ans
    }
    cout<<ans;

}
