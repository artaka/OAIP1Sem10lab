#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "RU");
	const int maxSize = 30;
	int n, i, kmax = 0, minI = 0;
	int a[maxSize];
	cout << "¬ведите размер массива:";
	cin >> n;
	if (n > 30)
		return 0;
	srand((unsigned)time(NULL));
	for (i = 0;i < n;i++) {
		a[i] = rand() % 30;
		cout << a[i] << " ";
	}
	cout << endl;
	for (i = 1;i < n;i++) {
		if (a[i] > a[kmax]) {
			kmax = i;
		}
	}
	cout << "Max: " << a[kmax] << endl;

	for (i = 1;i != n;++i) {
		if (a[i] < a[minI]) {
			minI = i;
		}
	}
	cout << "Min: " << a[minI];
}