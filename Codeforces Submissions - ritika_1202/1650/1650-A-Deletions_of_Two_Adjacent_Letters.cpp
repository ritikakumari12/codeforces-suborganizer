#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		char c;
		cin>>c;
		int l=s.length();
		int i;
		vector<int> a;
		for(i=0;i<l;i++)
		{
			if(s[i]==c)
			a.push_back(i);
		}
		bool f=false;
		for(int i=0;i<a.size();i++)
		{
			if(a[i]%2==0 && (l-a[i]-1)%2==0)
			f=true;
		}
		if(f) cout<<"YES\n";
		else cout<<"NO\n";
	}
	// your code goes here
	return 0;
}