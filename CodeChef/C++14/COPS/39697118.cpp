#include<bits//stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int k,m,n;
		cin>>k>>m>>n;
		int a[k];
		int houses[101];
		int ans=0;
		for(int i=1;i<=100;i++) houses[i]=1;
		for(int i=0;i<k;i++){
			cin>>a[i];
			int t=a[i];
			int Min,Max;
			Max=min(100,t+m*n);
			Min=max(1,t-m*n);
			for(int i=Min;i<=Max;i++) houses[i]=0;
			
		}
		for(int i=1;i<=100;i++) ans+=houses[i];
		cout<<ans<<endl;
	}
}


