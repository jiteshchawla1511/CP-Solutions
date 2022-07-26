#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp> 
using namespace std::chrono;
#define FRENKIE21            ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
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
 
#ifdef LeoMessi
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
void yes(int n = 0){
    if(n == 1){
        cout<<"Yes"<<"\n";
    }else{
        cout<<"YES"<<"\n";
    }
}
void no(int n = 0){
    if(n == 1){
        cout<<"No"<<"\n";
    }else{
        cout<<"NO"<<"\n";
    }
} 
bool cmp(pair<int,int>a,pair<int,int>b){
    if(b.second == a.second){
        return a.first > b.first;
    }else{
        return a.second > b.second;
    }
}
vector<int> factors(int n){
    int N = n;
    vector<int> v;
    for(int i = 2;i * i <= n;i ++){
        if(N % i == 0){
            while(N % i == 0){
                N /= i;
            }
            v.push_back(i);
        }
    }
    if(N > 2){
        v.push_back(N);
    }
    return v;
}
const int N = 505;
int dp[N][N];
// vector<vector<int>>dp(N,vector<int>(N,0)); 

void solve() {
    int n,w;
    cin >> n >> w;
    vector<int> weight(n),profit(n);
    vector<int> temp;
    for(int i = 0;i < n;i ++){
        cin >> profit[i] >> weight[i];
    }
    for(int i = 1;i <= n;i ++){
        for(int j = 1;j <= w;j ++){
            int op1 = dp[i-1][j];
            int op2 = 0;
            if(j - weight[i-1] >= 0){
                op2 = dp[i-1][j - weight[i-1]] + profit[i-1];
            }
            dp[i][j] = max(op1,op2);
        }
    }
    int i = n,j = w;
    while(i > 0 && j > 0){
        if(j - weight[i-1] >= 0){
            int val = dp[i-1][j - weight[i-1]] + profit[i-1];
            if(val == dp[i][j]){
                temp.push_back(profit[i-1]);
                j -= weight[i-1];
            }
        }
        i --;
    } 
    vector<int> p = {2,3,5,7,11,13,17,19,23,29};
    sort(all(temp));
    reverse(all(temp));
    int ans  = 0;
    j = 9;
    for(int i = 0;i < sz(temp);i ++){
        if(j >= 0){
            ans += temp[i] * p[j];
            j --;
        }else{
            ans += temp[i];
        }
    }
    cout << ans << nline;
    for(int i = 0;i < N;i ++){
        for(int j = 0;j < N;j ++){
            dp[i][j] = 0;
        }
    }



    
}
signed main()
{
    auto start = high_resolution_clock::now();
    FRENKIE21
#ifdef LeoMessi
    freopen("Error.txt", "w", stderr);
#endif
 
    int t = 1;
    cin >> t;
    for(int T = 1;T <= t;T ++){
        cout << setprecision(15) << fixed ;
        solve();
    }
 
 
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cerr << "\nTime taken : " << fixed << duration.count() / 1000000.0 << "seconds" << "\n";
    
    return 0;
}