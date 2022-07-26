#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    for(int i = 0; i<t;i++)
    {
        char geh;
        cin >> geh;
        if(geh == 'B' || geh == 'b')
        {
            cout<<"BattleShip"<<endl;
        }
        
        if(geh == 'C' || geh == 'c'){
            cout<<"Cruiser"<<endl;
        }
        
        if(geh == 'D' || geh == 'd'){
            cout<<"Destroyer"<<endl;
        }
        if(geh == 'F' || geh == 'f'){
            cout<<"Frigate"<<endl;
        }
    }
	return 0;
}
