#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp> 
#define SPED            ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define int             long long int
#define mod             1000000007
#define nline           '\n' 
#define all(x)          (x).begin(), (x).end()
#define modulo(x,y)     ((x %y +y) % y)
#define google(x)       cout << "Case #" << x << ": ";
#define inf             1000000000000000001
#define mp(x,y)         make_pair(x,y)
#define mem(a,val)      memset(a,val,sizeof(a))
#define poss(flag)      cout << (flag ? "YES\n" : "NO\n")
#define lld             long double
#define ull             unsigned int
#define sz(x) (int)x.size()
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds; // find_by_order, order_of_key
#pragma GCC optimize("Ofast")
#pragma GCC target("fma,sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,tune=native")
#pragma GCC optimize("unroll-loops")
//Debugger Start
 
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif
 
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(long double t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(unsigned int t) {cerr << t;}
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

int dx[] = {-1,1,0,0};
int dy[] = {0,0,-1,1};
void yes(){
    cout<<"YES"<<"\n";
}
void no(){
    cout<<"NO"<<"\n";
} 
bool cmp(pair<int,int>a,pair<int,int>b){
    if(b.second == a.second){
        return a.first > b.first;
    }else{
        return a.second > b.second;
    }
}
int n;
bool check1(vector<int> &v,double mid){
    vector<double> b(n + 1);
    for(int i = 0;i < n;i ++){
        b[i + 1] = v[i] - mid;
    }
    double dp[n + 1][2];
    dp[0][0] = dp[0][1] = 0;
    for(int i = 1 ;i <= n;i ++){
        dp[i][0] = dp[i - 1][1];
        dp[i][1] = b[i] + max(dp[i-1][1],dp[i-1][0]);
    }
    double ans = max(dp[n][0],dp[n][1]);
    return ans >= 0;
}
bool check2(vector<int> &v,int mid){
    vector<int> b(n + 1);
    for(int i = 0;i < n;i ++){
        if(v[i] >= mid){
            b[i + 1] = 1;
        }else{
            b[i + 1] = -1;
        }
    }
    int dp[n + 1][2];
    dp[0][0] = 0,dp[0][1] = 0;
    for(int i = 1 ;i <= n;i ++){
        dp[i][0] = dp[i - 1][1];
        dp[i][1] = b[i] + max(dp[i-1][1],dp[i-1][0]);
    }
    int ans = max(dp[n][0],dp[n][1]);
    return (ans > 0);
    
}
void solve() {
    
    cin >> n;
    vector<int> v(n);
    for(int i= 0;i < n;i ++){
        cin >> v[i];
    }
    int l = 0,r = 1e9;
    int mid;
    // median
    while(r >= l){
        mid = l + (r - l + 1)/2;
        if(check2(v,mid)){
            l = mid + 1;
        }else{
            r = mid - 1;
        }
    }
    int ans2 = r;  
    int ans1 = 0;
    double l1 = 0 ,r1 = 1e9;
    double val = 1e-4;
    double mid2 ;
    while(r1 - l1 > val){
        mid2 = l1 + (r1 - l1)/2;
        if(check1(v,mid2)){
            l1 = mid2 + val;
        }else{
            r1 = mid2 - val;
        }
    }
    cout << setprecision(5) << fixed << r1<< nline;
    cout << ans2 << nline;
}
signed main()
{
    SPED
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