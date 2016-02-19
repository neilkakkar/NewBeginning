#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,b,p;
    cin>>n>>b>>p;
    int ANS=n*p;

    int ans=0;

    while(n>1)
    {
        int k = (int)log2(n);

        ans+=((2*b)+1)*(1<<k-1);
        n = n-(1<<k)+(1<<k-1);
    }
    cout<<ans<<" "<<ANS;

}
