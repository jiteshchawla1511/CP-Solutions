#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	ll int t;
	cin >> t;
	while(t--)
	{
		ll int n,k,d;
		cin >> n >> k >> d;
		ll int a[n];
		ll int sum = 0;
		for(ll int i=0;i<n;i++)
		{
			cin >> a[i];
			sum += a[i];
		}
		if(sum >= k)
		{
			ll int x = sum/k;
			if(x>d)
			{
				cout<<d<<endl;
			}
			else
			{
				cout<<x<<endl;
			}
		}
		else if(sum < k)
		{
			cout<<0<<endl;
		}
	}

	return 0;
}
