#include <bits/stdc++.h>

using namespace std;

#define ll long long
const int MOD = (int)1e9+7;

ll powe(ll a, ll b)
{
    ll ans =1;
    while(b){
        if(b%2==1){
            ans*=a;
            ans%=MOD;
        }
        a = a*a;
        b/=2;
        a%=MOD;
    }
    return ans%MOD;
}
int main()
{
    string s;
    cin>>s;

    int cnt=0;
    int slen = s.length();
    for(int i=0;i<slen;i++){
        int temp=-1;
        if(s[i]=='-'){
            temp=62;
        }
        else if(s[i]=='_'){
            temp=63;
        }
        else if(s[i]<='9'){
            temp=s[i]-'0';
        }
        else if(s[i]<='Z'){
            temp=s[i]-'A' + 10;
        }
        else if(s[i]<='z'){
            temp = s[i]-'a' + 36;
        }

        int ls = __builtin_popcount(temp);
        cnt+=6-ls;
    }
    cout<<powe(3,cnt);

}
