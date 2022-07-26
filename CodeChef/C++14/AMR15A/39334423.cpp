#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    int countEven=0;
    int countOdd=0;
    while(t--){
        int n;
        cin >> n;
        
       
        if(n%2 == 0){
            countEven++;
        }
        else{
            countOdd++;
        }
    }
    if(countEven>countOdd){
        cout<<"READY FOR BATTLE"<<endl;
    }
    else{
        cout<<"NOT READY"<<endl;
    }
	return 0;
}
