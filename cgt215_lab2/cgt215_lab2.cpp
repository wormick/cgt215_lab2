// cgt215_lab2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;
int main()
{
	float A;
	float B;
	float X;
	std::cout << "its math time!!\n";
	std::cout << "today im going to be solving for x of A(x) + B = 0\n";


	cout << "Please enter a value for A: ";
	cin >> A;
	cout << "A=" << A << endl;

	cout << "Please enter a value for B: ";
	cin >> B;
	cout << "B=" << B << endl;

	X = (-B / A);
	cout << "And X=" << X << endl;
}