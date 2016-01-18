#include <iostream>
#include <cstdio>
#include <math.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    int M;
    cin>>M;
    while(M--){
        int l,r,k;
        cin>>l>>r>>k;
        l--;r--;
        int len = r-l+1;
        k = k % (len);
        char temp[len];
        for(int i=0;i<len;i++)
        {
            temp[i]=s[l+((len+i-k)%len)];
        }
        for(int i=0;i<len;i++)
        {
            s[l+i]= temp[i];
        }
    }
    cout<<s;
}

