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

bool pd(string s){
    int n = s.length();
    for(int i=0;i<=n/2;i++){
        if(s[i] != s[n-i-1]){
            return false;
        }
    }
    return true;
}
int main()
{
    
    string s;
    cin >> s;
    int n = s.length();
    if(pd(s)){
        cout<<"Yes"<<"\n";
    }else{
        int cnt(0);
        for(int i=n-1;i>=0;i++){
            if(s[i] == '0'){
                cnt++;
            }else{
                break;
            }
        }
        for(int i=0;i<n;i++){
            string t;
            for(int j=0;j<i;j++){
                t.pb('0');
            }
            t += s;
            if(pd(t)){
                cout<<"Yes"<<"\n";
                return 0;
            }

        }

        
        cout<<"No"<<"\n";
    }


    return 0;
}
