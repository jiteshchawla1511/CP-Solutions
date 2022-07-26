#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	
    
    int t;
    cin>>t;
	while(t--)
	{
	   int n,v1,v2;
	   cin>>n>>v1>>v2;
	    float t1,t2;
	    t1=(float)n/v1;
	    t2=(float)(n*sqrt(2))/v2;
	    if(t1>t2)
	    cout<<"Elevator";
	    else
	    cout<<"Stairs";
	    cout<<endl;
	    
	}
	return 0;
}
