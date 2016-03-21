#include <bits/stdc++.h>

using namespace std;
#define sz (int)1e3+5

int A[sz];
int d[sz];
int main()
{
    ios_base::sync_with_stdio(0);
    int T;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        int xo=0;
        for(int i=0;i<n;i++)
        {
            cin>>A[i];
            d[i]=0;
            xo=xo^A[i];
        }
        int flag=0;
        int i=0;
        if(xo==0)cout<<"First\n";
        else{
        for(i=0;i<n;i++){
                flag=0;
            for(int j=0;j<n;j++){

                if((xo^A[j])!=0 && d[j]==0){
                    xo=xo^A[j];
                    d[j]++;
                    flag=1;
                    break;
                }
            }
            if(flag==0){
                i++;//ans=i;
                break;
            }
        }
        if(i%2==0)cout<<"First\n";
        else cout<<"Second\n";
        }
    }
}
