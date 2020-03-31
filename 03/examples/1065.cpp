#include <iostream>

using namespace std;

int main() {
	int number;
	int count = 0;

	for (int i = 0; i < 5; ++i)
	{
		cin >> number;
		if (number % 2 == 0) count++;
	}

	cout << count << " valores pares" << endl;
}