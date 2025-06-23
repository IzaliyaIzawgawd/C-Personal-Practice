#include <iostream>

int main()
{
	//if statements = do something if a condition is true.

	int age;

	std::cout << "How old are you? ";
	std::cin >> age;

	if (age >= 100) {
		std::cout << "Dang someone's sagging and still kicking";
	}
	else if (age >= 18) {
		std::cout << "Come in the coom hole";
	}
	//if (age >= 18){
	//	std::cout << "Come in the coom hole";
	else if (age <= 0) {
		std::cout << "Of course you can lie about your age. Great ";
	}
	//else if (age >= 100) {           
	//	std::cout << "Dang someone's sagging and still kicking";
	//}                                                                     //Won't work unless it's at the top
	else {
		std::cout << "Get back in your cage";
	}
	return 0;
}