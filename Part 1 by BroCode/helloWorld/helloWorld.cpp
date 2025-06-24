//iostream is a header file that contains functions for basic input/output.
#include <iostream>

// main funtion is the entry point of the program.
int main() {
	// std means standard, cout means character output, << means output or left shift operator,
	std::cout << "Why am I stuck here" << std::endl; // this will print the text to the console, endl (end line) is used to move to the next line.
	std::cout << "Just to suffer";
	// std::'.\n' is used to move to the next line as well and better performance than endl.
		return 0; // return 0 means the program has executed successfully.
}