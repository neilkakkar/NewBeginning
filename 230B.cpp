#include <iostream>
#include <cstdio>
#include <bits/stdc++.h>

using namespace std;

#define sz (int)1e6+6


int A[sz];
int main()
{
    ios_base::sync_with_stdio(0);
    set<long long> primes;
    for(int i=2;i<sz;i++)
    {
        A[i]=i;
    }
    A[1]=0;
    for(int i=2;i<sz;i++)
    {
        if(A[i]!=0)
        {
            for(int j=2*i;j<sz;j+=i)
            {
                if(A[j]%i==0)
                {
                    A[j]=0;
                }
            }
        }
    }
    for(int i=2;i<sz;i++)
    {
        if(A[i]!=0)
        {
            primes.insert(A[i]*A[i]);
        }
    }

    int N;
    cin>>N;
    for(int i=0;i<N;i++)
    {
        long long x;
        cin>>x;
        int flag=0;
        if(primes.find(x)!=primes.end())
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        /*for(int i=0;i<primes.size();i++)
        {
            if(x==primes[i]*primes[i])
            {
                cout<<"YES"<<endl;
                flag=1;
                break;
            }
        }
        if(!flag){
        cout<<"NO"<<endl;
        }*/
    }


}
