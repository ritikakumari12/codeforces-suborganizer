#include <iostream>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
    int a1,a2,a3;
    cin>>a1>>a2>>a3;
    int d=abs(a1+a3-(2*a2));
    if(d%3==0)
    cout<<"0"<<"\n";
    else
    cout<<"1 \n";
}
}