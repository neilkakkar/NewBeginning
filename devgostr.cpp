#include <bits/stdc++.h>

using namespace std;
#define MOD ((int)1e9+7)
#define ll long long


vector<string> strings;
vector<string> alpha;

string s;
int K;

int d(string s1,string s2)
{
    int ans=0;
    for(int i=0;i<min(s1.length(),s2.length());i++)
    {
        if(s1[i]!=s2[i])ans++;

    }
    return ans;
}
ll totalfinalans=0;
void showall(string prefix,int A,int k)
{
    if(k==0)
    {
        //if(d(s,prefix)<=K)
        //strings.push_back(prefix);
        totalfinalans++;
        //cout<<prefix;
        return;
    }
    for(int i=0;i<A;i++)
    {
        string newpref = prefix+alpha[i];
        int flag=0;
        int nlen = newpref.length();
        if(d(newpref,s)<=K)
        {
            for(int d=1;nlen-1-2*d>=0;d++)
            {
                if(newpref[nlen-1]==newpref[nlen-1-d] && newpref[nlen-1-d]==newpref[nlen-1-2*d])
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0)
            {
                showall(newpref,A,k-1);
            }
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T;
    cin>>T;
    while(T--){
        alpha.clear();
        strings.clear();
        totalfinalans=0;
        int A;
        cin>>A>>K;
        cin>>s;
        int slen = s.length();
        if(A==1)
        {
            if(slen<=2)cout<<"1\n";
            else cout<<"0\n";
        }
        else
        {
            if(A==2)
            {
                alpha.push_back("a");
                alpha.push_back("b");
            }
            else
            {
                alpha.push_back("a");
                alpha.push_back("b");
                alpha.push_back("c");
            }
            showall("",A,slen);
            /*ll ans=0;
            for(int i=0;i<strings.size();i++)
            {
                string r = strings[i];

                int flag=0;
                for(int a=0;a<slen;a++)
                {
                    if(flag==1)break;
                    for(int d=1;a+2*d<slen;d++)
                    {
                        if(r[a]==r[a+d] && r[a+d]==r[a+2*d])
                        {
                            flag=1;
                            break;
                        }
                    }
                }
                if(flag==0)
                {
                    ans++;
                    //cout<<strings[i]<<endl;
                }
            }*/
            cout<<totalfinalans%MOD<<endl;

        }

    }
}
