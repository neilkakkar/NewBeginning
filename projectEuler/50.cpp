#include <bits/stdc++.h>

using namespace std;
const int sz = (int)1e6+4;

int A[sz];
vector<int> primes;
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
    //dp[0]=1;
    int nummax=0;
    int prime=0;
    for(int i=0;i<primes.size();i++)
    {
        int sum=0;
        for(int j=0;i+j<primes.size();j++)
        {
            sum+=primes[i+j];
            if(sum>=sz)break;
            if(A[sum]==0)
            {
                if(j>nummax)
                {
                    nummax=j;
                    prime = sum;
                }
            }
        }
    }
    cout<<prime<<" "<<nummax<<endl;
}
