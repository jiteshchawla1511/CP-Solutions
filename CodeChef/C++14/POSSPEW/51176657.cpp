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
bool helper(vector<ll>v){
    for(auto i:v){
        if(i == 0){
            return true;
        }
    }
    return false;
}
void solve(){
    ll n,k;
    cin >> n >> k;
    vector<ll>v(n);
    bool zero = true;
    for(int i = 0;i<n;i++){
        cin >> v[i];
        if(v[i] > 0){
            zero = false;
        }
    }
    if(zero){
        cout<<0<<'\n';
        return;
    }
    while(helper(v) && k > 0){
        vector<bool>check(n,false);
        for(int i = 0;i<n;i++){
            if(v[i] > 0){
                check[i] = true;
            }
        }
        for(int i = 0;i<n;i++){
            if(check[i]){
                if(i == 0){
                    v[n-1]++;
                    v[i+1]++;
                }else if(i ==  n - 1){
                    v[0]++;
                    v[n-2]++;
                }else{
                    v[i-1]++;
                    v[i+1]++;
                }
            }
        }
        k--;
    }
    ll sum = 0;
    for(int i = 0;i<n;i++){
        sum += v[i];
    }
    cout<<sum + 2 * n * k<<'\n';



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