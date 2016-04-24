#include <bits/stdc++.h>

using namespace std;
const int sz = (int)1e6+4;

int A[sz];
vector<int> primes;

int check(int b)
{
    int a = b;
    while(a>0)
    {
        if(A[a]==1)
        {
            return 0;
        }
        a=a/10;
    }
    a = b;
    int pwr = (int)(log10(a)+0.5);
    int daski = (int)(pow(10,pwr)+0.5);
    a = a%daski;
    while(a>0)
    {
        if(A[a]==1)return 0;
        daski= daski/10;
        a = a%daski;
    }
    return 1;

}
int rev(int a)
{
    int x =0;
    while(a>0)
    {
        x = x*10+a%10;
        a = a/10;
    }
    return x/10;

}
int main()
{

    A[1]=1;
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
    //cout<<check(7973)<<" "<<check(797)<<" "<<check(79)<<" "<<check(7)<<endl;

    int sum=0;
    int cnt=0;
    for(int x=4;x<primes.size();x++)
    //for(int i=8;i<sz;i++)
    {
        int i = primes[x];
        if(check(i)) //&& check(rev(i)))
        {
            cout<<i<<endl;
            sum+=i;
            cnt++;
        }
    }
    cout<<sum<<" "<<cnt;


}
