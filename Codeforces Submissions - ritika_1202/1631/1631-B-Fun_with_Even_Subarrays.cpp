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
		for(int i=0;i<n;i++) cin>>a[i];
		
		int i=n-1,x=a[n-1]; int c=0;
		int step=0;
		while(i>=0)
		{
			while(a[i]==x && i>-1)
			{
				c++; i--;
			}
			if(i<0) break;
			step++;
			i=i-c;
			c=2*c;
		}
		cout<<step<<"\n";
	}
	return 0;
}