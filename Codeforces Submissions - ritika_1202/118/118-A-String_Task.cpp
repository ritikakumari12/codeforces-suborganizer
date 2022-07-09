#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin>>s;
	int n=s.length();
	string ans="";
	for(int i=0;i<n;i++)
	{
		if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'|| s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' || s[i]=='y' || s[i]=='Y') continue;
		else
		{
			s[i]=tolower(s[i]);
			ans=ans+"."+s[i];
		}
	}
	cout<<ans<<"\n";
	// your code goes here
	return 0;
}