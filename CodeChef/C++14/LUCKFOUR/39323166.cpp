#include <iostream>
using namespace std;
int countFour(int n)
{
    int count = 0;
    while(n != 0)
    {
        int dig = n%10;
        n /= 10;
        if(dig == 4)
        {
            count++;
        }
    }
    return count;
}

int main() {
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        cout<<countFour(n)<<endl;
    }
    
	return 0;
}
