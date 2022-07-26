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
bool cmp(pair<ll,ll>a,pair<ll,ll>b){
	return a.ff > b.ff;
}
int main()
{
    ll t;
    cin >> t;
    while(t--){
    	ll n,x;
    	cin >> n >> x;
    	ll rating = 0,ans =x;
    	if(n == 1){
    		ll s,r;
    		cin >> s >> r;
    		if(s <= x){
    			cout<<r<<"\n";
    		}
    	}
    	else{
    		
    		for(int i=0;i<n;i++){
    			ll s,r;
    			cin >> s >> r;
    			if(x >= s){
    				if(r > rating){
    					rating = r;
    				}
    			}
    			
    		}
    		cout<<rating<<"\n";
    		
    		
    	}

    }
 		
 	#ifndef ONLINE_JUDGE
  cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
	#endif
    return 0;
    
}
