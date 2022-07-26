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
    vector<ll>a(n),b(n-1);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i<n-1;i++){
        cin >> b[i];
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    map<ll,ll>mp;
    for(int i=0;i<n-1;i++){
        ll x = b[i] - a[i];
        ll y = b[i] - a[i+1];
        if(x > 0){
            mp[x]++;
        }
        if(y > 0){
            mp[y]++;
        }
    }
    ll x = INT_MAX,maxe = 0;
    for(auto it:mp){
        if(it.second > maxe){
            maxe = it.second;
            x = it.first;
        }else if(it.second == maxe){
            x = min(x,it.first);
        }
    }
    cout<<x<<"\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
#ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
#endif
 
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
 
 
 
#ifndef ONLINE_JUDGE
    cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
#endif
    return 0;
}