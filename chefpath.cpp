#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--){
        long long int N,M;
        cin>>N>>M;
        if((N==1 && M==2) || (N==2 && M==1))cout<<"Yes\n";
        else if(N==1 || M==1)cout<<"No\n";
        else if(N%2==1 && M%2==1)cout<<"No\n";
        else cout<<"Yes\n";

    }
}
