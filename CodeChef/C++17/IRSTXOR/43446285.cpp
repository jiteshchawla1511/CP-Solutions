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
    	ll one = 0,size = 0;
    	ll x =n;
    	while(x > 0)
    	{
    		if(x%2==1)
    		{
    			one++;
    		}
    		x /= 2;
    		size++;
    	}
    	ll a[size],b[size];
    	ll v = size;

    	ll n1 = n;
    	ll i = 0;
    	x = n;
    	while(x > 0)
    	{
    		if(x%2 == 0)
    		{
    			a[i] = 1,b[i] = 1;
    		}
    		else
    		{
    			if(one == 1)
    			{
    				a[i] = 1,b[i] = 0;
    			}
    			else
    			{
    				a[i] = 0,b[i] = 1;
    			}
    			one--;
    		}
    		i++;
    		x = x/2;
    	}
    	ll aa=0,bb=0;
    	ll p = 1;
    	for(ll j=0;j<v;j++)
    	{
    		aa += p*a[j];
    		bb += p*b[j];

    		p *= 2;
    	}
    	cout<<aa*bb*(1LL)<<"\n";
    	
    	

    }
 
 
    return 0;
}
