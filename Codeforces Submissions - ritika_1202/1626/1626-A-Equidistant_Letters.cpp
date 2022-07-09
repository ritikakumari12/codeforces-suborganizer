#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int n=s.length();
        set<char> s1;
        string ans="";
        for(int i=0;i<n;i++)
        {
            if(s1.count(s[i]))
            {
                ans=ans+s[i]+s[i];
                s1.erase(s[i]);
                //cout<<ans<<" loop  \n";
            }
            
            else
            {
            s1.insert(s[i]);
            }
        }
        set<char>::iterator itr;
        for (itr = s1.begin(); itr != s1.end(); itr++) {
        ans=ans+(*itr);
    }
    cout<<ans<<"\n";
    
    }
    return 0;
}