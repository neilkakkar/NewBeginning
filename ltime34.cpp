#include <bits/stdc++.h>

using namespace std;
#define sz (int)1e4+5
int A[sz];
int main()
{
    int T;
    cin>>T;
    while(T--){
        string s;
        cin>>s;
        int slen = s.length();
        int A=0;
        int B=0;
        for(int i=0;i<slen;i++){
                if(s[i]=='A')A++;
                else B++;
        }
        if(N<=4)
        if(A==2)cout<<"A\n";
        else if (B==2)cout<<"B\n";
        else cout<<"-1\n";
    }
}
