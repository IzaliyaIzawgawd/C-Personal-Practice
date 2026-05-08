#include <iostream>

int main() {
	
	std::string name; // For more info which I will contine researching more in the future, go to https://cplusplus.com/reference/string/string/

	std::cout << "Enter your name: ";
	std::getline(std::cin, name); //getline = standard function to read entire line of text

	name.erase(0, 3);

	std::cout << name;

	//std::cout << name.find(' '); // Find certain character in string

	//name.insert(0, "@");

	//std::cout << name;

	//std::cout << name.at(1);

	//name.append("@gmail.com");

	//std::cout << "Your username is now " << name;

	//name.clear();

	//std::cout << "Hello " << name;

	//if (name.empty()) {
		//std::cout << "You didn't enter your name";
	//}
	//if (name.length() > 12){
		//std::cout << "Your name can't be over 12 characters";
	//}
	//else {
		//std::cout << "Welcome " << name;
	//}

	
	return 0;

}