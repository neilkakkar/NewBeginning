#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int l1,l2,r1,r2,k;
    cin>>l1>>r1>>l2>>r2>>k;

    long long l = max(l1,l2);
    long long r = min(r1,r2);
    long long ans = max(r-l+1,(long long)0);
    if(l<=k && k<=r)ans--;

    cout<<ans<<endl;

}
