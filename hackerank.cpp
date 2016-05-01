#include <bits/stdc++.h>
using namespace std;

#define sz (int)1e5

int A[sz];
int main(){
    int Q;
    cin >> Q;
    for(int a0 = 0; a0 < Q; a0++){
        long L;
        long R;
        cin >> L >> R;

        A[0]=0;
        for(int i=1;i<1000;i++){
            A[i] = A[i-1]^i;
            //cout<<ans<<endl;
        }
        int ans=0;
        for(int i=L;i<=R;i++){
            ans^=A[i];
        }
        cout<<ans<<endl;
    }
    return 0;
}
