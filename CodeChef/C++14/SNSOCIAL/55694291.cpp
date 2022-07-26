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

int dx[] = {-1,1,0,0,1,1,-1,-1};
int dy[] = {0,0,-1,1,1,-1,-1,1};
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
const int N = 1e3 + 10;
int n,m;
vector<vector<int>> v(N,vector<int>(N));
vector<vector<int>> vis(N,vector<int>(N));
vector<vector<int>> lvl(N,vector<int>(N));
bool isPossible(int x,int y){
    return (x > -1 && x < n && y > -1 && y < m && vis[x][y] == 0);
}
int bfs(){
    int val = 0;
    for(int i =0 ;i < n;i ++){
        for(int j = 0;j < m;j ++){
            val = max(val,v[i][j]);
        }
    }
    debug(val)
    queue<pair<int,int>>q;
    for(int i =0 ;i < n;i ++){
        for(int j = 0;j < m;j ++){
            if(v[i][j] == val){
                debug(i)
                debug(j)
                q.push({i,j});
                lvl[i][j] = 0;
                vis[i][j] = 1;
           }
        }
    }
    int ans = 0;
    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        for(int i = 0;i < 8;i ++){
            int curx = x + dx[i];
            int cury = y + dy[i];
            if(isPossible(curx,cury)){
                q.push({curx,cury});
                lvl[curx][cury] = lvl[x][y] + 1;
                vis[curx][cury] = 1;
                ans = max(ans,lvl[curx][cury]);
            }
        }
    }
    return ans;
}

void solve() {
    cin >> n >> m;
    for(int i =0 ;i < N;i ++){
        for(int j = 0;j < N;j ++){
            // v[i][j] = 0;
            vis[i][j] = 0;
            lvl[i][j] = inf;
        }
    }
    for(int i =0 ;i < n;i ++){
        for(int j = 0;j < m;j ++){
            cin >> v[i][j];
        }
    }
    int val = bfs();
    cout<<val<<nline;


    
}
signed main()
{
    SPED
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