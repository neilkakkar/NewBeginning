#include <bits/stdc++.h>

using namespace std;
#define sz (int)1e5+5
#define ll long long
struct Node{
    ll val;
};

ll A[sz];
Node ST[4*sz];

void build(int l, int r, int index)
{
    if(l==r)
    {
        ST[index].val = A[index];
        return;
    }
    int mid = (l+r)/2;
    build(l,mid,2*index+1);
    build(mid+1,r,2*index+2);
    ST[index]

}
