#include <bits/stdc++.h>

using namespace std;

int main()
{
    int h1,h2,a,b;
    cin>>h1>>h2>>a>>b;
    if(b>a)cout<<"-1\n";
    else
    {
        if(b==a){
            if(h2-h1<=8*a){
                cout<<"0\n";return 0;
            }
            else{
                cout<<"-1\n";return 0;
            }
        }
        if(h2-h1<=8*a)
        {
            cout<<"0\n";
            return 0;
        }
        int ans=1;
        ans = (h2-h1-8*a)/(12*(a-b));
        int h = h1+8*a+ans*12*(a-b);
        if(h+12*b<=h2)cout<<ans;
        else
        cout<<ans+1;
    }

}

