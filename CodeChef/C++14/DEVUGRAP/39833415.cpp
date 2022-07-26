#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long long int t;
	cin>>t;
	while(t--){
	    long long int n,k;
	    cin>>n>>k;
	    long long int sum=0, rem,a;
	    for(int i=0; i<n; i++){
	        cin>>a;
	        rem=a%k;
	        if(a>=k)
	        sum+=min(rem, k-rem);
	        else
	        sum+=k-a;
	    }
	    cout<<sum<<endl;
	}
	return 0;
}
