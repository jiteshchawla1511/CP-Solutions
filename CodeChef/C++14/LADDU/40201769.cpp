#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	int lados = 0;
	while(t--)
	{
	    int n; cin>>n;
        string nationality; cin>> nationality;
        int ans=0;
        for(int i=0; i<n; i++){
            string s; cin>>s;
            if(s=="TOP_CONTRIBUTOR") ans+=300;
            if(s=="CONTEST_HOSTED") ans+=50;
            if(s=="BUG_FOUND") {
                int q; cin>>q;
                ans+=q;
            }
            if(s=="CONTEST_WON"){
                int q; cin>>q;
                ans+= 300+max(0,20-q);
            }
        }
        if(nationality=="INDIAN"){
            cout << ans/200 << endl;
        }
        else{
            cout << ans/400 << endl;
        }
	    
	}
	return 0;
}
