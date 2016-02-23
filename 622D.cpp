#include <bits/stdc++.h>

using namespace std;

#define sz (int)5e5+5

int A[sz];
int main()
{
    int n;
    cin>>n;

    int index=1;
    A[0] = n-1;
    A[1]=n-1;
    int k=2;
    for(int i=2;i<2*n;i++)
    {
        if(A[i]==0)
        {
            A[i] = n-k;
            A[i+k]=A[i];
            k++;
        }
        if(k==n)
        {
            break;
        }
    }

    for(int i=0;i<2*n;i++)
    {
        if(A[i]==0)
        {
            cout<<n<<" ";
        }
        else
        {
            cout<<A[i]<<" ";
        }
    }


}
