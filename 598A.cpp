#include <iostream>
#include <cstdio>
#include <math.h>

using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--){
        long long int N;
        cin>>N;
        long long int ans=(N*(N+1))/2;
        int r = (int)log2(N);
        ans-=pow(2,r+2) - 2;
        cout<<ans<<endl;

    }
}
