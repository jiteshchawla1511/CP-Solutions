#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,c=0;
		cin>>n;
		string a;
		cin>>a;
		char v = a[n-1];
		for(int i=0;i<n-1;i++)
		{
		          
			if(a[i]==v)
			{
			        //  cout<<a[i]<<"=="<<v<<endl;
				c++;
			}
		}
		if(c>0)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}