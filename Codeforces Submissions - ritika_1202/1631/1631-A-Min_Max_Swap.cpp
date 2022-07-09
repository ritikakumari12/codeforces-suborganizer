#include <bits/stdc++.h>
using namespace std;

void swap(int &x,int &y)
{
	int temp=x;
	x=y;
	y=temp;
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		int b[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		for(int i=0;i<n;i++)
		cin>>b[i];
		
		for(int i=0;i<n;i++)
		{
			//cout<<a[i]<<" "<<b[i]<<"\n";
			if(a[i]<b[i]) swap(a[i],b[i]);
			//cout<<a[i]<<" "<<b[i]<<"\n";
		}
		int *ptr=max_element(a,a+n);
		int *ptr1=max_element(b,b+n);
		cout<<(*ptr)*(*ptr1)<<"\n";
	
	}
	return 0;
}