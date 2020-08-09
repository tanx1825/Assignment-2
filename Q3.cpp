#include<iostream>
#include<stdio.h>
using namespace std;

class Date 
{
	private:
	int day;
	int month;
	int year;
	public:
	Date(int dd, int mm, int yy) 
	{
		day = dd;
		year = yy;
		if (mm >= 1 && mm <= 12)
		{
			month = mm;
		} 
		else 
		{
			month = 1;
		}
	}

	void displayDate()
	{
		cout << day << "/" << month << "/" << year << "\n";
	}
};
int main()
{

	cout << "Enter the Date \n";
	int dd, mm, yy;
	cin >> dd >> mm >> yy;
	Date Day(dd, mm, yy);
	cout << "Day is ";
	Day.displayDate();
	cout << " Enter the date to demonstrate class Date's capabilities\n";
	cin >> dd >> mm >> yy;
	Date worng(dd, mm, yy);
	worng.displayDate();
	return 0;
}
