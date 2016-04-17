#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

#define ll long long
#define MOD ((ll)1e9+7)
const ll inv2 = 500000004;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int Q;
    cin>>Q;
    while(Q--){
        ll l,r;
        cin>>l>>r;
        ll sum2=0;
        ll sum1=0;
        r%=MOD;
        sum2 = ((((((((ll)5*inv2)%MOD)*r)%MOD)*(r+1))%MOD)*(2*r+1))%MOD;
        sum2+=((((((ll)4*inv2)%MOD)*r)%MOD)*(r+1))%MOD;
        sum2= sum2 + (MOD - (4*r)%MOD)%MOD;
        sum2%=MOD;

        if(l==1){
            cout<<sum2%MOD<<endl;
        }
        else{
            l--;
            l%=MOD;
            sum1 = (((((((5*inv2)%MOD)*l)%MOD)*(l+1))%MOD)*(2*l+1))%MOD;
            sum1+=(((((4*inv2)%MOD)*l)%MOD)*(l+1))%MOD;
            sum1= sum1 + (MOD - (4*l)%MOD)%MOD;
            sum1%=MOD;


        cout<<(sum2-sum1+MOD)%MOD<<endl;
        }


    }
    return 0;
}
