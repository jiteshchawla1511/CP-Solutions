#include <iostream>
#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int main() {
	// your code goes here
	ll int t;
	cin >> t;
	while(t--)
	{
	    ll int n,m;
	    cin >> n >> m;
	    priority_queue<ll int,std::vector<ll int>,greater<int>> john;
	    priority_queue<ll int> jack;
	    ll int sum_john = 0;
	    ll int sum_jack = 0;
	    bool flag = false;
	    for(ll int i=0;i<n;i++)
	    {
	        int x;
	        cin >> x;
	        sum_john +=x;
	        john.push(x);
	    }
	    for(ll int i=0;i<m;i++)
	    {
	        int y;
	        cin >> y;
	        sum_jack += y;
	        jack.push(y);
	    }
	    if(sum_john > sum_jack)
	    {
	        flag = true;
	        cout<<0<<endl;
	    }
	    else
	    {
	        for(int i=0;i<n;i++)
	        {
	            int Max_jack = jack.top();
	            int Max_john = john.top();
	            sum_john += (Max_jack - Max_john);
	            sum_jack += (Max_john - Max_jack);
	            john.pop();
	            jack.pop();
	            john.push(Max_jack);
	            jack.push(Max_john);
	            if(sum_john > sum_jack)
	            {
	                flag = true;
	                cout<<i+1<<endl;
	                break;
	            }
	            
	        }
	        if(!flag)
	        {
	            cout<<-1<<endl;
	        }
	    }
	    
	}
	
	return 0;
}
