#include <iostream>
using namespace std;
int main()
{
	float A; //first variable user inputs
	float B; //second variable user inputs
	float X; //calculated variable from first and second user inputed variables

	cout << "Hello, my name is Zoey and I will solve this equation for you:" << endl; //greeting user

	cout << "Ax + B = 0" << endl; //equation that will be solved

	cout << "Please enter a value for A: "; 
	cin >> A; //user input for A

	cout << "Please enter a value for B: ";
	cin >> B; //user input for B

	X = -B / A; //originally from Ax + B = 0 equation, rearranged to solve for X

	cout << "Solving " << A << "x + " << B << " = 0 " << endl; //showing user its being solved
	cout << "x = " << X << endl; //showing the answer to user

	return 0;
}
