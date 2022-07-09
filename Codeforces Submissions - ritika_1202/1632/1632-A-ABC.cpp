#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string bin;
		int one=0,zero=0;
		cin>>bin;
		for(int i=0;i<n;i++)
		{
			if(bin[i]=='1')
			one++;
			else
			zero++;
		}
		//cout<<one<<" "<<zero<<" ";
		if(one==1 && zero==1)
		cout<<"YES \n";
		else if(n==1)
		cout<<"YES \n";
		else
		cout<<"NO \n";
	}
	// your code goes here
	return 0;
}