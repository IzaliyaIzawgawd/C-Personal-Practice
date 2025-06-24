#include <iostream>
#include <cmath> //cmath website has a lot more functions that I didn't use here

int main() {

	double x = 3;
	double y = 4;
	double z; 
	double a;
	double b;
	double c;
	double d;
	double e;
	double f;
	double g;
	double x_2 = 3.14;

	// I had an issue here. Don't use "double a;" before "double z; when "a = std::min(x, y);" is used later.

	z = std::max(x, y);
	a = std::min(x, y);

	b = pow(2, 3); // Using pow function to calculate 2 raised to the power of 3
	c = sqrt(9); // Using sqrt function to calculate the square root of 9
	d = std::abs(-3); // Using abs function to calculate the absolute value of -5
	e = std::round(x_2); // Using round function to round 3.14 to the nearest integer
	f = std::ceil(x_2); // Using ceil function to 3.14 to the nearest integer multiple
	g = std::floor(x_2); // Using floor function to round down 3.14 to the nearest whole integer i.e. 3.14 = 3, 7.99 = 7 and -2.1 = -3 (For negatives, it goes to the next lower integer)

	std::cout << "Max:" << z << '\n';
	std::cout << "Min:"  << a << '\n';
	std::cout << "2 raised to 3:" << b << '\n';
	std::cout << "Square root of 9" << c << '\n';
	std::cout << "Absolute value of -3:" << d << '\n';
	std::cout << "Rounded value of 3.14:" << e << '\n';
	std::cout << "Ceiling value of 3.14:" << f << '\n';
	std::cout << "Floor value of 3.14:" << g << '\n';

	return 0;
}