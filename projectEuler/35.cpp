#include <bits/stdc++.h>

using namespace std;
const int sz = (int)1e6+1;

vector<int> primes;
int A[sz];

string toString(int a)
{
    string r ="";
    while(a>0)
    {
        string x = "";
        x+=a%10+'0';
        a = a/10;
        r = x+r;
    }
    return r;
}
int toint(string s)
{
    int ans=0;
    for(int i=0;i<s.length();i++)
    {
        ans = ans*10 + s[i]-'0';
    }
    return ans;
}
string cyc(string r)
{
    string t ="";
    for(int i=1;i<r.length();i++)
    {
        t+=r[i];
    }
    t+=r[0];
    return t;
}
int check(int a)
{
    string r=toString(a);
    if(A[toint(r)]==1)return 0;
    string x = cyc(r);
    while(x!=r)
      {
            if(A[toint(x)]==1)
            {
                //cout<<x<<endl;
                return 0;
            }
            x = cyc(x);
            //A[toint(r)]++;
      }
    return 1;
}
int main()
{
    for(int i=2;i*i<sz;i++)
    {
        if(A[i]==0)
        for(int j=i*i;j<sz;j+=i)
        {
            A[j]=1;
        }
    }
    for(int i=2;i<sz;i++)
    {
        if(A[i]==0)primes.push_back(i);
    }
    int ans=0;
    for(int i=0;i<primes.size();i++)
    {
        ans+=check(primes[i]);
    }
    cout<<ans<<endl;
}
