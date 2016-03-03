#include <bits/stdc++.h>

using namespace std;
#define sz 5005

int A[sz][sz];

int main()
{
    int n,m,k;
    scanf("%d %d %d",&n,&m,&k);

    for(int i=0;i<k;i++)
    {
        int x,y,a;
        scanf("%d %d %d",&x,&y,&a);
        y--;
        if(x==1)
        {
            for(int j=0;j<m;j++)
            {
                A[y][j]=a;
            }
        }
        else
        {
            for(int j=0;j<n;j++)
            {
                A[j][y]=a;
            }
        }
    }
    char s[2*m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            s[2*j+1]=A[i][j]+'0';
            s[2*j+2]=' ';
            //printf("%d ",A[i][j]);
        }

        printf("%s\n",s+1);
        //printf("\n");
    }
}

