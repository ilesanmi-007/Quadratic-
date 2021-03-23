#include <iostream>
#include <cmath>
#include "quadratic.h"
using namespace std;

Quadratic::Quadratic()
{
	a = 0;
	b = 0;
	c = 0;
}

Quadratic::Quadratic(float var1, float var2, float var3)
{
	a = var1;
	b = var2;
	c = var3;
	//all coefficient set to the users data;
	//CalcDeterminant();
	WriteRoots();
}
void Quadratic::SetCoefficient()
{
	cout<<"enter the variables for your quadratic equation"<<endl;
	cout<< "the quadratic is in this format: ax2 + bx + c"<<endl;
	cout<<endl;
	cout<< "enter first coefficient, FirstOrderCoeff: ";
	cin>>a;
	cin.ignore();
	cout<< "enter first coefficient, SecondOrderCoeff: ";
	cin>>b;
	cout<< "enter first coefficient, ConstantCoeff: ";
	cin>>c;

}

void Quadratic::GetCoefficient()
{
	cout<<"the values you entered are: "<<endl<<endl;
	cout<<"first order coefficient : "<<a<<endl;
	cout<<"second order coefficient : "<<b<<endl;
	cout<< "constant value: "<<c<<endl;

}

char Quadratic::CalcDeterminant(){
	float d = b*b - 4*a*c;
	determinant = b*b - 4*a*c;
	if (d > 0)
	{
		cout<<"it is real"<<endl;
		//determinant = d;
		return 'r';	
	}
	if (d == 0)
	{
		cout<<"it is repeated"<<endl;
		//determinant = d;
		return 's';
	}
	if (d < 0)
	{
		cout<< "it is imaginary"<<endl;
		//determinant = 'i';
		return 'i'; 
		//return determinant;
	}
}

	void Quadratic::WriteRoots()
	{
		char receival;
		receival = CalcDeterminant(); //called the private determinant function

		//if (receival == 'i')
		//{
		//	cout<< "the result of your quadratic equation are as follows: "<<endl<<endl;
		//	cout<<"real value: " << -b/(2*a)<<endl;

		//	cout<<"the second value is: "<< sqrt(-determinant)/(2*a);

		//}
		float res = sqrt(determinant)/(2*a);
		float imag = sqrt(-determinant)/(2*a);
		switch (receival)
		{
		case 'i':
			
			cout<< "the result of your quadratic equation are as follows: "<<endl<<endl;
			cout<<"real value: " << -b/(2*a) <<"+"<<imag<<"i"<<endl;

			cout<<"the imaginary value is: "<<-b/(2*a)<<"-"<< imag<<"i"<<endl;
			cout<<endl;
			break;
		case 'r':
			cout<< "the result of your quadratic equation are as follows: "<<endl<<endl;
			
			cout<<" value 1: " << -b/(2*a) + res<<endl;
			
			cout<< "value 2: "<<-b/(2*a) - res;
			cout<<endl<<endl;
			break;

		case 's':
			cout<< "the result of your quadratic equation are as follows: "<<endl<<endl;
			cout<<"the roots are same, hence: " << -b/(2*a)<<endl;

		default:
			cout<<endl<<endl;
			cout<<"hello Quad!!!"<<endl;
		}
		
	}

 




