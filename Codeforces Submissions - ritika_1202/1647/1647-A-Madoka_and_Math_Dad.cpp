#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		if(n%3==0){
			for(int i=1;i<=n/3;i++) cout<<"21";
			cout<<"\n";
		}
		if(n%3==1){
			cout<<"1";
			for(int i=1;i<=n/3;i++) cout<<"21";
			cout<<"\n";
		}
		else if(n%3==2)
		{
			
			for(int i=1;i<=n/3;i++) cout<<"21";
			cout<<"2";
			cout<<"\n";
			
		}
	}
	// your code goes here
	return 0;
}