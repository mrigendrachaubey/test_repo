/*
* why endl is not needed in cin?
* endl is just like \n which if we remember even in C we don't use in scanf
* input_stream1.cpp
*/
#include <iostream>
using namespace std;
int main(void) {
	int a;
	cin >> a ;
	cout << a << endl;
	return 0;
}
