#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--)
    {
        long int n;
        int i=0;
        cin >> n;
        int arr[1000];
        while(n>0)
        {
            arr[i] = n%10;
            n /= 10;
            i++;
        }
        cout<<arr[0]+arr[i-1]<<endl;
        
        
    }
    
    
    
	return 0;
}
