// testing.cpp : main project file.

// opov1.cpp : main project file.

#include "stdafx.h"
#include<iostream>
#include<conio.h>

using namespace std;
/*
class loc
{
	int latitude, longitude;
public:
	loc(){}
	loc(int la, int lo)
	{
		latitude = la;
		longitude = lo;
	}
	loc(const loc &ref)
	{
		cout<<"Inside copy cons, ref.latitude = "<<ref.latitude<<", ref.longitude = "<<ref.longitude<<"\n";
		latitude = ref.latitude;
		longitude = ref.longitude;
	}
	void show()
	{
		cout<<"Latitude = "<<latitude<<endl;
		cout<<"Longitude = "<<longitude<<endl<<endl;
	}
	loc operator+(loc op2);
	loc operator-(loc op2);
	loc operator++();
	loc operator=(loc op2);
	loc operator+=(loc op2);
	
	~loc(){cout<<"Inside destructor, latitude = "<<latitude<<", longitude = "<<longitude<<"\n";}
};

loc loc::operator+(loc op2)
{
	loc temp;
	temp.latitude = latitude + op2.latitude;
	temp.longitude = longitude + op2.longitude;
	return temp;
}
loc loc::operator-(loc op2)
{
	loc temp;
	temp.latitude = latitude - op2.latitude;
	temp.longitude = longitude - op2.longitude;
	return temp;
}
loc loc::operator++()
{
	latitude++;
	longitude++;
	return *this;
}
loc loc::operator=(loc op2)
{
	cout<<"Inside def. =\n";
	latitude = op2.latitude;
	longitude = op2.longitude;
	return *this;
}
loc loc::operator+=(loc op2)
{
	cout<<"+=\n";
	cout<<"___latitude = "<<latitude<<", longitude = "<<longitude<<endl;
	latitude = latitude + op2.latitude;
	longitude = longitude + op2.longitude;
	cout<<"___latitude = "<<latitude<<", longitude = "<<longitude<<endl;
	return *this;	//Here, 1st, the compiler creates a temp. of return value, 2nd, then it deallocates the function from stack, 3rd, then
}					// it returns that temp.

void main()
{
	loc op1(10, 20), op2(50, 20), op3(35, 60);
	op1.show();
	op2.show();
	op3.show();
	
	op1 += op2;

	op1.show();
	op2.show();
	op3.show();

	_getch();
	return;
}*/

//_________________________________________________________

/*
class CLASS
{
public:
	CLASS(){cout<<"DEF CONS\n";}
	CLASS(const CLASS &ref){cout<<"CC called\n";}
	~CLASS(){cout<<"DES called\n";}
	CLASS operator+(const CLASS &ref)const
	{
		CLASS temp;
		return temp;
	}
};

void doit(CLASS c)
{
	cout<<"Inside doit's body\n";
}

int main()
{

	CLASS c1;

	doit(c1 + c1);
	_getch();
	return 0;
}
*/
//_______________________________________________________________________