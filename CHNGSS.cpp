#include <bits/stdc++.h>

using namespace std;


int main()
{
    int n,m,c;
    //cin>>n>>m>>c;
    scanf("%d %d %d",&n,&m,&c);
    srand(c);
    int x = rand()%51 + 1;
    int A[n+1][m+1];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
                A[i][j]=-1;
        }
    }
    int maxim = (int)5e5;
    int cnt=0;
    int i,j;
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            if(cnt==c)break;
            printf("2 %d %d %d %d\n",i,i,j,j);
            fflush(stdout);
            scanf("%d",&A[i][j]);
            cnt++;
        }
        if(cnt==c)break;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(A[i][j]<1){
                A[i][j] = x;
                x = rand()%51 + 1;
            }
        }
    }
    printf("3\n");
    fflush(stdout);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            printf("%d ",A[i][j]);
        }
        printf("\n");
        fflush(stdout);
    }
}
