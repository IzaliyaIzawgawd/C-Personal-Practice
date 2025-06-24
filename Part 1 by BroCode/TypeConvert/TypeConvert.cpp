#include <iostream>

int main() {

	// type conversion is a conversion of value of one data type to another
	// Implicit = automatic
	// Explicit = Precede value with new data type

	double  x = (int) 3.14;
	int correct = 8;
	int questions = 10;
	double score = (double)correct/(double)questions * 100;

	// Using 'correct/questions is implicit given the values are in 'int'
	// Putting '(double)' in front of 'correct' and/or 'questions' is explicit, giving a decimal value

	//char a = 65;

	std::cout << "x = " << x << '\n';
	std::cout << "Char = " << (char) 65 << '\n';
	std::cout << "Score = " << score << "%" << '\n';
	//std::cout << "char = " << a << '\n';

	return 0;
}