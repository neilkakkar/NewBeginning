#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    if(n%2==1)
    {
        cout<<"0";
        return 0;
    }
    int ans=n/4;
    if((n/2)%2==0)
    {
        ans--;
    }
    cout<<ans;
}
