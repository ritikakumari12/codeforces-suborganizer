#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n+1];
		for(int i=0;i<n;i++)
		{
			a[i]=n-i;
			//cout<<a[i]<<" ";
		}
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			cout<<a[j]<<" ";
			
			cout<<"\n";
			int temp=a[n-i-2];
			a[n-i-2]=a[n-i-1];
			a[n-i-1]=temp;
		}
	}
	// your code goes here
	return 0;
}