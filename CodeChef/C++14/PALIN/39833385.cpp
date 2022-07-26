#include <iostream>
#include <bits/stdc++.h>
#define lli long long int
using namespace std;
string getNextPalindrome(string k)
{
    lli n = k.length();
    string x = k;
    
    for (lli i = n/2; i < n; i++) {
        k[i] = k[n-i-1];
    }
    if(k>x){
        return k;
    }
    else
    {
        for (lli i = (n-1)/2; i>=0 ; i--) {
            if(x[i] != '9')
            {
                x[i]++;
                break;
                
            }
            else
            {
                x[i] ='0';
            }
        }
        for (lli i = n/2; i < n; i++) {
            x[i] = x[n-i-1];
        }
        if(x[0] == '0')
        {
            x += '1';
            x[0] = '1';
            
        }
        return x;
        
    }

}

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    string y;
	    cin >> y;
	    cout<<getNextPalindrome(y)<<endl;
	}
	return 0;
}
