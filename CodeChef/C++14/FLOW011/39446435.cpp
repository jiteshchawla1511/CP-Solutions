#include <iostream>
#include <iomanip>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	cout<<fixed<<setprecision(2);
	while(t--)
	{
	    double baseSalary;
	    double grossSalary;
	    double HRA,DA;
	    cin >> baseSalary;
	    if(baseSalary<1500)
	    {
	        HRA = baseSalary/10;
	        DA = baseSalary - 0.1*baseSalary;
	        grossSalary = baseSalary+HRA+DA;
	        cout<<grossSalary<<endl;
	    }
	    if(baseSalary >= 1500)
	    {
	        HRA=500;
	        DA = baseSalary - 0.02*baseSalary;
	        grossSalary = HRA+DA+baseSalary;
	        cout<<grossSalary<<endl;
	    }
	    
	}
	return 0;
}
