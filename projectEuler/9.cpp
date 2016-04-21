#include<bits/stdc++.h>

using namespace std;
#define sz 1000
int main()
{
    for(int a=1;a<sz;a++){
        for(int b=1;b<sz;b++){
            int x = (int)(sqrt(a*a+b*b)+0.5);
            if(x*x == a*a+b*b && a+b+x==sz)
            {
                cout<<a*b*x<<endl;
                return 0;
            }
        }
    }
}
