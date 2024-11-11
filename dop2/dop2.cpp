//task 3
#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "RU");
	const int n = 10;
	int data[n];

	//filling massive
	for (int i = 0;i != n;++i) {
		cin >> data[i];
	}

	//counting same elements
	int counter = 1;
	int maxCount = 0;
	for (int i = 1;i != n;++i) {
		if (data[i] == data[i - 1]) {
			counter++;
			if (counter > maxCount) {
				maxCount = counter;
			}
		}
		else {
			counter = 1;
		}
	}
	cout << "Наибольшее количество подряд идущих одинаковых элементов: " << maxCount;
}