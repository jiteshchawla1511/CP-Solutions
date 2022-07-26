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
        ll count_odd = 0,count_even = 0;
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
            if(a[i]%2 != 0)
            {
                count_odd++;
            }
            else
            {
                count_even++;
            }
        }
        if(count_even>=count_odd)
        {
            cout<<count_odd<<endl;;
        }
        else
        {
            cout<<count_even<<endl;
        }
    }



    return 0;
}
