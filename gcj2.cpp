#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main()
{
    freopen("A-large.in","r",stdin);
    freopen("output.txt","w",stdout);
    int T;
    cin>>T;
    for(int iter=1;iter<=T;iter++)
    {
        ll n;
        cin>>n;
        if(n!=0)
        {
            int A[10]={0};
            ll sum=0;
            ll temp=n;
            while(temp>0)
            {
                A[temp%10]++;
                temp = temp/10;
            }
            for(int i=0;i<10;i++)
            {
                if(A[i]>0)
                {
                    sum++;
                }
            }

            ll cnt=2;
            while(sum<10)
            {
                //n = n*cnt;
                ll temp = n*cnt;
                while(temp>0)
                {
                    if(A[temp%10]==0)
                    {
                        sum++;
                    }
                    if(sum==10)break;
                    A[temp%10]++;
                    temp = temp/10;
                }
                cnt++;

            }
            printf("Case #%d: %d\n",iter,n*(cnt-1));
        }
        else
        {
            printf("Case #%d: INSOMNIA\n",iter);
        }

    }
}
