//task 1
#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "RU");
	const int n = 211; //amout of days
	int originData[n];
	int shortData[(n + 6) / 7];

	//filling massive
	for (int i = 0;i != n;++i) {
		originData[i] = rand()%100;
	}

	//segmentation original data and get a sum
	int segmentIndex = 0;
	for (int i = 0;i < n;i+=7) {
		int sum = 0;
		for (int j = 0; j != 7 && i + j != n;++j) {
			sum += originData[i + j];
		}
		shortData[segmentIndex++] = sum;
	}
	
	//get a maximum index of shortdata
	int maxIndex = 0;
	for (int i = 1;i != segmentIndex;++i) {
		if (shortData[i] > shortData[maxIndex]) {
			maxIndex = i;
		}
	}
	
	cout << "Ќаибольшее количество осадков выпало на " << maxIndex << " неделе.";
}