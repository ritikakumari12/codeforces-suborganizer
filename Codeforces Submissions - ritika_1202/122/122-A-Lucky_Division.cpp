#include<bits/stdc++.h>
using namespace std;
 
int main()
{
	int n;
	cin>>n;
	bool ans=false;
	
	int x=n;
	while(x!=0)
	{
		if((x%10) ==7 || (x%10)==4) ans=true;
		else
		{
			ans=false;
			break;
		}
		x=x/10;
	}
	
	if(ans) cout<<"YES\n";
	else 
	{
		if(n%7==0 || n%4==0 || n%47==0 || n%44==0 || n%77==0 || n%444==0 || n%447==0 || n%474==0 || n%777==0 || n%74==0)
		cout<<"YES \n";
		else
		cout<<"NO \n";
	}
	return 0;
}