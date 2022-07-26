#include <iostream>
#include<string>
#include <bits/stdc++.h>
using namespace std;


int main() {
	// your code goes here
	int n,k;
	cin >> n >> k;
	int arr[n] ={0};
	
	
	while(k--)
	{
	    string s;
	    cin >> s;
	    if(s.compare("CLOSEALL")==0)
	    {
	        for(int i=0;i<n;i++)
	            arr[i]=0;
	    }
	    else
	    {
	        int x;
	        cin >> x;
	        x--;
	        if(arr[x]==1)
	            arr[x]=0;
	        else
	            arr[x]=1;
	    }
	    
	    int sum=0;
	    for(int i=0;i<n;i++)
	        if(arr[i]==1)
	            sum++;
	    cout<<sum<<endl;
	}
	
	return 0;
}
