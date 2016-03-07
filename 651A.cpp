#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    long long ans=0;
    while(a>0 && b>0){
        int temp;
        if(b>a){
                //int temp;
                if(b%2==0){
                    temp =b/2 -1;
                }
                else temp = b/2;
            a+=temp;
            b-=2*temp;
            ans+=temp;
            }
        else{
                //int temp;
                if(a%2==0){
                    temp =a/2 -1;
                }
            else temp = a/2;
        b+=temp;
        a-=2*temp;
        ans+=temp;
        }
        if(temp==0)break;
        //cout<<a<<" "<<b;
    }
    if(a==1 && b==1){
        cout<<ans;
    }
    else
    cout<<ans+1;

}
