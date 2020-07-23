/*
* Here we are not using namespace std, but explicitly uses its objects like cin, 
* cout by using std:: before each invocation.
* input_stream.cpp
*/
#include <iostream>

int main() {
	int a;
	std::cin >> a;
	std::cout << a;
	return 0;
}
