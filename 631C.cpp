#include <bits/stdc++.h>

using namespace std;
#define sz (int)2e5+5

int A[sz];
pair<int,int> M[sz];
int ST[4*sz];


int maxSum(int ns,int ne,int l, int r,int index)
{
    if(l<=ns && r>=ne)
    {
        return ST[index];
    }

    int mid = (ns+ne)/2;
    if(r<ns || l>ne)
    {
        return 0;
    }

    return max(maxSum(ns,mid,l,r,2*index+1),maxSum(mid+1,ne,l,r,2*index+2));
}

void update(int ns,int ne,int i, int diff, int index)
{
    if(i<ns || i> ne)
        return;

    ST[index]+=diff;
    if(ns!=ne)
    {
        int mid = (ns+ne)/2;
        update(ns,mid,i,diff,2*index+1);
        update(mid+1,ne,i,diff,2*index+2);
    }
}
void build(int l, int r, int index)
{
    if(l==r)
    {
        ST[index]=M[l].first;
        //cout<<"Y\n";
        //ST[index].ans=ST[index].pref = ST[index].suff = A[l];
        return;
    }
    int mid = (l+r)/2;
    build(l,mid,2*index+1);
    build(mid+1,r,2*index+2);
    ST[index] = max(ST[2*index+1],ST[2*index+2]);
    //return ST[index];
}


int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    for(int i=0;i<m;i++)
    {
        int t,r;
        scanf("%d %d",&t,&r);
        M[i]=make_pair(r,t);
    }
    build(0,m-1,0);
    int l=0;
    int r=m-1;
    int x  = maxSum(0,m-1,l,r,0);
    int prev=0;
    for(int i=0;i<m;i++)
    {
        //cout<<i<<" "<<x<<" \n";
        if(M[i].first==x)
        {
            if(M[i].second==1 && (prev==2 || prev==0))
                sort(A,A+M[i].first);
            else if(M[i].second==2 && (prev<=1))
                sort(A,A+M[i].first,greater<int>());
            l=i+1;
            if(l>r)
            {
                l=r;
            }
            x = maxSum(0,m-1,l,r,0);
            if(prev==0)
            {
                prev = M[i].second;
            }
        }
    }
    //sort(A,A+2,greater<int>());
    for(int i=0;i<n;i++)
    {
        printf("%d ",A[i]);
    }

}
