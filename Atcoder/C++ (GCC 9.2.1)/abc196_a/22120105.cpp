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

int pow(int x, unsigned int y, int p){
    int res=1;
    x=x%p;
    if (x==0) return 0;
    while (y > 0)
    {
        if (y & 1)
            res = (res*x) % p;
        y = y>>1;
        x = (x*x) % p;
    }
    return res;
}
int _pow(int a, int b){
    if(!b)
        return 1;
    int temp = _pow(a, b / 2);
    temp = (temp * temp);
    if(b % 2)
        return (a * temp);
    return temp;
}

int invmod(int a,int m){
    return pow(a,m-2,m);
}
int cl(int a,int x){
    if(a%x==0)
        return a/x;
    else
        return a/x+1;
}

void yes(){
    cout<<"YES"<<"\n";
}
void no(){
    cout<<"NO"<<"\n";
} 
set<ll>s;

void SieveOfEratosthenes(int n)
{
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));
 
    for (int p = 2; p * p <= n; p++)
    {
        
        if (prime[p] == true)
        {
            
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
 
    
    for (int p = 2; p <= n; p++){
        if (prime[p]){
            s.ii(p);
        }
    }
        
}


int main()
{
    int a,b,c,d;
    cin >> a>> b >>c >> d;
    int x = max(a,b);
    int y = min(c,d);
    cout<<x-y;
    
    

    #ifndef ONLINE_JUDGE
  cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
    #endif
    return 0;
    
}
