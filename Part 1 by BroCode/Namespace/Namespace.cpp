#include <iostream>

namespace first{
	int x = 1;
}
namespace second {
	int x = 2;
}


int main() {
	 //Namespace provides a solution for preventing name conflicts in large projects. Each entity needs a unique name.
	 //Allows identically named entities as long as the namespaces are different.
	 //using namespace "namespace prefix" would allow you to use the namespace without the prefix
	 //using namespace std; is a bad practice because it can cause name conflicts
	 //using std::cout; is a better practice because it only imports the cout object. Same goes with other objects like string, vector, etc.
	int x = 0;
	//:: is a scope resolution operator
	std::cout << "x = " << x << '\n';
	std::cout << "x first = " << first::x << '\n';
	std::cout << "x second = " << second::x << '\n';

	return 0;
}