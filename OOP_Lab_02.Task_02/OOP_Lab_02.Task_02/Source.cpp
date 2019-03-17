#include <iostream>

//3
using namespace std;

class Calendar {

private:
	int *day;
	int *month;
	int *year;


public:

	Calendar(int date_day, int date_month, int date_year)
	{
		this->day = new int(date_day);
		this->month = new int(date_month);
		this->year = new int(date_year);


	}

	Calendar();
	//Calendar(int date_day, int date_month, int date_year);

	~Calendar() { delete day; delete month; delete year; };
	void setDay(int date_day);
	void setMonth(int date_month);
	void setYear(int date_year);
	void Vivod();



};


Calendar::Calendar()

{

	day = 0;
	month = 0;
	year = 0;

}



void Calendar::setDay(int date_day)

{


	cout << "ÂÂåä³òü äåíü" << endl;
	if (date_day > 0)
		cin >> date_day;


}

void Calendar::setMonth(int date_month)
{
	cout << "ÂÂåä³òü ì³ñÿöü" << endl;
	if (date_month > 0)
		cin >> date_month;
}


void Calendar::setYear(int date_year)
{
	cout << "ÂÂåä³òü ğ³ê" << endl;
	if (date_year > 0)
		cin >> date_year;
}

void Calendar::Vivod()
{

	cout << *day << "." << *month << "." << *year << endl;
	getchar();

}







int main()
{
	setlocale(LC_CTYPE, "ukr");
	Calendar a1;

	a1.setDay(1);
	a1.setMonth(2);
	a1.setYear(3);

	a1.Vivod();

	getchar();
}


