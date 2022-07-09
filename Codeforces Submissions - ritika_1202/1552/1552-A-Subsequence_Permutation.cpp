#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        string x=s;
        sort(x.begin(),x.end());
        int c=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]!=x[i])
            c++;
        }
        cout<<c<<"\n";
    }
    return 0;
}