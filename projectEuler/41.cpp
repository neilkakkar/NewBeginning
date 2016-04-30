#include <bits/stdc++.h>

using namespace std;
const int sz = (int)1e7+4;

int A[sz];
vector<int> primes;

int check(int a)
{
    int num[10]={0};
    while(a>0)
    {
        if(num[a%10]>0 || a%10==0)
        {
            return 0;
        }
        num[a%10]++;
        a=a/10;
    }
    for(int i=1;i<9;i++)
    {
        if(num[i]==0 && num[i+1]>0)return 0;
    }
    return 1;

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

    for(int i=primes.size()-1;i>=0;i--)
    {
        if(check(primes[i]))
        {
            cout<<primes[i]<<"\n";
            return 0;
        }

    }


}
