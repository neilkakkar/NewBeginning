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
            if(flag) cout<<"No\n";
            else cout<<"Yes\n";

        }
        else
        {
            int flag1=0;
            int flag2=0;
            int p1=0;
            int p2=0;
            string s1="";
            string s2="";
            for(int i=0;i<=slen/2;i++)
            {
                s1+=s[i];
                s2+=s[i+slen/2];
            }
            while(p1<=slen/2 && p2<=slen/2){
                if(s1[p1]==s2[p2]){
                    p1++;
                    p2++;
                }
                else
                {
                    if(s1[p1+1]==s2[p2] &&flag1==0){
                        p1++;
                        flag1=1;
                    }
                    else if(s1[p1]==s2[p2+1] && flag2==0){
                        p2++;
                        flag2=1;
                    }
                    else if(s1[p1+1]==s2[p2] &&flag1==1){
                        cout<<"No\n";
                        flag1=-1;
                        break;
                    }
                    else if(s1[p1]==s2[p2+1] &&flag2==1){
                        cout<<"No\n";
                        flag2=-1;
                        flag1=-1;
                        break;
                    }
                    else if(s1[p1+1]==s2[p2+1] &&flag1==0 &&flag2==0){
                        p1++;p2++;flag1=1;flag2=1;
                    }
                    else if(s1[p1+1]==s2[p2+1] && (flag1==0 || flag2==0)){
                        cout<<"No\n";
                        flag1=-1;
                        flag2=-1;
                        break;
                    }
                    else{
                        cout<<"No\n";
                        flag1=-1;
                        break;
                    }
                }
            }
            if((flag1==1 && flag2==1 )|| (flag1==0 && flag2==0)){
                cout<<"Yes\n";
            }
            else{
                cout<<"No\n";
            }

        }
    }
}
