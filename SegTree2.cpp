#include <bits/stdc++.h>

using namespace std;

#define sz (int)5e4+5
struct Node
{
    int sum;
    int pref;
    int suff;
    int ans;
};

int A[sz];
Node ST[4*sz];
Node combine(Node lhs, Node rhs)
{
    Node x;
    x.sum = lhs.sum+rhs.sum;
    x.pref = max(lhs.pref,lhs.sum+ rhs.pref);
    x.suff = max(rhs.suff,rhs.sum+lhs.suff);
    x.ans = max(lhs.ans,rhs.ans);
    x.ans = max(x.ans,lhs.suff+rhs.pref);
    return x;
}

void build(int l, int r, int index)
{
    if(l==r)
    {
        ST[index].sum=A[l];
        //cout<<"Y\n";
        ST[index].ans=ST[index].pref = ST[index].suff = A[l];
        return;
    }
    int mid = (l+r)/2;
    build(l,mid,2*index+1);
    build(mid+1,r,2*index+2);
    ST[index] = combine(ST[2*index+1],ST[2*index+2]);
}

Node Ans(int l, int r,int ss, int se,int index)
{
    if(l==ss && r==se)
    {
        return ST[index];
    }
    int mid = (ss+se)/2;
    if(r<=mid)
    {
        return Ans(l,r,ss,mid,2*index+1);
    }
    else if(mid+1<=l)
    {
        return Ans(l,r,mid+1,se,2*index+2);
    }
    return combine(Ans(l,mid,ss,mid,2*index+1),Ans(mid+1,r,mid+1,se,2*index+2));

}

int main()
{
    int N;
    //cin>>N;
    scanf("%d",&N);
    for(int i=0;i<N;i++)
    {
        scanf("%d",&A[i]);
    }
    build(0,N-1,0);

    int M;
    scanf("%d",&M);
    for(int i=0;i<M;i++)
    {
        int x,y;
        scanf("%d %d",&x,&y);
        Node d = Ans(x-1,y-1,0,N-1,0);
        //cout<<d.ans<<endl;
        printf("%d\n",d.ans);
    }
}
