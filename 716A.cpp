#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,c;
    cin>>n>>c;
    int ans=1;
    int prev;
    cin>>prev;
    for(int i=1;i<n;i++){
        int x;
        cin>>x;
        if(x-prev>c)ans=1;
        else ans++;
        prev = x;
    }
    cout<<ans<<endl;

}


