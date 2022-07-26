#include <bits/stdc++.h>
#define ll long long
using namespace std;
int BinaryToDecimal(ll int n) {
   int decimalNumber = 0;
   int base = 1;
   int temp = n;
   while (temp) {
      int lastDigit = temp % 10;
      temp = temp/10;
      decimalNumber += lastDigit*base;
      base = base*2;
   }
   return decimalNumber;
}
int main(){
	ll int t;
	cin >> t;
	while(t--)
	{
		ll int n;
		cin >> n;
		string s;
		cin >> s;
		char a[16] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p'};
		string ans = "";
		
		for(ll int i=0;i<(n-3);i+=4)
		{
			string r = s.substr(i,4);
			ll int x = stoi(r);
			ll int index = BinaryToDecimal(x);
			ans += a[index];	
			
		}
		cout<<ans<<endl;
		
	}

	return 0;
}
