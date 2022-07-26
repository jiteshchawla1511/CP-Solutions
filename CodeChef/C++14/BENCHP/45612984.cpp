#include <bits/stdc++.h>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstring>
#include <chrono>
#include <complex>
#define ll              long long int
#define vi              vector<int>
#define vll             vector<ll>
#define vvi             vector < vi >
#define pb              push_back
#define all(x)          (x).begin(),(x).end()
#define pii             pair<int,int>
#define vpl             vector<pair<ll,ll>>
#define pll             pair<long long, long long>
#define mod             1000000007
#define inf             1000000000000000001;
#define mp(x,y)         make_pair(x,y)
#define mem(a,val)      memset(a,val,sizeof(a))
#define eb              emplace_back
#define ff              first
#define ss              second
#define poss(flag)      cout << (flag ? "YES\n" : "NO\n")
#define rep(i,j,k)      for(ll i=j;i<=k;i++)
#define repr(i,j,k)     for(ll i=j;i>=k;i--)
#define ii              insert
using namespace std;


void yes(){
    cout<<"YES"<<"\n";
}
void no(){
    cout<<"NO"<<"\n";
} 

int main()
{

    int t;
    cin >> t;
    while(t--){
        long int n,w,wr;
        cin >> n >> w >> wr;
        map<long int,long int>mp;
        long int a[n];
        rep(i,0,n-1){
            cin >> a[i];
            mp[a[i]]++;
        }
        if(wr >= w){
            yes();
        }else{
            
            long int sum = 0;
            long int cnt(0);
            for(auto it:mp){
                if(it.ss %2 == 0){
                    cnt++;
                    sum += (it.ss*it.ff);
                }
            }
            if(cnt == 0){
                no();
            }else{
                if(sum + wr >= w){
                    yes();
                }else{
                    no();
                }
            }
            
        }
    }
    


    #ifndef ONLINE_JUDGE
  cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
    #endif
    return 0;

    
}
