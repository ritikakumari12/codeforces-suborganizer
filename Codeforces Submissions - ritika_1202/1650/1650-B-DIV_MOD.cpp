#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--)
	{
		long long int l,r,a;
		cin>>l>>r>>a;
		if(l/a == r/a) cout<<(r/a)+(r%a)<<"\n";
		else
		{
			if((r/a)+(r%a)>(r/a-1)+(a-1)) cout<<(r/a)+(r%a)<<"\n";
			else cout<<(r/a-1)+(a-1)<<"\n";
		}
	}
	// your code goes here
	return 0;
}