#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n;
    cin>>n;
    long long k = (-1 + (int)sqrt(1+8*n))/2;

    if(n - (k*(k+1))/2 ==0)
        cout<<k;
    else
        cout<<(n - (k*(k+1))/2);

}
