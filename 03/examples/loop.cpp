// loop.cpp
#include <iostream>

using namespace std;

int main() {
	int x = 0;

	begin:
	cout << x << endl;
	x = x + 1;

	if (x > 10) goto end;
	goto begin;

	end:
	cout << "terminei!" << endl;
}