#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

const ll MOD = 1000000007;
#define sz (int)1e5+5
#define sez (int)1e6+5
ll A[sz];
ll f[sz];
ll f1[sz];
map<ll,ll> Fib;

map< pair<ll,ll> , pair<ll,ll> > ans;
ll fib(ll n)
{
    //if(n==0)return 0;
    if(n<2) return 1;
    if(Fib.find(n) != Fib.end()) return Fib[n];
    Fib[n] = (fib((n+1) / 2)*fib(n/2) + fib((n-1) / 2)*fib((n-2) / 2)) % MOD;
    return Fib[n];
}
ll fi(ll n)
{
    if(n==0)return 0;
    else return fib(n-1);
}
ll fibs[sez];
int main()
{
    //ios_base::sync_with_stdio(0);
    //for(int i=0;i<10;i++)
    //{
    //    cout<<i<<" "<<fi(i)<<endl;
    //}
    fibs[0]=1;
    fibs[1]=1;
    for(int i=2;i<sez;i++)
    {
        fibs[i] = (fibs[i-1]+fibs[i-2])%MOD;
        Fib[i]= fibs[i];
    }
    int N,M;
    //cin>>N>>M;
    scanf("%d %d",&N,&M);
    for(int i=1;i<=N;i++){
        //cin>>A[i];
        scanf("%lld",A+i);
    }
    /*
    f[0]=0;
    f1[0]=0;
    f[1]=fi(A[1]);
    f1[1]=fi(A[1]-1);
    for(int i=2;i<=N;i++)
    {
        ll temp = (f[i-1]*fi(A[i]+1))%MOD+(f1[i-1]*fi(A[i]))%MOD + fi(A[i]);
        f1[i] += (f[i-1]*fi(A[i]))%MOD+(f1[i-1]*fi(A[i]-1))%MOD + fi(A[i]-1);
        f1[i]%=MOD;
        f[i]+=temp;
        f[i]%=MOD;

    }
    */
    for(int i=0;i<M;i++)
    {
        //string s;
        //cin>>s;
        char s;
        scanf(" %c",&s);
        if(s=='C')
        {
            ll x,y;
            //cin>>x>>y;
            scanf("%lld %lld",&x,&y);
            A[x]=y;
        }
        else
        {
            ll l,r;
            //cin>>l>>r;
            scanf("%lld %lld",&l,&r);
            if(ans.find(make_pair(l,r))!=ans.end())printf("%lld\n",ans[make_pair(l,r)].first);//cout<<ans[make_pair(l,r)].first<<endl;
            else{
                    ll fr,fr_1;
                if(A[l]>sz)
                {
                    fr=fi(A[l]);
                    fr_1=fi(A[l]-1);
                }

                else
                {
                    fr = fibs[A[l]-1];
                    if(A[l]==1)
                    fr_1=0;
                    else
                        fr_1 = fibs[A[l]-2];
                }
                //cout<<fr<<" "<<fr_1;
                int j;
                for(j=r;j>=l+1;j--)
                {
                    if(ans.find(make_pair(l,j))!=ans.end()){
                        fr = ans[make_pair(l,j)].first;
                        fr_1 = ans[make_pair(l,j)].second;
                        //cout<<"hale "<<j<<"\n";
                        break;
                    }


                }
                j++;
                for(int j=l+1;j<=r;j++)
                {
                    ll temp = (fr*fi(A[j]+1))%MOD+(fr_1*fi(A[j]))%MOD + fi(A[j]);
                    fr_1 += (fr*fi(A[j]))%MOD+(fr_1*fi(A[j]-1))%MOD + fi(A[j]-1);
                    fr_1%=MOD;
                    fr+=temp;
                    fr%=MOD;
                    ans[make_pair(l,j)]= make_pair(fr,fr_1);
                }
                printf("%lld\n",fr);
                //cout<<fr<<endl;
            }
        }
    }


}
