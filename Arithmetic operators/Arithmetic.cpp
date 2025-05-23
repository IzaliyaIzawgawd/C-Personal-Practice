#include <iostream>

int main() {
	// Arithmetic operators is the return result of a specific arithmetic operation ( + - * / % )

	int students = 20;

	// Can also be used
	// students = students + 1;
	// students++;
	// students -=1;
	// So on and so forth

	students += 1;

	// If you need the decimal of the division, use double instead of int i.e. double students = 20;
	// If you need the remainder of any division, use the modulus operator "%"

	int remainder = students % 4;


	std::cout << "students = " << students << '\n';
	std::cout << "students remainder = " << remainder << '\n';
	return 0;
}