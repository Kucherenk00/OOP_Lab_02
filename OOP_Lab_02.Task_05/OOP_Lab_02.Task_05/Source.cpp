#include <iostream>
#include <cmath>
//9

using namespace std;
const double pi = 3.14159265;

class Circle
{
private:
	int *r;
	int *a;
	int *b;
	int *c;

public:
	Circle(int radius, int x, int y, int z)
	{
		this->r = new int(radius);
		this->a = new int(x);
		this->b = new int(y);
		this->c = new int(z);
	}


	Circle();
	Circle(int *radius, int *x, int *y, int *z);
	double Ploscha(int radius);
	double Dovzhina(int radius);


};


Circle::Circle(int *radius, int *x, int *y, int *z)
{


	*radius = 5;
	if (*radius <= 0)
	{
		cout << "Incorrect value" << endl;
	}


}


double Circle::Ploscha(int radius)
{
	return pi * radius * radius;

}

double Circle::Dovzhina(int radius)
{
	return pi * 2 * radius;

}



int main()
{

	setlocale(LC_CTYPE, "ukr");
	Circle C(5, 0, 0, 0);
	C.Ploscha(5);
	C.Dovzhina(5);

	//cout << "���������� ������ : �=" << x <<" Y="  << y << " Z = "  << z <<   endl;
	cout << " ����� =  " << C.Ploscha(5) << endl;
	cout << " ������� =  " << C.Dovzhina(5) << endl;


	getchar();
	return 0;

}