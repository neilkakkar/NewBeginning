#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int R,G,B;
        cin>>R>>G>>B;
        int K;
        cin>>K;
        long long int ans=0;
        ans+=min(R,K-1);
        ans+=min(G,K-1);
        ans+=min(B,K-1);
        ans++;
        cout<<ans<<endl;
    }
}
