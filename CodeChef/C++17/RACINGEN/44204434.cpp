#include <bits/stdc++.h>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstring>
#include <chrono>
#include <complex>
#define ll long long int
#define vi vector<int>
#define vll vector<ll>
#define vvi vector < vi >
#define pb push_back
#define pii pair<int,int>
#define vpl vector<pair<ll,ll>>
#define pll pair<long long, long long>
#define mod 1000000007
#define inf 1000000000000000001;
#define mp(x,y) make_pair(x,y)
#define mem(a,val) memset(a,val,sizeof(a))
#define eb emplace_back
#define ff first
#define ss second
 
using namespace std;
int main()
{
	ll t;
	cin >> t;
	while(t--){
		ll x,r,m;
    	cin >> x >> r >> m;
    	if(x < 60*r){
    		if(x + 2*(60*r - x) <= 60*m){
    			cout<<"YES"<<"\n"; 
    		}else{
    			cout<<"NO"<<"\n";
    		}
    	}
    	else{
    		if(r <= m){
    			cout<<"YES"<<"\n";
    		}else{
    			cout<<"NO"<<"\n";
    		}
    }
	}
 	
 	#ifndef ONLINE_JUDGE
  cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
	#endif
    return 0;
}
