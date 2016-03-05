#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        string s;
        cin>>s;
        int slen = s.length();

        if(slen%2==0)
        {
            int flag=0;
            int lptr=0;
            int rptr =slen/2;
            while(lptr<slen/2){
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
        else
        {
            int flag1=0;
            int flag2=0;
            int p1=0;
            int p2=0;
            int p=0;
            string s1="";
            string s2="";
            for(int i=0;i<slen/2;i++)
            {
                s1+=s[i];
                s2+=s[i+1+slen/2];
            }
            s1+=s1;
            s2+=s2;

            while(p1<slen && p<slen){
                if(s1[p1]!=s[p] && flag1==0){
                    p++;
                    flag1=1;
                }
                else if(s1[p1]!=s[p] && flag1==1){
                    flag1=-1;
                    break;
                }
                else if(s1[p1]==s[p]){
                    p1++;
                    p++;
                }
            }
            p=0;
            while(p2<slen && p<slen){
            if(s2[p2]!=s[p] && flag2==0){
                p++;
                flag2=1;
            }
            else if(s2[p2]!=s[p] && flag2==1){
                flag2=-1;
                break;
            }
            else if(s2[p2]==s[p]){
                p2++;
                p++;
            }

            }

            if(flag1==-1 && flag2==-1){
                cout<<"NO\n";
            }
            else if(flag1==1){
                cout<<"YES\n";
            }
            else if(flag2==1){
                cout<<"YES\n";
            }
            else{
                cout<<"NO\n";
            }


        }
    }
}
