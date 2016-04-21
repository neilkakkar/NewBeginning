#include <bits/stdc++.h>
using namespace std;
#define ll long long
vector<string> A;
ll valx(string value)
{
    ll val=0;
    int vlen = value.length();
    for(int i=1;i<vlen-1;i++)
    {
        val+=value[i]-'A'+1;
    }
    return val;
}
int main()
{
    //cout<<valx("COLIN");
    //freopen("names.txt","r",stdin);
    fstream file;
    file.open("names.txt");
    //string s;
    string line;
    while(getline(file,line))
    {
        std::stringstream   linestream(line);
        std::string         value;

        while(getline(linestream,value,','))
        {
            A.push_back(value);
            //std::cout << "Value(" << value << ")\n";
        }
        //std::cout << "Line Finished" << std::endl;

    }
    sort(A.begin(),A.end());
    long long ans=0;

    for(int i=0;i<A.size();i++)
    {
        ans+=(ll)(i+1)*valx(A[i]);
    }
    cout<<ans;

}
