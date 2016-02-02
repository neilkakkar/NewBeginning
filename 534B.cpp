#include <bits/stdc++.h>

using namespace std;

int mod(int a)
{
    if(a<0)
        return -a;
    return a;
}

int main()
{
    int v1,v2;
    cin>>v2>>v2;
    int t,d;
    cin>>t>>d;

    int tleft=t;
    int ans=0;
    int curr =v1;
    while(tleft>=0)
    {
        if(mod(curr-v2)<=tleft*d)
        {
            ans+=curr;
            curr+=d;
            tleft--;
        }
        else
        {
            ans+=curr;
            curr-=d;
            tleft--;
        }
    }
    cout<<ans;


}
