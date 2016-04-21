#include <bits/stdc++.h>

using namespace std;
#define sz (int)4e6+2
#define ll long long

ll A[sz];
int check(int a)
{
    string r="";
    while(a>0){
        int tem = a%10;
        a = a/10;
        r+=tem+'0';
    }
    int lpt=0;
    int rpt = r.length()-1;
    while(lpt<rpt){
        if(r[lpt]!=r[rpt])return 0;
        lpt++;
        rpt--;
    }
    return 1;

}
int main()
{
    int l=100;
    int r=999;
    int ans=0;
    for(int i=l;i<=r;i++){
        for(int j=l;j<=r;j++){
            int num = i*j;
            if(check(num))
            {
                ans = max(ans,num);
            }

        }
    }
    cout<<ans<<endl;
}


