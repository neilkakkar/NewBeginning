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
#define sz (int)1e4+5
int A[sz];

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
        if(i==A[A[i]] && i!=A[i])
        {
            sum+=A[A[i]];
            sum+=A[i];
            A[i]=0;
            A[A[i]]=0;
        }
    }
    cout<<sum;

}
