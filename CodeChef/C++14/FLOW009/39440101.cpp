#include <iostream>
#include <iomanip>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	cout << fixed << setprecision(6);
	while(t--)
	{
	    double quantity,price;
	    cin >> quantity>>price;
	    double totalPrice = quantity*price;
	    if(quantity>1000)
	    {
	        totalPrice = totalPrice - totalPrice/10;
	        cout<<totalPrice<<endl;
	        
	    }
	    else
	    {
	        cout<<totalPrice<<endl;
	    }
	}
	return 0;
}
