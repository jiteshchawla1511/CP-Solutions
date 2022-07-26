/*By jitu_falcon15*/
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
    while(t--)
    {
    	ll n;
    	cin >> n;
    	ll a[n+1];
    	for(int i=0;i<n;i++) cin >> a[i];
    	sort(a,a+n);
    	ll counter = 0;
    	ll k =n;
    	bool flag = true;
    	for(int i=n-1;i>=0;i--)
    	{
    		if(k >= a[i])
    		{
    			counter += (k - a[i]);
    			k--;
    		}
    		else
    		{
    			
    			flag = false;
    			break;
    		}
    	}
    	if(flag)
    	{
    		if(counter%2 == 0)
    		{
    			cout<<"Second"<<"\n";
    		}
    		else
    		{
    			cout<<"First"<<"\n";
    		}

    	}
    	else
    	{
    		cout<<"Second"<<"\n";
    	}
    	
    }

 
 
    return 0;
}
