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
    	string s;
    	cin >> s;
    	ll n = s.length();
    	ll count  = 0;
    	if(s[0] == '1')
    	{
    		count++;
    	}
    	for(int i=1;i<n;i++)
    	{
    		if(s[i] == '1' && s[i-1] != s[i])
    		{
    			count++;
    		}
    	}
    	cout<<count<<"\n";
    }

 
 
    return 0;
}
