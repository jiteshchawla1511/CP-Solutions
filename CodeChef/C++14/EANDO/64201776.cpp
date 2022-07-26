// Nanak naam jahaz hai, charhe so utre paar,
// Jo sharda kar sevde,gur paar utaran haar
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
const lld pi = 3.14159265358979323846264338;
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
bool helper(int val1,vector<int> &odd,int val2,vector<int> &even){
    int movespos = 0,movesneg = 0;
    
    for(int i = 0;i < sz(odd);i ++){
        if(odd[i] > val1){
            movespos += odd[i] - val1;
        }else {
            movesneg += odd[i] - val1;
        }
    }
    for(int i = 0;i < sz(odd);i ++){
        if(even[i] > val2){
            movespos += even[i] - val2;
        }else {
            movesneg += even[i] - val2;
        }
    }
    return (abs(movesneg) == movespos);
}
void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    vector<int>odd,even;
    int sumodd = 0,sumeven = 0;
    set<int> st1,st2;
    for(int i = 0;i < n;i ++){
        cin >> v[i];
        if(v[i] % 2){
            odd.push_back(v[i]);
            st1.insert(v[i]);
            sumodd += v[i];
        }  else {
            st2.insert(v[i]);
            even.push_back(v[i]);
            sumeven += v[i];
        }
    }
    if((sz(st1) == 1 && sz(st2) != 1) || (sz(st1) != 1 && sz(st2) == 1)){
        no();
        return;
    }
    if(sz(st1) == sz(st2) && sz(st1) == 1){
        yes();
        return;
    }
    int z = 1000000000 - 1;
    int szz = sz(even);
    vector<int> valodd,valeven;
    int val1 = sumodd/szz;
    if(val1 % 2 == 1){
        valodd.push_back(val1);
    }else {
        valodd.push_back(max(val1 - 1,(int)1));
        valodd.push_back(min(val1 + 1,z));
    }
    bool f = 0;
    int val2 = sumeven/szz;
    if(val2 % 2 == 0){
        valeven.push_back(val2);
    }else {
        valeven.push_back(max(val2 - 1,(int)0));
        valeven.push_back(min(val2 + 1,z+1));
    }
    for(int i = 0;i < sz(valodd);i ++){
        for(int j = 0;j < sz(valeven);j ++){
            int x = valodd[i];
            int y = valeven[j];
            if(helper(x,odd,y,even)){
                f = 1;
            }
        }
    }
    // int val3 = 0,val4 = 0;
    // val3 = val4 = sumeven/szz;
    // if(sumeven % szz){
    //     val4 ++;
    // }
    // bool f = 0;
    // if(helper(val1,odd,val3,even)){
    //     f = 1;
    // }
    // if(helper(val1,odd,val4,even)){
    //     f = 1;
    // }
    // if(helper(val2,odd,val3,even)){
    //     f = 1;
    // }
    // if(helper(val2,odd,val4,even)){
    //     f = 1;
    // }
    // if(helper(val1,odd,val3,even)){
    //     f = 1;
    // }
    // if(helper(val2,odd,val3,even)){
    //     f = 1;
    // }
    // if(helper(val1,odd,val4,even)){
    //     f = 1;
    // }
    // if(helper(val2,odd,val4,even)){
    //     f = 1;
    // }
    poss(f);

    
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