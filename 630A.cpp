#include <bits/stdc++.h>

using namespace std;

long long fac(long long n)
{
    long long ans=n;
    while(n>=2)
    {

        n--;
        ans=ans*n;
    }
    return ans;
}
int main()
{
    long long int n;
    cin>>n;
    if(n==3)
    {
        cout<<"24";
    }
    else
    {
        cout<<(long long)(36*(n-3)*pow(4,(n-4)));
    }
}
