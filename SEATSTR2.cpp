#include <bits/stdc++.h>

using namespace std;

#define sz (int)1e5+5
#define MOD ((int)1e9+7)
#define ll long long
long long fac[sz];
long long ifac[sz];
int check(string a,string b){
    int pt=0;
    int n = a.length();
    vector<int> x;
    for(int i=0;i<n;i++){
        if(a[i]!=b[i]){
            pt++;
            x.push_back(i);
        }
        if(pt>4)return 0;
    }
    if(pt<=3)return 1;
    int c=0;
    for(int i=0;i<x.size();i++){
        for(int j=i+1;j<x.size();j++){
            if(a[i]==b[j]){
                    x[i]=-1;
                    x[j]=-1;
                    swap(b[i],b[j]);
                    c++;
            }
            if(c>2)return 0;
        }
    }
    for(int i=0;i<x.size();i++){
        if(x[i]!=-1)return 0;
    }
    return 1;

}
ll powe(ll a,ll b){
    ll ans=1;
    while(b>0){
        if(a==0)return 0;
        if(b%2==1){
            ans*=a;
            ans = ans%MOD;
        }
        a = a%MOD;
        a*=a;
        a = a%MOD;
        b/=2;
    }
    ans = ans%MOD;
    return ans%MOD;
}
ll inv(ll i){
    return powe(i,MOD-2);
}
int main(){

    fac[0]=1;
    for(long long i=1;i<sz;i++){
            fac[i]=(i*fac[i-1])%MOD;
    }

    ifac[0]=1;
    ifac[1]=1;
    for(ll i=2;i<sz;i++){
        ifac[i]=(inv(i)*ifac[i-1])%MOD;
    }

    int T;
    cin>>T;
    while(T--){
        string s;
        cin>>s;
        int n = s.length();
        int x[26];
        int t=0;
        for(int i=0;i<26;i++)x[i]=0;
        for(int i=0;i<n;i++)
        {
            x[s[i]-'a']++;
        }
        sort(s.begin(),s.end());
        string r =s;
        cout<<r<<" ";
        long long an=0;
        while(next_permutation(s.begin(),s.end())){
            if(check(r,s)){an++;
            cout<<s<<"<-same ";
            }
            else{
            cout<<s<<" ";
            }
        }
        long long ans =fac[n]%MOD;
        for(int i=0;i<26;i++){
            ans= (ans*ifac[x[i]])%MOD;
            if(x[i]>0)t++;
        }
        cout<<an<<" "<<ans<<endl;
    }
}
