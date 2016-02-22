#include <bits/stdc++.h>

using namespace std;
#define sz (int)5e4+5

int A[sz];
int ST[2*sz+2];

int build(int l, int r,int index)
{
    if(l==r)
    {
        ST[index] =A[l];
        return ST[index];
    }
    else
    {
        int mid = (l+r)/2;
        ST[index] = build(l,mid,2*index+ 1)+build(mid+1,r,2*index+2);
        return ST[index];
    }
}

int query(int l, int r,int ss,int se,int index)
{
    if(l<=ss && r>=se)
    {
        return ST[index];
    }
    if(l>se || r<ss)
    {
        return 0;
    }
    int mid = (ss+se)/2;
    return query(l,r,ss,mid,2*index + 1)+query(l,r,mid+1,se,2*index+2);
}
void update(int val, int i, int ss,int se, int index)
{
    if(i<ss || i>se)
        return;

    ST[index]+=val;
    if(ss!=se)
    {
        int mid = (ss+se)/2;
        update(val,i,ss,mid,2*index+1);
        update(val,i,mid+1,se,2*index+2);
    }
}

int main()
{
    int N;
    cin>>N;
    for(int i=0;i<N;i++)
    {
        cin>>A[i];
    }
    int sum =build(0,N-1,0);
    cout<<sum<<endl;

    cout<<query(1,3,0,N-1,0);

    update(2,1,0,N-1,0);

    cout<<query(1,3,0,N-1,0);




}
