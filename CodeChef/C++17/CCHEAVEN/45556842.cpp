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
    
    int t = 1;
    cin >> t;
    while(t--){
        double l;
        cin >> l;
        string s;
        cin >> s;
        double one =0;
        bool flag =  true;
        rep(i,0,l-1){
            if(s[i] == '1'){
                one++;
            }
            if(one > 0){
                double x = (one)/(double)(i+1);
                //cout<<x*100<<"\n";
                if(x*100 >= 50){
                    yes();
                    flag =  false;
                    break;
                }
            }    
            
        
        }   
        if(flag){
            no();
        }
    }


    #ifndef ONLINE_JUDGE
  cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
    #endif
    return 0;

    
}
