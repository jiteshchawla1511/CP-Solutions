// Nanak naam jahaz hai, charhe so utre paar,
// Jo sharda kar sevde,gur paar utaran haar
#include <bits/stdc++.h>
// #include<ext/pb_ds/assoc_container.hpp>
// #include<ext/pb_ds/tree_policy.hpp> 
//Declaration : oset<data_type> name; Fxn : insert, erase, upper_bound, lower_bound, find
// A.order_of_key(x) : finds the number of elements smaller than x
// *A.find_by_order(k) : finds the kth element
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
// using namespace __gnu_pbds;
// typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds; // find_by_order, order_of_key
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
int helper(vector<int> &a,vector<pair<int,int>> &vp){
    int n = sz(a);
    int m = sz(vp);
    vector<pair<int,int>> temp;
    set<int> st;
    for(int i = 0;i < m;i ++){
        if(st.find(vp[i].first) != st.end() || st.find(vp[i].second) != st.end()){
 
        }else {
            temp.push_back(vp[i]);
            st.insert(vp[i].first);
            st.insert(vp[i].second);
        }
    }
    vector<int> values;
    int sm = 0;
    for(int i = 0;i < sz(temp);i ++){
        values.push_back(a[temp[i].first] + a[temp[i].second]);
        sm += values.back();
    }
    sort(all(values));
    if(sz(values) % 2 == 1){
        sm -= values[0];    
    }
    return sm;
}
const int N = 1e5 + 1;
vector<int>cycles[N];
vector<int> a(N);
void solve() {
    int n,m;
    cin >> n >> m;
    int total = 0;
    for(int i = 1;i <= n;i ++){
        cin >> a[i];
        total += a[i];
    }
    vector<pair<int,int>> vp;
    int minsum = inf;
    vector<int> degree(n + 1);
    for(int i = 0;i < m;i ++){
        int x,y;
        cin >>x >> y;
        minsum = min(minsum,a[x] + a[y]);
        vp.push_back({x,y});
        degree[x] ++,degree[y] ++; 
    }
    int ans  = inf;
 
    if(m % 2 == 1){
        for(int i = 1;i <= n;i ++){
            if(degree[i] % 2){
                ans = min(ans,a[i]);
            }
        }
        
    }else {
        ans  =0;
    }
    cout << min(ans,minsum) << nline;
   
    
 
    
 
    
    
    
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