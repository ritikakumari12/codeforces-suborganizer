#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		if(n==2)
		{
		cout<<"0 1 \n";
		continue;
		}
		else
		{
			int i=1;
			long long int x=2;
			while(x<=n)
			{
				x=x*2;
				i++;
			}
			if((n&n-1)==0)
			x=x/2;
			x=x/2;
			for(int i=n-1;i>=x;i--)
			{
				cout<<i<<" ";
			}
			cout<<"0 ";
			for(int i=x-1;i>=1;i--)
			{
				cout<<i<<" ";
			}
			cout<<"\n";
		}
		
	}
	// your code goes here
	return 0;
}