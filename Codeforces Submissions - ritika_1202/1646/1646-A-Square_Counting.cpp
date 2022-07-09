#include<bits/stdc++.h>
using namespace std;
 
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n,s;
		cin>>n>>s;
		n=n*n;
		n=s/n;
		cout<<n<<"\n";
	}
	return 0;
}