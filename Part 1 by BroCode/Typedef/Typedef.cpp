#include <iostream>
#include <vector>

typedef std::vector<std::pair<std::string, int>> pairlist_t;
typedef std::string text_t;
typedef int number_t;
using height_t = std::string;

int main() {

	// typedef is used to create an alias name for a data type
	// alias name can be used to refer to the data type
	// new identifier for an existing data type
	// Helps in making the code more readable and understandable
	// Replaced with 'using' keyword in (work better with templates)

	pairlist_t pairlist;
	text_t firstName = "Izaliya";
	number_t age = 22;
	height_t height = "5'4";

	std::cout << "First Name: " << firstName << '\n';
	std::cout << "Age: " << age << '\n';
	std::cout << "Height: " << height << '\n';

	return 0;
}