#include <bits/stdc++.h>

using namespace std;
#define sz (int)1e5+5
#define ll long long
ll A[sz];
ll B[sz];
int lca(int a,int b){
    if(a==b)return a;
    if(a<b)return lca(b,a);
    return lca(a/2,b);
}
ll int router;
ll int routel;
ll int stepr;
ll int stepl;
ll int n;
ll binsearch(ll int l,ll int r){
    ll mid = (l+r)/2;
    if(l==r)return l;
    else if((router^(mid<<stepr))<=n && (routel^(mid<<stepl))<=n){
          //  cout<<mid<<" "<<r<<endl;
        return binsearch(mid+1,r);
    }
    else{
        //cout<<l<<" "<<mid<<endl;
        return binsearch(l,mid);
    }
}
int main()
{
    int T;
    cin>>T;
    while(T--){
        //int n;
        ll int l,r;
        cin>>n>>l>>r;
        if(l>r)swap(l,r);
        int x = lca(l,r);
        stepr=0;
        int y = r;
        while(y!=x){
            stepr++;
            y/=2;
        }
        stepl=0;
        y = l;
        while(y!=x){
            stepl++;
            y/=2;
        }
        router = (x<<stepr)^r;
        routel = (x<<stepl)^l;
        //cout<<router<<" "<<routel<<" "<<n;
        //int ans =binsearch(1,n);
        //cout<<(1<<stepr)<<endl;
        int ans=binsearch(1,n);
        if((router^(ans<<stepr))<=n && (routel^(ans<<stepl))<=n){

                }
            else{
                ans--;
            }
        /*for(int i=1;i<=n;i++){
          //      cout<<(router^(i<<stepr))<<" "<<(routel^(i<<stepl))<<endl;
                if((router^(i<<stepr))<=n && (routel^(i<<stepl))<=n){
                    ans++;
                }
                else{
                    break;
                }
        }*/
        cout<<ans<<endl;

    }

}
