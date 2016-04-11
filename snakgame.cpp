#include <bits/stdc++.h>

using namespace std;
#define sz 700

int A[sz][sz];
int n,m;
pair<int,int> avail()
{
    for(int c=0;c<n*m;c++){
    int i = rand()%(n) + 1;
    int j = rand()%(m) + 1;
    //for(int i=1;i<=n;i++){
    //    for(int j=1;j<=m;j++){
            if(A[i][j]==0)return make_pair(i,j);
    //    }
    //}
    }
    return make_pair(0,0);
}
void show(){

    for(int i=0;i<n+2;i++){
        for(int j=0;j<m+2;j++){
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    for(int i=0;i<sz;i++){
        for(int j=0;j<sz;j++){
            A[i][j]=0;
        }
    }
    for(int i=0;i<sz;i++){
            A[i][0]=1;
            A[0][i]=1;
    }
    int K;
    cin>>n>>m>>K;
    for(int i=0;i<K;i++){
        int x,y;
        cin>>x>>y;
        A[x][y]=1;
    }
    for(int i=0;i<sz;i++){
        A[n+1][i]=1;
        A[i][m+1]=1;
    }

    pair<int,int> head,tail;

    head = avail();
    tail = head;
    if(head.first==0 || head.second==0){cout<<"EXIT\n";fflush(stdout);return 0;}

    cout<<"NEW "<<head.first<<" "<<head.second<<"\n";
    fflush(stdout);
    A[head.first][head.second]=1;
    int cnt=0;
    while(true)
        {
            cnt++;
            string s;
            cin>>s;
            if(s=="MOVE"){
                int a,b,c,d;
                cin>>a>>b>>c>>d;
                A[c][d]=1;
            }
            else if(s=="NEW"){
                int a,b;
                cin>>a>>b;
                A[a][b]=1;
            }
            else if(s=="FREEZE"){
                int a;
                cin>>a;
            }
            else if(s=="EXIT"){
                cout<<"EXIT\n";fflush(stdout);return 0;
            }

            int x,y;
            x=head.first;
            y = head.second;

            if(A[x+1][y]==0){
                cout<<"MOVE "<<x<<" "<<y<<" "<<x+1<<" "<<y<<"\n";
                fflush(stdout);
                A[x+1][y]=1;
                head.first=x+1;
            }
            else if(A[x-1][y]==0){
                cout<<"MOVE "<<x<<" "<<y<<" "<<x-1<<" "<<y<<"\n";
                fflush(stdout);
                A[x-1][y]=1;
                head.first=x-1;
            }
            else if(A[x][y+1]==0){
                cout<<"MOVE "<<x<<" "<<y<<" "<<x<<" "<<y+1<<"\n";
                fflush(stdout);
                A[x][y+1]=1;
                head.second=y+1;
            }
            else if(A[x][y-1]==0){
                cout<<"MOVE "<<x<<" "<<y<<" "<<x<<" "<<y-1<<"\n";
                fflush(stdout);
                A[x][y-1]=1;
                head.second=y-1;
            }
            else
            {
                x=tail.first;
                y=tail.second;
                if(A[x+1][y]==0){
                    cout<<"MOVE "<<x<<" "<<y<<" "<<x+1<<" "<<y<<"\n";
                    fflush(stdout);
                    A[x+1][y]=1;
                    tail.first=x+1;
                }
                else if(A[x-1][y]==0){
                    cout<<"MOVE "<<x<<" "<<y<<" "<<x-1<<" "<<y<<"\n";
                    fflush(stdout);
                    A[x-1][y]=1;
                    tail.first=x-1;
                }
                else if(A[x][y+1]==0){
                    cout<<"MOVE "<<x<<" "<<y<<" "<<x<<" "<<y+1<<"\n";
                    fflush(stdout);
                    A[x][y+1]=1;
                    tail.second=y+1;
                }
                else if(A[x][y-1]==0){
                    cout<<"MOVE "<<x<<" "<<y<<" "<<x<<" "<<y-1<<"\n";
                    fflush(stdout);
                    A[x][y-1]=1;
                    tail.second=y-1;
                }
                else
                {
                    head = avail();
                    tail = head;
                    if(head.first==0 || head.second==0)
                    {
                        cout<<"EXIT\n";
                        fflush(stdout);
                        return 0;
                    }
                    else
                    {
                        cout<<"NEW "<<head.first<<" "<<head.second<<"\n";
                        A[head.first][head.second]=1;
                        fflush(stdout);
                    }


                }

            }





        }



}
