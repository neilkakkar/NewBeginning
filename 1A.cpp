#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    int N,M,a;
    cin>>N>>M>>a;
    long long int ans=0;
    if(N%a!=0){
        ans+=N/a + 1;
    }
    else{
        ans+=N/a;
    }

    if(M%a!=0){
        ans*=(M/a + 1);
    }
    else{
        ans*=M/a;
    }
    cout<<ans;

}
