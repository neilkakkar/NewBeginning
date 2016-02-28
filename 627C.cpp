#include <bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("input.txt","r",stdin);
    long long s,x;
    cin>>s>>x;
    /*(if(((s^x)&1)==1)
    {
        cout<<"0\n";
        //return 0;
    }*/
    long long ans=0;
    long long i=0;
    for(i=1;i<s;i++)
    {
        if(x == (i^(s-i)) )
        {
            ans++;
        }
    }
    cout<<ans;

}
