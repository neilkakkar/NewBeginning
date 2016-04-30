#include <bits/stdc++.h>

using namespace std;
#define ll long long
const int sz= (int)1e4+4;

ll A[sz];

ll pent(int i)
{
    return (i*(3*i-1))/2;
}
int ispent(int i,int j)
{
    ll r =A[i]+A[j];
    ll n = (int)((sqrt(24*r+1)+1)/6 +0.5);
    ll x = A[j]-A[i];

    ll p = (int)((sqrt(24*x+1)+1)/6 +0.5);
    //if((pent(n)==r || pent(n+1)==r || pent(n-1)==r)&&(pent(p)==x || pent(p+1)==x || pent(p-1)==x))return 1;
    if((pent(n)==r )&&(pent(p)==x ))return 1;
    return 0;
}
int main()
{
    for(int i=1;i<sz;i++)
    {
        A[i] = (i*(3*i-1))/2;
        //X[A[i]]=1;
    }

    ll int dmin=sz*sz*sz;
    for(int i=1;i<sz;i++)
    {
        for(int j=i+1;j<sz;j++)
        {
            if(ispent(i,j))
            {
                dmin = min(A[j]-A[i],dmin);
                //cout<<A[i]<<" "<<A[j]<<" "<<A[i]+A[j]<<" "<<A[j]-A[i]<<endl;
            }
        }
    }
    cout<<dmin;


}
