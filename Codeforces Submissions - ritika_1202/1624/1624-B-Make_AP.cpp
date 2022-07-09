#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a[3];
        for(int i=0;i<3;i++)
        {
            cin>>a[i];
        }
        if(a[1]-a[0]==a[2]-a[1] || ((a[0]==a[1]) && (a[1]==a[2])))
        cout<<"YES \n";
        else if((2*a[1]-a[2])%a[0]==0 && 2*a[1]-a[2]>0)
        cout<<"YES \n";
        else if((2*a[1]-a[0])%a[2]==0 && 2*a[1]-a[0]>0)
        cout<<"YES \n";
        else if((a[0]+a[2])%(2*a[1])==0)
        cout<<"YES \n";
        else
        cout<<"NO \n";
    }
}