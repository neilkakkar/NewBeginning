#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        string s;
        cin>>s;
        int R,B,G;
        R=B=G=0;
        for(int i=0;i<N;i++){
            if(s[i]=='R'){
                R++;
            }
            else if(s[i]=='G'){
                G++;
            }
            else B++;
        }
        int ans = max(R,G);
        ans = max(ans,B);
        cout<<N-ans<<endl;
    }
}
