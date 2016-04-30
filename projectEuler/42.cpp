#include <bits/stdc++.h>

using namespace std;

const int sz =(int)1e6;

#define ll long long

int istri(int a)
{
    int b = a*2;
    int r = (int)sqrt(b);
    if(r*(r+1)==b || (r-1)*r==b || (r+1)*(r+2)==b)return 1;
    return 0;
}
int toint(string s)
{
    int ans=0;
    for(int i=1;i<s.length()-1;i++)
    {
        ans+=s[i]-'A'+1;
    }
    return ans;
}
int main()
{
    //cout<<(toint(".SKY."))<<endl;
    //freopen("words.txt","r",stdin);
    fstream file;
    file.open("words.txt");
    int cnt=0;
    //string s;
    string line;
    while(getline(file,line))
    {
        std::stringstream   linestream(line);
        std::string         value;

        while(getline(linestream,value,','))
        {
            cnt+=istri(toint(value));
            //A.push_back(value);
            //std::cout << "Value(" << value << ")\n";
        }
        //std::cout << "Line Finished" << std::endl;

    }
    cout<<cnt;

}
