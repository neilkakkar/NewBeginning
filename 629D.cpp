#include <bits/stdc++.h>

using namespace std;
#define sz (int)1e5+6
#define PI 3.14159265359

double vol[sz];
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        double r,h;
        cin>>r>>h;
        vol[i] = PI*r*r*h;
    }

    double M[n+1];
    M[1] = vol[1];
    for(int i=2;i<=n;i++)
    {
        M[i] = vol[i];
        for(int j=1;j<i;j++)
        {
            if(vol[j]<vol[i] && M[i]<M[j]+vol[i])
            {
                M[i] = M[j]+vol[i];
            }
        }
    }
    double ans=0;
    for(int i=1;i<=n;i++)
    {
        if(M[i]>ans)
        {
            ans=M[i];
        }

    }
    cout<<setprecision(16)<<ans;
}
