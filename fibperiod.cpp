#include <bits/stdc++.h>
using namespace std;

#define MOD ((int)1e9+7)
#define sz (int)1e8+5

long long int A[sz];
int main()
{
    //freopen("output1.txt","w",stdout);
    A[0]=0;
    A[1]=1;
    for(int i=2;i<sz;i++)
    {
        A[i] = (A[i-1]+A[i-2])%MOD;
        //cout<<A[i]<<endl;
        if(A[i]==0)cout<<i<<endl;
    }
    /*for(int k=1;k<sz;k++)
    {
        int flag=1;
        for(int i=0;i<sz;i++){
            if(A[i]!=A[i+k]){
                flag=0;
                cout<<A[i]<<endl;
                break;
            }
        }
        if(flag==1)cout<<k<<endl;
    }*/

}
