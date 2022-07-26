#include<iostream>
#include<map>
#include<algorithm>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string st;
		cin>>st;
		map<char,int> map1;
		int len=st.length();
		for(int i=0;i<len;i++)
		{
			map1[st[i]]++;
		}
		int flag=0;
		map<char,int>::iterator it;
		for(it=map1.begin();it!=map1.end();it++)
		{
			int num=it->second;
			if((num)==(len-num))
			{
				flag=1;
				break;
			}
		}
		
		if(flag==1)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}
}
