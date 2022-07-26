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
        string s="",str;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>str;
            s+=str;
        }
        int var=0;
	    int c=count(s.begin(),s.end(),'c');
	    int o=count(s.begin(),s.end(),'o');
	    int d=count(s.begin(),s.end(),'d');
	    int e=count(s.begin(),s.end(),'e');
	    int h=count(s.begin(),s.end(),'h');
	    int f=count(s.begin(),s.end(),'f');
	    while(c>=2&&e>=2&&o>=1&&d>=1&&h>=1&&f>=1){
	        var++;
	        c=c-2;
	        e=e-2;
	        o=o-1;
	        d=d-1;
	        h=h-1;
	        f=f-1;
	    }
	    cout<<var<<endl;
	    
	    
	}
	return 0;
}
