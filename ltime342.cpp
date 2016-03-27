#include <bits/stdc++.h>

using namespace std;
#define sz 305
#define maxim (int)1e5
int A[sz][sz];
int spec[sz];
int dist[sz][sz];
int main()
{
    for(int i=0;i<sz;i++){
        for(int j=0;j<sz;j++){
            dist[i][j]=maxim;
        }
        dist[i][i]=0;
    }

    int n,m,k;
    cin>>n>>m>>k;
    for(int i=0;i<k;i++){
        cin>>spec[i];
    }
    for(int i=0;i<m;i++){
            int x,y,z;

        cin>>x>>y>>z;
        A[x][y]=z;
        A[y][x]=z;
        dist[y][x]=z;
        dist[x][y]=z;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            for(int l=1;l<=n;l++){
                if(dist[j][l]>dist[j][i]+dist[i][l]){
                    dist[j][l]=dist[j][i]+dist[i][l];
                }
            }
        }
    }
    int dmin=maxim*1000;
    for(int i=0;i<k;i++){
        for(int j=i+1;j<k;j++){

            dmin = min(dmin,dist[spec[i]][spec[j]]);


        }
    }
    cout<<dmin<<endl;


}
