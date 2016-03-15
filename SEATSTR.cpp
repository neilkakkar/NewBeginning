#include <bits/stdc++.h>

using namespace std;
#define sz (int)1e5+5
#define MOD ((int)1e9+7)
#define ll long long
long long fac[sz];
long long ifac[sz];
//long long d[sz];
//long long dsum[sz];
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

ll ncr(ll n, ll r){
    if(n<r)return 0;
    if(n==0)return 0;
    if(r==0)return 1;
    return ((fac[n]*ifac[r]%MOD)*(ifac[n-r]))%MOD;
}
int main()
{
    fac[0]=1;
    for(long long i=1;i<sz;i++){
            fac[i]=(i*fac[i-1])%MOD;
    }
    ifac[0]=1;
    ifac[1]=1;
    for(ll i=2;i<sz;i++){
        ifac[i]=(inv(i)*ifac[i-1])%MOD;
    }
    /*d[0]=0;d[1]=0;d[2]=1;
    for(long long i=3;i<sz;i++){
        d[i] = ((i-1)*(d[i-1]+d[i-2])) %MOD;
    }
    dsum[0]=d[0];
    for(int i=1;i<sz;i++){
        dsum[i]=(dsum[i-1]+d[i]) %MOD;
    }*/

    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    //choose 4 distinct * 3, choose 3 distinct *2 , choose 2 distinct.
    //cout<< fac[2314]*ifac[2312]%MOD;
    int T;
    cin>>T;
    while(T--)
    {
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
        ll temp4 =0;
        ll temp3=0;
        ll temp2=0;
        for(int i=0;i<26;i++){
            for(int j=i+1;j<26;j++){
                    temp2+=((x[i]*x[j])%MOD);
                    temp2%=MOD;

                for(int k=j+1;k<26;k++){
                        temp3+=(((x[i]*x[j])%MOD)*x[k])%MOD;
                        temp3%=MOD;
                    for(int l=k+1;l<26;l++){
                        temp4+=(((x[i]*x[j])%MOD)*(x[k]*x[l])%MOD)%MOD;
                        temp4%=MOD;
                    }
                }
            }
        }

        //cout<<temp4<<" "<<temp3<<" "<<temp2<<" \n";
        //temp4*=3;
        //temp3*=2;
        //temp4%=MOD;
        //temp3%=MOD;
        //ll tempf = temp4+temp3+temp2;
        long long ans =fac[n]%MOD;
        for(int i=0;i<26;i++){
            ans= (ans*ifac[x[i]])%MOD;
            if(x[i]>0)t++;
        }
        //cout<<ans<<endl;
        //if(t<=3){cout<<"0"<<endl;}
        //else{
        ll tempn4=0;
        ll tempn3=0;
        ll tempn2=0;
        //n=t;
         tempn4 = (((fac[n]*ifac[4])%MOD)*ifac[n-4])%MOD;
         //tempn3 = (((fac[n]*ifac[3])%MOD)*ifac[n-3])%MOD;
         //tempn2 = (((fac[n]*ifac[2])%MOD)*ifac[n-2])%MOD;
        for(int i=0;i<26;i++){
            tempn4-=(ncr(x[i],3)*(n-x[i]))%MOD;
            tempn4-=ncr(x[i],4);
            //tempn4-=ncr(x[i],2)*
        }
        tempn4*=3;
        for(int i=0;i<26;i++){
            tempn4-=ncr(x[i],2);
        }
        tempn4=(tempn4+MOD)%MOD;
        //cout<<tempn4<<" "<<temp3<<" "<<temp2<<" \n";
        temp4*=3;
        temp3*=2;
        temp4%=MOD;
        temp3%=MOD;
        ll tempf = tempn4+temp3+temp2;

        //cout<<tempn4<<" "<<tempn3<<" "<<tempn2<<" \n";
        tempn4*=3;
        tempn3*=2;
        tempn4%=MOD;
        tempn3%=MOD;
        ll tempnf = tempn4+tempn3+tempn2;

        ll newvar = (ans-1 - tempf +MOD)%MOD;
        ll newvarn = (ans-1 - tempnf+MOD)%MOD;
        ans*=newvar;//newvar;
        //cout<<tempn4<<" "<<temp4<<" ";

        cout<<ans%MOD<<endl;
        //}
    }




}
