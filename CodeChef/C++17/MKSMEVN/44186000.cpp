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
ll ceil(ll x){
	if(x%2 == 0){
		return x/2;
	}else{
		return (x/2) + 1;
	}
}
int main()
{
    ll t;
    cin >> t;
    while(t--){
    	ll n;
    	cin >> n;
    	ll a[n];
    	ll sum = 0;
    	for(int i=0;i<n;i++){
    		cin >> a[i];
    		sum += a[i];
    		
    	}
    	
    	if(sum%2 == 0){
    		cout<<0<<"\n";
    	}else{
    		bool flag =false;
    		for(int i=0;i<n;i++){
    			if((a[i]%2 == 0) && ((a[i] + 1)/2 - 1) <= 0){
    				flag = true;
    			}
    		}
    		if(flag){
    			cout<<1<<"\n";
    		}else{
    			cout<<-1<<"\n";
    		}

    		
    	}
    }
 	
 	#ifndef ONLINE_JUDGE
  cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
	#endif
    return 0;
}
