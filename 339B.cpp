#include <iostream>
#include <cstdio>

using namespace std;


int main()
{
    int N,M;
    cin>>N>>M;
    long long int sum=0;
    int curr=1;
    for(int i=0;i<M;i++)
    {
        int x;
        cin>>x;
        if(curr<=x)
        {
            sum+= (x-curr);
            curr=x;
        }
        else
        {
            sum+=N-curr+x;
            curr=x;
        }
    }
    cout<<sum;
}

