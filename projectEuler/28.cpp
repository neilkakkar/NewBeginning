#include <bits/stdc++.h>

using namespace std;


int main()
{
    int n=999*999;
    long long int sum=-3;
    int cnt=1;
    int d=0;
    while(cnt<=n)
    {
        for(int i=1;i<=4;i++){
                cnt+=d;
            sum+=cnt;
        }
        //sum+=(cnt+d)+(cnt+2*d)+(cnt+3*d)+cnt+4*d;
        //cnt = cnt+4*d;
        d+=2;
    }
    cout<<sum;
}
