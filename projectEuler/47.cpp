#include <bits/stdc++.h>

using namespace std;
const int sz = (int)1e6+4;

int A[sz];
vector<int> primes;
int B[sz];

int numfac(int a,int k)
{
    int ans=0;
    for(int i=0;primes[i]<=a;i++)
    {
        if(a%primes[i]==0)ans++;
        if(ans>k)return k+1;
    }
    return ans;
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

    for(int i=3;i<sz;i++)
    {
        if(numfac(i,4)==4 && numfac(i+1,4)==4 && numfac(i+2,4)==4 && numfac(i+3,4)==4)
        {
            cout<<i<<endl;
            break;
        }
    }

}

