#include <iostream>
#include <cmath>
//11

using namespace std;


class Kvadrat {

private:
	double *ab;
	double *st;
	double *pl;
	double *pe;

public:
	/*Kvadrat()
	{
		*ab = 4;
		st = new double(0);
		pl = new double(0);
		pe = new double(0);
	}
	*/
	Kvadrat(double diagonal, double st, double pl, double pe)
	{
		this->ab = new double(diagonal);
		this->st = new double(st);
		this->pl = new double(pl);
		this->pe = new double(pe);

	}


	//Kvadrat(double diagonal, double storona, double ploscha, double perimetr);
	//Kvadrat();
	void Formula();
	~Kvadrat() { delete st; delete pl; delete pe; };

	void Provirka();

};


void Kvadrat::Provirka()
{
	if (this->ab <= 0)
	{
		throw "Incorrect value";
	}
}

//Kvadrat::~Kvadrat() { delete st; delete pl; delete pe;}


void Kvadrat::Formula()
{
	*st = *ab / (sqrt(2));
	cout << "Довжина сторони =  " << *st << endl;
	printf("***\n");
	getchar();
	*pl = ((*ab)*(*ab)) / 2.;
	cout << "Площа =  " << *pl << endl;
	*pe = *st * 4;
	cout << "Периметр =  " << *pe << endl;
}


int main()
{
	setlocale(LC_CTYPE, "ukr");


	Kvadrat A(4.0, 0.0, 0.0, 0.0);


	A.Formula();
	getchar(); getchar();
}







