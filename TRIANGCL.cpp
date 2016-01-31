#include <bits/stdc++.h>

using namespace std;

int dist(int x1,int y1,int x2,int y2)
{
    return (x1-x2)*(x1-x2) + (y1-y2)*(y1-y2);
}

int angle(int x1,int y1, int x2,int y2, int x3, int y3)
{
    return (x2-x1)*(x3-x1) + (y2-y1)*(y3-y1);

}
int main()
{
    int Tsk;
    cin>>Tsk;
    int T;
    cin>>T;
    while(T--)
    {
        int x1,y1,x2,y2,x3,y3;
        cin>>x1>>y1>>x2>>y2>>x3>>y3;
        int d12 = dist(x1,y1,x2,y2);
        int d13 = dist(x1,y1,x3,y3);
        int d23 = dist(x2,y2,x3,y3);


        bool isos = false;
        bool right = false;
        bool acute = false;
        int angle1 = angle(x1,y1,x2,y2,x3,y3);
        int angle2 = angle(x2,y2,x3,y3,x1,y1);
        int angle3 = angle(x3,y3,x1,y1,x2,y2);

        if(d12==d23 || d23 == d13 || d12==d13)
        {
            isos=true;
        }
        if(angle1==0 || angle2==0 || angle3==0)
        {
            right = true;
        }
        if(angle1>0 && angle2>0 && angle3>0)
        {
            acute = true;
        }
        if(Tsk==1)
        {
            if(isos)
            {
                cout<<"Isosceles triangle"<<endl;
            }
            else
            {
                cout<<"Scalene triangle"<<endl;
            }
        }
        else
        {
            if(isos)
            {
                if(acute)
                {
                    cout<<"Isosceles acute triangle\n";
                }
                else if(right)
                {
                    cout<<"Isosceles right triangle\n";
                }
                else
                {
                    cout<<"Isosceles obtuse triangle\n";
                }
            }
            else
            {
                if(acute)
                {
                    cout<<"Scalene acute triangle\n";
                }
                else if(right)
                {
                    cout<<"Scalene right triangle\n";
                }
                else
                {
                    cout<<"Scalene obtuse triangle\n";
                }

            }
        }
    }
}
