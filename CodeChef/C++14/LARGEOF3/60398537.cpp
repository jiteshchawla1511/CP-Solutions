#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp> 
using namespace std::chrono;
#define PEDRI16            ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
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

void solve() {
    int n,k;
    cin >> n >> k;
    vector<vector<int>> v;
    for(int i = 0;i < 3;i ++){
        vector<int> tmp(n);
        for(int j = 0;j < n;j ++){
            cin >> tmp[j];
        }
        sort(all(tmp));
        reverse(all(tmp));
        v.push_back(tmp);
    }
    
    if(k <= 3){
        if(k == 1){
            cout << max({v[0][0],v[1][0],v[2][0]}) << nline;
        }
        if(k == 2){
            cout << max({v[0][0] + v[1][0],v[1][0] + v[2][0],v[2][0] + v[0][0]}) << nline;   
        }
        if(k == 3){
            cout << v[0][0] + v[1][0] + v[2][0] << nline;
        }
        return;
    }
    int ans  = v[0][0] + v[1][0] + v[2][0];
    int i = 1,j = 1,z = 1;
    debug(v)
    k -= 3;
    while(k){
        int val = -inf;
        if(i < n){
            val = max(val,v[0][i]);
        }
        if(j < n){
            val = max(val,v[1][j]);
        }
        if(z < n){
            val = max(val,v[2][z]);
        }
        
        ans += val;
        if(val == v[0][i]){
            i += 1;
        }else if(val == v[1][j]){
            j += 1;
        } else{
            z += 1;
        }
        k -= 1;
    }
    cout << ans << nline;
    
}
signed main()
{
    auto start = high_resolution_clock::now();
    PEDRI16
#ifndef ONLINE_JUDGE
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