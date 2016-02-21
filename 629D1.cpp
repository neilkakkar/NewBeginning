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
    double topVol =vol[1];
    for(int i=2;i<=n;i++)
    {
        M[i] = vol[i];
        if(vol[i-1]<vol[i])
        {
            M[i] = max(M[i],M[i-1]+vol[i]);
        }
        else
        {

            M[i] =max(M[i],M[i-1]);
        }
    }
    cout<<setprecision(12)<<M[n];

}

