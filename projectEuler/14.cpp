#include <bits/stdc++.h>

using namespace std;
#define sz (int)1e6+4
#define ll long long

map<ll,ll> X;
int check(ll r)
{
    if(X.find(r)!=X.end())return X[r];

    if(r==1)return 1;
    else if(r%2==1)
    {
        X[r]=1+check(3*r+1);
        return X[r];
    }
    else
    {
        X[r]= 1+check(r/2);
        return X[r];
    }
}
int main()
{
    int ans =0;
    int num=0;
    for(int i=2;i<sz;i++)
    {
        if(check(i)>num){
            num=check(i);
            ans=i;
        }

    }
    cout<<ans<<endl;

}
