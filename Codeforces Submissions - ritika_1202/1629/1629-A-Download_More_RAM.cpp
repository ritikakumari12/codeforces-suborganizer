#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
		long long int n,k;
		cin>>n>>k;
		vector<pair<int,int>> a;
		int x,y;
		for(int i=0;i<n;i++)
		{
			cin>>x;
			a.push_back(make_pair(x,0));
		}
		for(int i=0;i<n;i++)
		{
			cin>>y;
			a[i].second=y;
		}
		sort(a.begin(),a.end());
		int i=0;
		long long int ans=k;
		while(i<n)
		{
			if(a[i].first<=k)
			{
				ans=ans+a[i].second;
				i++;
				k=ans;
			}
			else
			break;
		}
		cout<<ans<<"\n";
	}
	// your code goes here
	return 0;
}