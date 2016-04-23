#include <bits/stdc++.h>
using namespace std;

int lens(int a)
{
    int cnt=1;
    int rem=(10)%a;
    map<int,int> rems;
    //rems[rem]=1;
    while(rems[rem]!=1)
    {
        rems[rem]=1;
        cnt++;
        rem = (rem*10)%a;
        if(rem==0)return 0;
    }
    return cnt;
}

int main()
{
    cout<<lens(12);

}
