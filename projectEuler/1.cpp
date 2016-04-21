#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N=1000;
    int ans=0;
    for(int i=2;i<N;i++){
        if(i%3==0){
            ans+=i;
        }
        if(i%5==0){
            ans+=i;
        }
        if(i%15==0){
            ans-=i;
        }

    }
    cout<<ans<<endl;
}
