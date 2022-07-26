#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    string s;
	    cin >> s;
	    int flag = 1;
	    std::vector<int> v(26,0);
	    for(int i=0;i<s.length();i++)
	    {
	        v[s[i] - 'a']++;
	    }
	    for(int i=0;i<26;i++)
	    {
	        if(v[i]%2 !=0)
	        {
	            flag = 0;
	            break;
	        }
	    }
	    if(flag == 1)
	    {
	        cout<<"YES"<<endl;
	    }
	    else if(flag == 0)
	    {
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
