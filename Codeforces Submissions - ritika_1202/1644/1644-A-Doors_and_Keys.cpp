#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int l=s.length();
		int f=0;
		for(int i=0;i<l;i++)
		{
			if(s[i]=='B')
			{
				f=0;
				for(int j=0;j<i;j++)
				{
					if(s[j]=='b')
					f=1;
				}
				if(f==0)
				{
					cout<<"NO \n";
					break;
				}
			}
			if(s[i]=='R')
			{
				f=0;
				for(int j=0;j<i;j++)
				{
					if(s[j]=='r')
					f=1;
				}
				if(f==0)
				{
					cout<<"NO \n";
					break;
				}
			}
			if(s[i]=='G')
			{
				f=0;
				for(int j=0;j<i;j++)
				{
					if(s[j]=='g')
					f=1;
				}
				if(f==0)
				{
					cout<<"NO \n";
					break;
				}
			}
		}
		if(f==1)
		cout<<"YES \n";
	}
	// your code goes here
	return 0;
}