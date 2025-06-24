#include <iostream>

int main() {
	
	// switch = alternative for using many "else if" statements

	int month;
	std::cout << "Enter a month (1-12): ";
	std::cin >> month;

	switch (month) {
	case 1:
		std::cout << "It is January" << '\n';
		break;
	case 2:
		std::cout << "It is February" << '\n';
		break;
	case 3:
		std::cout << "It is March" << '\n';
		break;
	case 4:
		std::cout << "It is April" << '\n';
		break;
	case 5:
		std::cout << "It is May" << '\n';
		break;
	case 6:
		std::cout << "It is June" << '\n';
		break;
	case 7:
		std::cout << "It is July" << '\n';
		break;
	case 8:
		std::cout << "It is August" << '\n';
		break;
	case 9:
		std::cout << "It is September" << '\n';
		break;
	case 10:
		std::cout << "It is October" << '\n';
		break;
	case 11:
		std::cout << "It is November" << '\n';
		break;
	case 12:
		std::cout << "It is December" << '\n';
		break;
	}

	// if (month == 1) {
	//	std::cout << "it is January" << '\n';
	// }
	// else if (month == 2) {
	// 	std::cout << "it is February" << '\n';
	// }
	// else if (Month == 3) {
	//	std::cout << "it is March" << '\n';
	// }
	// else if (month == 4) {
	//	std::cout << "it is April" << '\n';
	// }
	// else if (month == 5) {
	//	std::cout << "it is May" << '\n';
	// }
	// else if (month == 6) {
	//	std::cout << "it is June" << '\n';
	// }
	// else if (month == 7) {
	//	std::cout << "it is July" << '\n';
	// }
	// else if (month == 8) {
	//	std::cout << "it is August" << '\n';
	// }
	// else if (month == 9) {
	//	std::cout << "it is September" << '\n';
	// }
	// else if (month == 10) {
	//	std::cout << "it is October" << '\n';
	// }
	// else if (month == 11) {
	//	std::cout << "it is November" << '\n';
	// }
	// else if (month == 12) {
	//	std::cout << "it is December" << '\n';
	// }
	// else {
	//	std::cout << "Invalid month!" << '\n';
	// }
	return 0;
}