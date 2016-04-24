#include <bits/stdc++.h>

using namespace std;

int main()
{
    int anscnt=0;
    int peri=0;
    int sz = 120;
    for(int i=3;i<=sz;i++)
    {
        int cnt=0;
        for(int a=1;a<=sz;a++)
        {
            for(int b=a+1;i-a-b>0;b++)
            {
                int c = i-a-b;
                if(c*c==a*a+b*b)
                {
                    cnt++;
                }

            }
        }
        if(cnt>anscnt)
        {
            anscnt = cnt;
            peri =i;
        }
    }
    cout<<peri<<endl;
}
