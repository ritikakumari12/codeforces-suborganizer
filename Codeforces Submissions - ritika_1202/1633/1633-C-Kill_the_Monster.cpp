#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--)
	{
		long long int hc,dc,hm,dm;
		long long int k,w,a;
		  cin>>hc>>dc>>hm>>dm>>k>>w>>a;
		int f=0;
		for(int i=0;i<=k;i++)
		{
			long long int nhc = hc + (i * a);
        	long long int ndc = dc + ((k - i) * w);
        	long long int move_by_char = (hm)/ndc;
			long long int move_by_mons = (nhc)/dm;
			if(hm%ndc > 0)move_by_char++;
			if(nhc%dm >0)move_by_mons++;
			if(move_by_char<=move_by_mons)
        	{
            f=1;
            break;
        	}
		}
    		if(f==0)
        	printf("NO \n");
        	else
        	printf("YES \n");
		}

	// your code goes here
	return 0;
}