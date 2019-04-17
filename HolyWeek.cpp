#include <iostream>
#include <conio.h>
#include <string>
#include <iomanip>

using namespace std;

int main ()
{
	
	int monthNumber, day, year; 
	bool errorDate;
	string month[]={"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
		
	cout << "Enter the month (use number 1-12): "; cin >> monthNumber;
	if (monthNumber<1 && monthNumber>12)
	    errorDate = 1;
		
	switch (monthNumber)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			cout << "Enter day (use numbers 1-31): "; cin >> day;
			if (day<1 || day>31)
			    {
			        errorDate = 1;
			        break;
			    }
			else 
				break;
				
					
		case 2:
		    cout << "Enter day (use numbers 1-28): "; cin >> day;
			if (day<1 || day>28)
			    {
			        errorDate = 1;
			        break;
			    }
			else break;
			
	
		case 4:
		case 6:
		case 9:
		case 11:
			cout << "Enter day (use numbers 1-30): "; cin >> day; 
			if (day<1 || day>30)
			    {
			        errorDate = 1;
			        break;
			    }
			else break; 
			
		default: 
			cout << "Enter day (use numbers 1-30): "; cin >> day;
		    errorDate = 1;
		    break;
	}

	cout << "Enter a valid year: "; cin >> year;
    
	if (year < 1)
		errorDate = 1;

	if (errorDate)
		cout << "Invalid Date" << endl;
	else
		cout << month[monthNumber-1] << " " << day << ", " << year << endl;
	
	_getch();
	return 0;
}
