#include <iostream>
#include <cstdio>

using namespace std;

int A[10]={6,2,5,5,4,5,6,3,7,6};

int seg(int i)
{
    if((i/10)==0){
        return A[i];
    }
    else
    {
        return A[i%10]+seg(i/10);
    }
}
int main()
{
    int a,b;
    cin>>a>>b;
    long long ans=0;
    for(int i=a;i<=b;i++)
    {
        ans+=seg(i);
    }
    cout<<ans;
}

