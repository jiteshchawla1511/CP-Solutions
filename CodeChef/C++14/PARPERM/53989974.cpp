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
const int maxn  = 1e5 + 10;
int check[maxn];
vector<int> prime;
void seive(){
    memset(check,1,sizeof(check));
    check[1] = check[0] = 0;
    for(int i = 2;i * i <= maxn;i ++){
        if(check[i]){
            for(int j = 2*i;j < maxn;j += i){
                check[j] = 0;
            }
        }
    }
}
void solve() {
    int n,k;
    cin >> n >> k;
    vector<int> a,b;
    b.push_back(1);
    for(int i = 2;i <= n;i ++){
        if(!check[i]){
            a.push_back(i);
            continue;
        }
        int x = i;
        if(i * 2 <= n){
            a.push_back(i);
        }else{
            b.push_back(i);
        }
    }
    int sz1 = a.size();
    int sz2 = b.size();
    if(k <= sz2 || k >= sz1){
        yes();
        if(k <= sz2){
            for(int i = 0;i < k;i ++){
                cout<<b[i]<<' ';
            }
            cout<<nline;
        }else{
            for(auto i:a){
                cout<<i<<' ';
            }
            for(int i = 0;i < k - sz1;i ++){
                cout<<b[i]<<' ';
            }
            cout<<nline;
        }
    }else{
        no();
    }
    


}
signed main()
{
    SPED
#ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
#endif
    seive();
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