#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,p;
    cin>>n>>p;
    vector<double> A;
    for(int i=0;i<n;i++)
    {
        int l,r;
        cin>>l>>r;
        int x = r/p -(l-1)/p;
        double res = (double)x/(r-l+1);
        A.push_back(res);
    }
    double ans=0;
    for(int i=0;i<n;i++)
    {
        ans+=(2000)*(A[i]+A[(i+1)%n] - A[i]*A[(i+1)%n]);
    }
    cout<<setprecision(11)<<ans<<endl;
}
