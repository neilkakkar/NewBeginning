#include <bits/stdc++.h>

using namespace std;

int main()
{
	string a,b,c,d;
	cin>>a>>b>>c>>d;
	string x,y;
	x="";
	if(a[0]!='X')
	x+=a[0];

	if(a[1]!='X')
	x+=a[1];

	if(b[1]!='X')
	x+=b[1];

	if(b[0]!='X')
	x+=b[0];

	y="";
	if(c[0]!='X')
	y+=c[0];

	if(c[1]!='X')
	y+=c[1];

	if(d[1]!='X')
	y+=d[1];

	if(d[0]!='X')
	y+=d[0];

	//cout<<x<<" "<<y;
	int i,j;
	for(i=0;i<3;i++){
		if(x[i]=='A')break;
	}
	for(j=0;j<3;j++){
		if(y[j]=='A')break;
	}
	int cnt=0;
	//cout<<i<<" "<<j;
	while(cnt<2){
		if(x[i]==y[j]){
			i++;j++;
			i%=3;
			j%=3;
			cnt++;
		}
		else{
			break;
		}
	}
	if(cnt==2)cout<<"YES";
	else
	cout<<"NO";
	return 0;

}
