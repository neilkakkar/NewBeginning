#include <bits/stdc++.h>

using namespace std;
#define ll unsigned long long

const ll sz = (ll)1e18;
int main()
{

    int n;
    cin>>n;
    freopen("output716.cpp","w",stdout);

    cout<<"int X["<<n<<"] ={";
    ll curr=2;
    for(ll i=1;i<=n;i++){
            //cout<<i<<endl;
        for(ll j=1;j<sz;j++){
            //cout<<j<<endl;
            ll k =(((i+1)*j)*((i+1)*j)-curr);
            if(k<=0)continue;
            if(k%i == 0){
                cout<<(k/i);
                curr = (i+1)*j;
                break;
            }
        }
        if(i!=n)cout<<",";
    }
    cout<<"};";


}
