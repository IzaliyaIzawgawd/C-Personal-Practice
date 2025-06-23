#include <iostream>

//cout << (insert operator)
//cin  >> (extract operator)
//:: or two semicolons is a scope resolution operator
int main()
{ 
	std::string name;
	int age;

	std::cout << "Enter your age: ";
	std::cin >> age; //getline function can't pick up the new line character

	std::cout << "Enter your name: ";
	std::getline(std::cin >> std::ws, name); // Using getline to allow spaces in the name, std::ws is used to ignore leading whitespace characters
	//std::cin >> name;
	
	std::cout << "Hello, " << name << '\n';

	return 0;
}
