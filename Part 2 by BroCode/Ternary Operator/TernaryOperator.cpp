#include <iostream>

int main() {

	//Ternary operator ?: = replacement to an if...else statement
	//condition ? expressionTrue : expressionFalse

	//int grade = 59;

	//grade >= 60 ? std::cout << "You passed!" : std::cout << "You failed!" << '\n';

	//int number = 10;
	//number % 2 == 1 ? std::cout << "ODD" : std::cout << "EVEN" << '\n';

	bool hungry = false;

	//hungry ? std::cout << "You are hungry!" : std::cout << "You are full!" << '\n';
	std::cout << (hungry ? "You are hungry!" : "You are full!") << '\n';


	return 0;
}