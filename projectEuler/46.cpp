#include <bits/stdc++.h>

using namespace std;
const int sz = (int)1e6+4;

int A[sz];
vector<int> primes;
int B[sz];
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
    for(int i=1;i<primes.size();i++)
    {
        int n = (primes[i]-1)/2;
        for(int k=1;k*k+n<sz;k++)
        {
            B[n+k*k]++;
        }
    }
    for(int i=3;2*i+1<sz;i++)
    {
        if(B[i]==0 && A[2*i+1]==1)
        {
            cout<<2*i+1<<" "<<i<<endl;
            break;
        }
    }
}
