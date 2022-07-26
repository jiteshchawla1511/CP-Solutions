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
int lcm(int a,int b){
    int g = __gcd(a,b);
    return (a * b)/g;
}
bool check(int a,int b){
    int A = __gcd(a,b);
    int B = a/A;
    int C = b/A;
    int ans = 1;
    if(A + B <= C){
        ans = 0;
    }
    if(B + C <= A){
        ans = 0;
    }
    if(A + C <= B){
        ans == 0;
    }
    return ans;
}
const int N = 1e6 + 1;
vector<int> prime(N,1);
vector<int> pref(N);
void precompute(){
    prime[0] = prime[1] = 0;
    for(int i = 2;i * i <= N;i ++){
        if(prime[i] == 1){
            for(int j = 2 * i;j < N;j += i){
                prime[j] = 0;
            }
        }
    }
    for(int i = 2;i < N;i ++){
        pref[i] = prime[i];
    }
    for(int i = 1;i < N;i ++){
 
        pref[i] += pref[i-1];
    }
}
 
void solve() {
    
    int n;
    cin >> n;
    int L = sqrt(n);
    debug(L)
    int R = n;
    int primenum = pref[R] - pref[L];
    cout << primenum + 1<< nline;
 
 
}
signed main()
{
    auto start = high_resolution_clock::now();
    FRENKIE21
#ifdef LeoMessi
    freopen("Error.txt", "w", stderr);
#endif
    precompute();
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