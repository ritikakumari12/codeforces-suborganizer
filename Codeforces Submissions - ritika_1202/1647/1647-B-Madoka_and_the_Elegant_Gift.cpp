#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		string s[n];
		for(int i=0;i<n;i++) 
		{cin>>s[i];}
		int f=0,f1=0;
		for(int i=0;i<(n-1);++i)
		{
			f=0;
			for(int j=0;j<(m-1);++j)
			{
				f=0;
				if(s[i][j]=='1')f++;
				if(s[i+1][j]=='1')f++;
				if(s[i][j+1]=='1')f++;
				if(s[i+1][j+1]=='1')f++;
				
				//cout<<f<<" "<<i<<" "<<j<<"\n";
				if(f==3){
					f1=1;
					break;
				}
				
				/**if(s[i][j]=='1' && s[i+1][j]=='1' && s[i][j+1]=='0' && s[i+1][j+1]=='1')
				{
					f=1;
					break;
				}*/
			}
		}
		if(f1==1) cout<<"NO \n";
		else cout<<"YES \n";
	}
	return 0;
}