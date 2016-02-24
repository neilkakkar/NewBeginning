#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long a,b;
    cin>>a>>b;

    long long int ans=0;
    while(min(a,b)>0)
    {
        if(a>b)
        {
            ans+=a/b;
            a = a - (a/b)*b;
        }
        else
        {
            ans+=b/a;
            b = b -(b/a)*a;
        }
        //ans++;

    }
    cout<<ans;


}
