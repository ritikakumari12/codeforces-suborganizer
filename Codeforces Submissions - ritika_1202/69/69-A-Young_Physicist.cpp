#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	int x=0,y=0,z=0;
	for(int i=0;i<t;i++)
	{
		int a=0,b=0,c=0;
		cin>>a>>b>>c;
		x+=a;
		y+=b;
		z+=c;
	}
	if(x==0 && y==0 && z==0) cout<<"YES \n";
	else cout<<"NO \n";
	return 0;
}