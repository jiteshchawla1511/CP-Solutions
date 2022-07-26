#include <iostream>
#include<math.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--)
    {
        int a,o,k;
        cin >> a >>o>>k;
        while(k--)
        {
            if(a>o){
                o++;
            }
            else if(o>a){
                a++;
            }
            else{
                break;
            }
            
        }
        int ans = abs(a-o);
        cout<<ans<<endl;
        
    }
    
	return 0;
}
