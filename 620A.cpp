#include <iostream>
#include <cstdio>

using namespace std;

long long mod(long long a)
{
    if(a<0)
    {
        return -a;
    }
    return a;
}
int main()
{
    long long int x,y;
    cin>>x>>y;
    long long int a,b;
    cin>>a>>b;

    long long r = max(mod(x-a),mod(y-b));
    cout<<r;
}
