#include <bits/stdc++.h>

using namespace std;

int A[10]={-3,3,3,5,4,4,3,5,5,4};
int reduce(int a)
{
    if(a<10)return A[a];
    if(a==10)return 3;
    if(a==11)return 6;
    if(a==12)return 6;
    if(a==13)return 8;
    if(a==14)return 8;
    if(a==15)return 7;
    if(a==16)return 7;
    if(a==17)return 9;
    if(a==18)return 8;
    if(a==19)return 8;
    if(a==20)return 6;
    if(a<30)return reduce(20)+reduce(a%10);
    if(a==30)return 6;
    if(a<40)return reduce(30)+reduce(a%10);
    if(a==40)return 5;
    if(a<50)return reduce(40)+reduce(a%10);
    if(a==50)return 5;
    if(a<60)return reduce(50)+reduce(a%10);
    if(a==60)return 5;
    if(a<70)return reduce(50)+reduce(a%10);
    if(a==70)return 7;
    if(a<80)return reduce(70)+reduce(a%10);
    if(a==80)return 6;
    if(a<90)return reduce(80)+reduce(a%10);
    if(a==90)return 6;
    if(a<100)return reduce(80)+reduce(a%10);
    //if(a==100)return 10;
    //if(a==200)return
    if(a>=100)return reduce(a/100)+10+reduce(a%100);
}
int main()
{
    cout<<reduce(300)<<endl;
    int ans=0;
    for(int i=1;i<1000;i++)
    {
        ans+=reduce(i);
    }
    ans+=11;
    cout<<ans;


}
