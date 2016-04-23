#include <bits/stdc++.h>

using namespace std;


int primes[25] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97};

int values[101][25];
int taken[101][101];
int main()
{
    int n =9;
    int ans=(n-1)*(n-1);
    int tans=0;
    int lim=n;
    for(int a=2;a<=lim;a++)
    {
        int temp =a;
        for(int k=0;k<25;k++)
        {
            if(temp%primes[k]==0)
            {
                //int temp=a;
                while(temp%primes[k]==0)
                {
                    values[a][k]++;
                    temp = temp/primes[k];
                }
            }

        }

    }
    for(int i=2;i<=lim;i++)
    {
        for(int j=2;j<=lim;j++)
        {
            //int cnt=0;
            for(int k=2;k<=lim;k++)
            {
                for(int l=2;l<=lim;l++)
                {
                    if(i==k || j==l)continue;
                    int flag=0;
                    for(int z=0;z<25;z++)
                    {
                        if(values[i][z]*j!=values[k][z]*l)
                        {
                            flag=1;break;//tans++;
                        }
                    }
                    if(flag==0)
                    {
                        cout<<i<<" "<<j<<" "<<k<<" "<<l<<endl;
                        taken[i][j]++;
                        j++;
                        tans++;
                    }
                }
            }
        }
    }
    cout<<tans<<endl;
    for(int i=2;i<=lim;i++)
    {
        for(int j=2;j<=lim;j++)
        {

        }
    }
    cout<<ans-(tans/2)<<endl;
}
