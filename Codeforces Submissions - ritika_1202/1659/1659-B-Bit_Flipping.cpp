#include<bits/stdc++.h>
using namespace std;
#define int long long int

int n;
void testcase(){
  int k;
  cin>>n>>k;
  string s;
  cin>>s;
  vector<int>v(n,0);
  int abtak = k;
  string ans;
  for(int i=0;i<n;i++){
    if(k==0){
      if((abtak-k)&1) ans+=((s[i]-'0')^1+'0');
      else ans+=s[i];
      continue;
    }
    if(((abtak-k)^(s[i]-'0'))&1){
      if(k&1) v[i]++,k--,ans+='1';
      else ans+='1';  
    }
    else{
      if(k%2==0){
        if(i==n-1) v[i]+=k,ans+='0',k=0;
        else v[i]++,k--,ans+='1';
      }
      else{
        if(i==n-1) v[i]+=k,ans+='0',k=0;
        else ans+='1';
      }
    }
  }
  v[0]+=k;
  cout<<ans<<"\n";
  for(int x:v) cout<<x<<" ";
  cout<<"\n";
  return; 
}

int32_t main(){
  #ifdef abhishek_ka_laptop
    freopen("in.txt" , "r", stdin);
    freopen("out.txt" ,"w", stdout);
  #endif
  int test=1;
  cin>>test;  
  int t=0;
  while(test--){
    testcase();
  } 
  return 0;
}





