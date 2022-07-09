#include<bits/stdc++.h>
using namespace std;
#define int long long int

int n;
void testcase(){
  int a,b; 
  cin>>n>>a>>b;
  vector<int>x(n+1,0);
  for(int i=1;i<=n;i++) cin>>x[i];
  int l = 0, r = n;
  int ans = LLONG_MAX;
  int dis = 0;
  vector<int>dp(n+1,0);
  dp[n] = x[n];
  for(int i=n-1;i>=0;i--) dp[i]=dp[i+1]+x[i];
  for(int i=0;i<=n;i++){
    int bachi_len = n-i+1;
    int bacha_dis = dp[i]-bachi_len*x[i];
    int yahatak_lane_me = x[i]*(a+b);
    int iskeage_lejane_me = bacha_dis*b;
    ans = min(ans,yahatak_lane_me+iskeage_lejane_me);
  }
  cout<<ans<<"\n";
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





