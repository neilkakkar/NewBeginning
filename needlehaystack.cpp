#include <bits/stdc++.h>

using namespace std;


int finds(string needle, string haystack)
{
    int P = 9973;
    int c = 256;
    int nlen = needle.length();
    int hlen = haystack.length();
    if(nlen>hlen)return -1;
    if(nlen==0)return -1;
    int needlehash=0;
    for(int i=0;i<nlen;i++){
        needlehash = (needlehash*c + needle[i])%P;
    }
    int M=1;
    for(int i=1;i<nlen;i++){
        M=(M*c)%P;
    }
    int hayhash=0;
    for(int i=0;i<nlen;i++){
        hayhash = (hayhash*c+haystack[i])%P;
    }
    for(int i=nlen;i<=hlen;i++){
        if(hayhash==needlehash){
            int t=0;
            for(int j=0;j<nlen;j++){
                if(needle[j]!=haystack[i-nlen+j]){
                    t=1;
                    break;
                }
            }
            if(t==0)return i-nlen;
        }
        if(i==hlen)return -1;
        hayhash = ((hayhash -(M*haystack[i-nlen])%P)*c + haystack[i])%P;
        hayhash = (hayhash+P)%P;
    }
    return -1;

}

int main()
{
    cout<<finds("abs","kuch abs to hua sabs");
}
