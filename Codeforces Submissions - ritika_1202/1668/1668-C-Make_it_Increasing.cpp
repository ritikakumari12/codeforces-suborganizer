#include<bits/stdc++.h>
using namespace std;
#define int long long int

int n;
int fun(vector<int>&v){
  int sz = v.size();
  int pre = 0,ans=0;
  for(int i=0;i<sz;i++){
    int need = (pre+1+v[i]-1)/v[i];
    pre = need*v[i];
    ans+=need;
  }
  return ans;
}
void testcase(){
  cin>>n;
  vector<int>v(n);
  for(int &x:v) cin>>x;
  int ans = LLONG_MAX;
  for(int i=0;i<n;i++){
    vector<int>v1,v2;
    for(int i1=i-1;i1>=0;i1--) v1.push_back(v[i1]);
    for(int i1=i+1;i1<n;i1++) v2.push_back(v[i1]);
    ans = min(ans,fun(v1)+fun(v2));
  }
  cout<<ans<<"\n";
  return; 
}

int32_t main(){
  int test=1;
  // cin>>test;  
  int t=0;
  while(test--){
    testcase();
  } 
  return 0;
}





