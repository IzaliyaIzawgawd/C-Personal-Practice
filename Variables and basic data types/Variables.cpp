#include <iostream>

int main() { //integer main function
	
	int x = 5; // declaration
	int y = 6;
	int sum = x + y;

	std::cout << "x = " << x << '\n'; // output while \n is used to move to the next line
	std::cout << "y= " << y << '\n';
	std::cout << "Sum of x and y = " << sum << '\n';
	//More math stuff
	int age = 22;
	int year = 2025;
	int days = 201.5;

	std::cout << "age = " << age << '\n';
	std::cout << "year = " << year << '\n';
	std::cout << "days = " << days << '\n';

	//double is numbers with decimals
	double price = 10.99;
	double gpa = 2.5;
	double temperature = 30.5;

	std::cout << "price = " << price << '\n';
	std::cout << "gpa = " << gpa << '\n';
	std::cout << "temperature = " << temperature << '\n';

	//char is single character only
	char grade = 'A';
	char initial = 'B';
	
	std::cout << "Grade = " << grade << '\n';
	std::cout << "Initial = " << initial << '\n';

	//boolean is either true or false
	bool student = true;
	bool power = true;
	bool forSale = false;

	std::cout << "Student = " << student << '\n';
	std::cout << "Power = " << power << '\n';
	std::cout << "For Sale = " << forSale << '\n';

	//string, objects that represent a sequence of texts
	std::string name = "Izaliya Izawgawd";

	std::cout << "Name = " << name << '\n';

	return 0;
}