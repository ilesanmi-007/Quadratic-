#include <iostream>
using namespace std;

class Quadratic
{
private:
	float a, b , c ,determinant;
	char CalcDeterminant();


public:
	Quadratic();
	Quadratic(float, float, float); //the two constructors
	void SetCoefficient();
	void GetCoefficient();
	void QuadraticRoots();
	void WriteRoots();


};