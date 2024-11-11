#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "RU");
	int arr[100];
	int n;

	cout << "¬ведите размер массива:";
	cin >> n;
	if (n > 100)
		return 0;
	srand((unsigned)time(NULL));
	for (int i = 0;i < n;i++) {
		arr[i] = rand() % 99;
	}

	int sum = arr[0];
	for (int i = 1;i != n;++i) {
		sum += arr[i];
		arr[i] = sum;
	}

	for (int i = 0;i != n;++i) {
		cout << arr[i] << endl;
	}
}