#include <bits/stdc++.h>

using namespace std;
#define ll long long
double dist(ll x1,ll y1, ll x2,ll y2)
{
    return ((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
}

ll x,y;

double mod(double a)
{
    if(a<0)
        return -a;
    return a;
}
double dline(ll x1,ll y1,ll x2,ll y2)
{
    double l2 = dist(x1,y1,x2,y2);
    if(l2==0)
    {
        return dist(x1,y1,x,y);
    }

    double t = (x-x1)*(x2-x1) + (y-y1)*(y2-y1);
    t = t/l2;
    if(t<0)
    {
        return dist(x1,y1,x,y);
    }
    else if(t>1)
    {
        return dist(x2,y2,x,y);
    }
    return mod(l2*(double)(y*(x2-x1)-y1*(x2-x1) - x*(y2-y1)+x1*(y2-y1))/dist(x1,y1,x2,y2));

}
int main()
{
    int n;
    cin>>n>>x>>y;
    double dmax=0;
    double dmin = 1e18;
    vector<pair<int,int> > A;
    for(int i=0;i<n;i++)
    {
        long long int x1,y1;
        cin>>x1>>y1;
        double d = dist(x1,y1,x,y);
        if(d>dmax)
        {
            dmax = d;
        }
        if(d<dmin)
        {
            dmin = d;
        }
        A.push_back(make_pair(x1,y1));
    }
    for(int i=0;i<n;i++)
    {
        double d=dline(A[i].first,A[i].second,A[(i+1)%n].first,A[(i+1)%n].second);
        if(d>dmax)
        {
            //cout<<d<<endl;
            dmax=d;
        }
        if(d<dmin)
        {

            //cout<<d<<endl;
            dmin=d;
        }
    }
    double ans = 3.141592653589*(dmax - dmin);
    cout<<setprecision(12)<<ans;

}

