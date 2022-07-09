#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
		long long int l,r,k;
		cin>>l>>r>>k;
		if(l==r && l>1)
		cout<<"YES \n";
		else if(l==r && l==1)
		cout<<"NO \n";
		else
		{
		long long int x=r-l+1;
		long long int y=(r/2)-ceil((float)l/2)+1;
		if(k>=x-y)
		cout<<"YES \n";
		else
		cout<<"NO \n";
		}
	}
	// your code goes here
	return 0;
}