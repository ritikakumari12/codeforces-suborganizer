#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		map<int,int> m;
		int ans=0;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			m[a[i]]++;
		}
		int m1=0;
		for(auto i:m)
		{
			m1=max(m1,i.second);
		}
		n=n-m1;
		if(n==0)
		{
			cout<<"0"<<"\n";continue;}
		int count=0;
		while(ans<n)
		{
			int c=n-ans;
			ans+=min(c,m1);
			m1=2*m1;
			count++;
		}
		cout<<ans+count<<"\n";
	}
	// your code goes here
	return 0;
}