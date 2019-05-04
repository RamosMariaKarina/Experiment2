#include <iostream>
#include <conio.h>

using namespace std;

int main ()
{
	int package, hour;
	bool errorPack, errorHour;
	
	cout << "------------------------------------------------------------------" << endl;
	cout << "		  Internet Bill Calculaltor         " << endl;
	cout << "------------------------------------------------------------------" << endl;
	cout << "Choose your subscription package:" << endl;
	cout << "Package 1: For P995/month, 10 hours of access is provided. Additional hours is at P20/hour." << endl;
	cout << "Package 2: For P1495/month, 20 hours of access is provided. Additional hours is at P10/hour." << endl;
	cout << "Package 3: For P1995/month, Unlimited access is provided. " << endl;
	cout << "------------------------------------------------------------------" << endl;
	cout << "Enter the number of your subscription package: "; cin >> package;
	cout << "Enter the number of hours used: "; cin >> hour;
	
	if (package<1 || package>3)
		errorPack =1;
		
	if (errorPack)
		cout << "Invalid Package Number" << endl;
		
	if (hour < 0)
		errorHour = 1;
	
	if (errorHour)
		cout << "Invalid number of hours" << endl;
	
	switch (package)
		{
			case 1:
				if (hour == 0 || hour <=10)
					cout << "You have to pay : P" << 995 << endl;
				else
					cout << "You have to pay : P" << 995 + (20*(hour -10)) << endl;
				break;
			case 2:
				if (hour == 0 || hour <=20)
					cout << "You have to pay : P" << 1495 << endl;
				else
					cout << "You have to pay : P" << 1495 + (10*(hour-20))  << endl;
				break;
			case 3:
				cout << "You have to pay : P1995" << endl;
				break;
		}
		
	_getch();
	return 0;
	
}
