#include <iostream>
#include <cmath>

using namespace std;

float ReadNumber()
{

	float Number = 0;

	cout << "Please enter a number : \n";

	cin >> Number;

	return Number;

}


float MySqrtFunction(float Number)
{

	return pow(Number , 0.5);

}


int main()
{

	float Number = ReadNumber();

	cout << "C++ Round function result : ";
	cout << sqrt(Number) << "\n";

	cout << "My Round Result : ";
	cout << MySqrtFunction(Number) << "\n";




	return(0);
}