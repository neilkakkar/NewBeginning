#include <bits/stdc++.h>

using namespace std;
#define ll long long

bool match(ll v, string s)
{
    int n=s.length();
    int l=0;
    int r=n-1;
    while(l<r){
        swap(s[l],s[r]);
        l++;r--;
    }
    int id=0;
    while(v){
        int digit=v%10;
        v=v/10;
        if(id>=n){
            if(digit%2==1)return false;
        }
        else{
            if(s[id]=='0'){
                if(digit%2==1)return false;
            }
            else if(digit%2==0)return false;
            id++;
        }
    }
    while(id<n){
        if(s[id]=='1')return false;
        id++;
    }
    return true;
}
string reduce(string r)
{
    int n = r.length();
    for(int i=0;i<n;i++){
        if(r[i]=='1')return r.substr(i);
    }
    return "0";
}
string gen(ll v)
{
    string r="";
    while(v){
        int digit=v%10;
        v/=10;
        digit = digit%2;
        r+=(digit%2+'0');
    }
    int l=0;
    int rx = r.length()-1;
    while(l<rx){
        swap(r[l],r[rx]);
        l++;
        rx--;
    }
    string z = reduce(r);
    return z;
}
int main()
{
    ios_base::sync_with_stdio(0);
    string test="10";
    //cout<<reduce(test)<<endl;
    //cout<<gen(10)<<endl;
    //cout<<match(21111131111111130,test);
    int t;
    cin>>t;
    map<string,ll> X;
    for(int iter=0;iter<t;iter++)
    {
        char x;
        cin>>x;
        if(x=='+'){
                ll v;
                cin>>v;
                //if(X.count(v)==0)X[v]=1;
                //else X[v]++;
                string r = gen(v);
                X[r]++;
        }
        else if(x=='-'){
            ll v;
            cin>>v;
            string r= gen(v);
            X[r]--;
        }
        else
        {
            string s;
            cin>>s;
            s = reduce(s);
            cout<<X[s]<<endl;

        }
    }

}

