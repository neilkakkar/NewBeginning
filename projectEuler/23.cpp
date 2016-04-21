#include <bits/stdc++.h>

using namespace std;

int sumdiv(int a)
{
    int ans=1;
    for(int i=2;i*i<=a;i++)
    {
        if(a%i==0 )
        {
            ans+=i;
            ans+=(a/i);
        }
        if(i*i==a)
        {
            ans-=i;
        }

    }
    return ans;
}
#define sz (int)3e4+5
int A[sz];
vector<int>abunds;

int X[28124];
int main()
{
    int sum=0;
    for(int i=1;i<sz;i++)
    {
        A[i] = sumdiv(i);
    }
    //cout<<A[19];
    //cout<<A[220]<<" "<<A[284]<<endl;
    for(int i=1;i<sz;i++)
    {
        if(i<A[i])
        {
            abunds.push_back(i);
        }
    }
    //cout<<abunds.size();
    long long int ans=0;
    //int flag=0;
    for(int i=0;i<abunds.size();i++)
    {
        for(int j=0;j<abunds.size();j++)
        {
            if(abunds[i]+abunds[j]<=28123)
            X[abunds[i]+abunds[j]]++;

        }
        //if(flag)break;
    }

    //cout<<X[28123];
    for(int i=1;i<28124;i++)
    {
        if(X[i]==0)ans+=i;
    }
    cout<<ans;

}

