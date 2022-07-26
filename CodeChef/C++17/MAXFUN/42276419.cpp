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
    std::ios::sync_with_stdio(false);
#ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
#endif

    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        ll a[n];
        for(int i=0;i<n;i++) cin >> a[i];
        sort(a,a+n);
        ll a1 = abs(a[0] - a[1]) + abs(a[1] - a[n-1]) + abs(a[n-1] - a[0]);
        ll b = abs(a[0] - a[n-2]) + abs(a[n-2] - a[n-1]) + abs(a[n-1] - a[0]);
        cout<<max(a1,b)<<endl;
    }


    return 0;
}
