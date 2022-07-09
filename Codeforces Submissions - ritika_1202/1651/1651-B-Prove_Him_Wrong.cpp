#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		if(n>19) {cout<<"NO\n";continue; }
		cout<<"YES\n";
		long long int x=1;
		cout<<x<<" ";
		for(int i=1;i<n;i++)
		{
			x=x*3;;
			cout<<x<<" ";
		}
		cout<<"\n";
	}
	// your code goes here
	return 0;
}