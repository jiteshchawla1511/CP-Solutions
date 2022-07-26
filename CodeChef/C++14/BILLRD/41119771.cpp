#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	ll int t;
	cin >> t;
	while(t--)
	{
		ll int n,k,x,y;
		cin >> n >> k >> x >> y;
		if(x==y)
		{
			cout<<n<<" "<<n<<endl;
		}
		else if(x>y)
		{
			if((k-1)%4 == 0)
			{
				cout<<n<<" "<<y+n-x<<endl;
			}
			else if((k-1)%4 == 1)
			{
				cout<<y+n-x<<" "<<n<<endl;
			}
			else if((k-1)%4 == 2)
			{
				cout<<0<<" "<<x-y<<endl;
			}
			else if((k-1)%4 == 3)
			{
				cout<<x-y<<" "<<0<<endl;
			}
		}
		else
		{
			if((k-1)%4 == 0)
			{
				cout<<n+x-y<<" "<<n<<endl;
			}
			else if((k-1)%4 == 1)
			{
				cout<<n<<" "<<n+x-y<<endl;
			}
			else if((k-1)%4 == 2)
			{
				cout<<y-x<<" "<<0<<endl;
			}
			else if((k-1)%4 == 3)
			{
				cout<<0<<" "<<y-x<<endl;
			}
		}
	}
	

	return 0;
}
