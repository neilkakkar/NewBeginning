#include <bits/stdc++.h>

using namespace std;
#define ll unsigned long long

const ll sz = (ll)1e15;
int main()
{

    int n;
    cin>>n;

    ll curr=2;
    for(ll i=1;i<=n;i++){
        if(i==1)cout<<"2\n";
        else cout<<i*(i+1)*(i+1)-(i-1)<<endl;
    }


}
