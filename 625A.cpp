#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n,a,b,c;
    cin>>n>>a>>b>>c;
    long long X = b-c;

    if(a<X)
    {
        cout<<n/a;
    }
    else
    {
        long long ans=0;
        long long cnt=0;

        long long left = n;
        while(left+cnt*c>=b)
        {
            left+=cnt*c;
            cnt = left/b;
            ans+=cnt;
            left-=cnt*b;
        }
        if(left+cnt*c>=a)
        {
            left = left+cnt*c;
            ans+=left/a;
        }

        cout<<ans;
    }



}
