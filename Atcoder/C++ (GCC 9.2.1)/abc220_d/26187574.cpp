#include <bits/stdc++.h>
#define ll              long long int
#define mod             1000000007
#define inf             1000000000000000001;
#define mp(x,y)         make_pair(x,y)
#define mem(a,val)      memset(a,val,sizeof(a))
#define poss(flag)      cout << (flag ? "YES\n" : "NO\n")
#define lld             long double
#define ull             unsigned long long int
using namespace std;
#pragma GCC optimize("Ofast")
#pragma GCC target("fma,sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,tune=native")
#pragma GCC optimize("unroll-loops")
//Debugger Start
 
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif
 
void _print(long long int t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(long double t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(unsigned long long int t) {cerr << t;}
template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.first); cerr << ","; _print(p.second); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
 
// Debbuger ends

void yes(){
    cout<<"YES"<<"\n";
}
void no(){
    cout<<"NO"<<"\n";
} 
void solve(){
    ll n;
    cin >> n;
    vector<ll>v(n);
    for(int i = 0;i<n;i++){
        cin >> v[i];
    }
    ll dp[n + 1][10];
    memset(dp,0,sizeof(dp));
    for(int i = 1;i<n;i++){
        if(i == 1){
            int x = (v[i] + v[i-1]) % 10;
            int y = (v[i] * v[i-1]) % 10;

            dp[i][y]++;
            dp[i][x]++;

            dp[i][x] %=  998244353;
            dp[i][y] %=  998244353; 
        }else{
            for(int j = 0;j<10;j++){
                if(dp[i-1][j]){
                    int x = (v[i] + j) % 10;
                    int y = (v[i] * j) % 10;

                    dp[i][y] += dp[i-1][j];
                    dp[i][x] += dp[i-1][j];

                    dp[i][x] %=  998244353;
                    dp[i][y] %=  998244353; 
                }
            }
        }
    }
    for(int i = 0;i<10;i++){
        cout<<dp[n - 1][i]<<'\n';
    }
        

}
int main()
{
    ios_base::sync_with_stdio(false);
#ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
#endif
 
    int t = 1;
    // cin >> t;
    while(t--){
        solve();
    }
 
 
 
#ifndef ONLINE_JUDGE
    cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
#endif
    return 0;
}