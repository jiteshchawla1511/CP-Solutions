#include <iostream>
#include<bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin >> t;
    
    while(t--)
    {
        int n;
        cin >> n;
        vector<int>v(n) ;
        for(int j=0;j<n;j++)
        {
            cin >> v[j];
        }
        sort(v.begin(),v.end());
        int sum = v[0]+v[1];
        cout<<sum<<endl;
        
        
        
        
    }
	return 0;
}
