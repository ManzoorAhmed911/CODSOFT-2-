#include<iostream>
#include<math.h>
using namespace std;

class Calculator
{
public:
	float Add, Subtrct, Multiply, Divide;

	void add()
	{
		float num1 = 0, num2 = 0;
		cout << "Applying Addition" << endl;
		cout << "Enter the First Number: ";
		cin >> num1;
		cout << "Enter the Second Number: ";
		cin >> num2;
		Add = num1 + num2;
		cout << "The Addition of Your Provided Numbers are: " << Add << endl;
		cout << "<--------------------------------------------------------------------->" << endl;
	}
	void subt()
	{
		float num1 = 0, num2 = 0;
		cout << "Applying Subtraction" << endl;
		cout << "Enter the First Number: ";
		cin >> num1;
		cout << "Enter the Second Number: ";
		cin >> num2;
		Subtrct = num1 - num2;
		cout << "The Subtraction of Your Provided Numbers are: " << Subtrct << endl;
		cout << "<--------------------------------------------------------------------->" << endl;
	}
	void multiply()
	{
		float num1 = 0, num2 = 0;
		cout << "Applying Multiplication" << endl;
		cout << "Enter the First Number: ";
		cin >> num1;
		cout << "Enter the Second Number: ";
		cin >> num2;
		Multiply = num1 * num2;
		cout << "The Multiplication of Your Provided Numbers are: " << Multiply << endl;
		cout << "<--------------------------------------------------------------------->" << endl;
	}
	void divide()
	{
		float num1 = 0, num2 = 0;
		cout << "Applying Divsion" << endl;
		cout << "Enter the First Number: ";
		cin >> num1;
		cout << "Enter the Second Number: ";
		cin >> num2;
		Divide = num1 / num2;
		cout << "The Division of Your Provided Numbers are: " << Divide << endl;
		cout << "<--------------------------------------------------------------------->" << endl;
	}

};


void main()
{
	Calculator C1;
	char Operation;
	cout << "What operation You want :\n Addtion \n Subtraction \n Multiplication \n Division" << endl;
	cin >> Operation;
	switch (Operation)
	{
	case '+':
		C1.add();
		break;
	case '-':
		C1.subt();
		break;
	case '*':
			C1.multiply();
			break;
	case '/':
		C1.divide();
	default:
		cout << "Wrong Expression";
		break;
	}

}
