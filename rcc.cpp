#include <bits/stdc++.h>

using namespace std;

const int sz = (int)1e5+1;

struct node
{
    int x;
    int y;
    int val;
};
vector<node> X;
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            int xa;
            cin>>xa;
            node t;// = new node;
            t.x = i;
            t.y = j;
            t.val = xa;
            if(xa>0)X.push_back(t);
        }
    }
    int Xcord,Ycord;
    Xcord = 0;
    Ycord=0;
    for(int i=0;i<X.size();i++)
    {
        Xcord+=X[i].x;
        Ycord+=X[i].y;
    }
    Xcord/=X.size();
    Ycord/=X.size();
    int ref1=0;
    int ref2=0;
    for(int i=0;i<X.size();i++)
    {
        ref1+=abs(X[i].x-Xcord)*X[i].val;
    }
    Xcord++;
    for(int i=0;i<X.size();i++)
    {
        ref2+=abs(X[i].x-Xcord)*X[i].val;
    }
    if(ref1<ref2)Xcord--;
    ref1=0;
    ref2=0;
    for(int i=0;i<X.size();i++)
    {
        ref2+=abs(X[i].y-Ycord)*X[i].val;
    }
    Ycord++;
    for(int i=0;i<X.size();i++)
    {
        ref2+=abs(X[i].y-Ycord)*X[i].val;
    }
    if(ref1<ref2)Ycord--;
    long long ans=0;
    for(int i=0;i<X.size();i++)
    {
        ans+=2*(X[i].val)*abs(Xcord-X[i].x)+2*(X[i].val)*abs(Ycord-X[i].y)+2*(X[i].val);
    }
    cout<<Xcord+1<<" "<<Ycord+1<<" "<<ans<<endl;
}
