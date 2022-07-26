#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    int n,k;
	    cin >> n >> k;
	    vector <string> forgotten;
	    set <string> known;
	    bool state[n] = {false};
	    
	    for(int i = 0;i<n;i++)
	    {
	        string x;
	        cin >> x;
	        forgotten.push_back(x);
	    }
	    while(k--)
	    {
	        int l;
	        cin >> l;
	        while(l--)
	        {
	            string y;
	            cin >> y;
	            known.insert(y);
	        }
	    }
	    for(int i=0;i<forgotten.size();i++)
	    {
	        for (auto it =known.begin();it != known.end();++it) {
	            /* code */
	            if(forgotten[i] == *it)
	            {
	                state[i] = true;
	            }
	        }
	    }
	    
	    for(int i=0;i<n;i++)
	    {
	        if(state[i]){
	            cout<<"YES"<<endl;
	        }
	        else
	        {
	            cout<<"NO"<<endl;
	        }
	            
	        
	    }
	    cout<<endl;
	}
	return 0;
}
