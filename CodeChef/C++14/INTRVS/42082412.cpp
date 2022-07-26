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
ll Ceil(ll n)
{
    if(n%2 == 0)
    {
        return n/2;
    }
    else
    {
        return (n/2) + 1;
    }
}
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
        ll n,k;
        cin >> n >> k;
        ll a[n];
        ll bot = 0;
        ll count = 0;
        ll wrong = 0;
        bool too_slow = false;
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
            if(a[i] == -1)
            {
                wrong++;
            }
            if(a[i] == 0 || a[i] == 1)
            {
                bot++;
            }
            if(a[i] > 1)
            {
                count++;
            }
            if(a[i] > k)
            {
                too_slow = true;
            }

        }
        ll x = n - wrong;
        ll y = Ceil(n);
        if(wrong  == 0 && bot == n)
        {
            cout<<"Bot"<<endl;
        }
        else if(x<y)
        {
            cout<<"Rejected"<<endl;
        }
        else if(too_slow)
        {
            cout<<"Too Slow"<<endl;
        }
        else if(x< y)
        {
            cout<<"Rejected"<<endl;
        }
        else
        {
            cout<<"Accepted"<<endl;
        }
    }

    return 0;
}
