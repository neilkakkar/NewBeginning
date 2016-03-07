#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

int A[1005][1005];
int BFS[1005];
int mark[1005];
queue<int> bfs;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int T;
    cin>>T;
    while(T--){
        int N,M;
        cin>>N>>M;
        for(int i=1;i<=N;i++){
            for(int j=1;j<=M;j++){
                A[i][j]=0;
            }
            BFS[i]=-1;
            mark[i]=0;
        }
        for(int i=0;i<M;i++){
            int x,y;
            cin>>x>>y;
            A[x][y]=1;
            A[y][x]=1;
        }
        int S;
        cin>>S;
        BFS[S]=0;
        //bfs.clear();
        while(!bfs.empty()){
            bfs.pop();
        }
        bfs.push(S);
        mark[S]=1;
        while(!bfs.empty()){
            int r= bfs.front();
            if(bfs.empty()){
                break;
            }
            bfs.pop();
            for(int j=1;j<=N;j++){
                if(A[r][j]==1 && mark[j]==0){
                    BFS[j]=BFS[r]+1;
                    mark[j]=1;
                    bfs.push(j);
                }
            }

        }
        int ans=0;
        for(int i=1;i<=N;i++){
            if(BFS[i]>0){
                cout<<6*BFS[i]<<" ";
            }
            else if(BFS[i]<0){
                cout<<BFS[i]<<" ";
            }

        }
        cout<<endl;

    }
    return 0;
}
