#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int n=s.length();
		long long int o=0,z=0;
		for(int i=0;i<n;i++)
		{
			if(s[i]=='1') o++;
			else z++;
		}
		if(o==z)
		{
			if(o==1 || z==1)
			cout<<0<<"\n";
			else
			{
				cout<<o-1<<"\n";
			}
		}
		if(o<z)
		cout<<o<<"\n";
		if(z<o)
		cout<<z<<"\n";
	}
	// your code goes here
	return 0;
}