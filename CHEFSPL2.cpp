#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--){
        string s;
        cin>>s;
        int x[26];
        int n = s.length();
        for(int i=0;i<26;i++)x[i]=0;
        for(int i=0;i<n;i++){
            x[s[i]-'a']++;
        }
        int r=0;
        int alpha=-1;
        for(int i=0;i<26;i++){
            if(x[i]%2!=0){r++;alpha=i;}
        }
        if(r>1)cout<<"NO"<<endl;
        else if(r==1 && n%2==0)cout<<"NO\n";
        else if(r==0 && n%2==1)cout<<"NO\n";
        else{
                if(r==0){
                    if(n%2==0)
                            {
                                int flag=0;
                                int lptr=0;
                                int rptr =n/2;
                                while(lptr<n/2){
                                    if(s[lptr]!=s[rptr]){
                                        flag=1;
                                        break;
                                    }
                                    lptr++;
                                    rptr++;
                                }
                                if(flag) cout<<"NO\n";
                                else cout<<"YES\n";

                            }
                }
                else{
                    char z = 'a'+alpha;
                }

        }
    }
}
