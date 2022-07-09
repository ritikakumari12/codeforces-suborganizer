/**
 *    author:  Abhishekagrawal (BIT mesra)
 *    created: 17/04/2022 20:27:46       
**/
#include<bits/stdc++.h>
using namespace std;
#define uid(a, b) uniform_int_distribution<int>(a, b)(rng)
mt19937 rng((unsigned int) chrono::steady_clock::now().time_since_epoch().count());
#define int long long int
#define mod 1000000007
#define pi (double)acos(-1.0)
#define what_is(x) cerr << #x << " is " << x << endl;
#ifdef abhishek_ka_laptop
	#define debug(...) cerr << "[" << #__VA_ARGS__ << "]:", debug_out(__VA_ARGS__);
	#define booga cerr << "booga" << endl;
#else
	#define debug(...) 42;
	#define booga 9;
#endif
 
template<class T> bool ckmin(T& a, const T& b) { return b < a ? a = b, 1 : 0; }
template<class T> bool ckmax(T& a, const T& b) { return a < b ? a = b, 1 : 0; }
 
void debug_out() { cerr << endl; } template <typename Head, typename... Tail>void debug_out(Head H, Tail... T) {cerr << " " << to_string(H);debug_out(T...);}
void bharo(int N_N) { return; }template <typename Head, typename... Tail>void bharo(int N_N, Head &H, Tail & ... T) {H.resize(N_N);bharo(N_N,T...);}
void safai() { return; }template <typename Head, typename... Tail>void safai(Head &H, Tail & ... T) {H.clear();safai(T...);}

int n;
void testcase(){
  int r,b;
  cin>>n>>r>>b;
  int bada = (r%(b+1));
  int chhota = b+1 - r%(b+1);
  int f=0;
  // cout<<bada<<" "<<chhota<<" ";
  for(int i=0;i<bada;i++){
    if(f) cout<<"B";
    for(int j=0;j<r/(b+1)+1;j++) cout<<"R";
    f=1;
  }
  for(int i=0;i<chhota;i++){
    if(f) cout<<"B";
    for(int j=0;j<r/(b+1);j++) cout<<"R";
    f=1;
  }
  cout<<"\n";
  #ifdef abhishek_ka_laptop
		if(/**condition**/0){
			assert(false);
		}
	#endif
  return; 
}

int32_t main(){
  /*Today's thought: Push yourself,because no one else is going to do it for you.*/
  /*SELECT * FROM World WHERE "Someone" LIKE '%You%'*/
  //g++ -o a acm.cpp -DENABLE_FILE_IO;./a
  #ifdef abhishek_ka_laptop
    freopen("in.txt" , "r", stdin);
    freopen("out.txt" ,"w", stdout);
  #endif
  int test=1;
  cin>>test;  
  int t=0;
  while(test--){
    // cout<<"Case #"<<++t<<":"<<" ";
    testcase();
  } 
  cerr << "Time : " << 1000 *((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
  return 0;
}





