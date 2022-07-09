#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
		long long int n;
		cin>>n;
		long long int a[n];
		long long int b[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(int i=0;i<n;i++)
		{
			cin>>b[i];
		}
		long long int ans=0;
		for(int i=1;i<n;i++)
		{
			if((abs(a[i]-a[i-1])+abs(b[i]-b[i-1]))<=(abs(a[i]-b[i-1])+abs(b[i]-a[i-1])))
			{
			ans =ans+abs(a[i]-a[i-1])+abs(b[i]-b[i-1]);
			}
			else
			{
			int temp=a[i];
			a[i]=b[i];
			b[i]=temp;
			ans =ans+abs(a[i]-a[i-1])+abs(b[i]-b[i-1]);
			}
		}
		cout<<ans<<"\n";
	}
	// your code goes here
	return 0;
}