/**
The Ultimate Guide To Torque 3D
Chapter 13
By: Robert C Fritzen
protected_example.cpp
**/
#include <iostream>
using namespace std;
class MyClass {
	protected:
		int a;
};
void main() {
	MyClass mC;
	cout << "This function cannot print mC.a because it is a protected member.";
}
