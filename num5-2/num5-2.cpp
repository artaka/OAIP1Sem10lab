#include <iostream>
using namespace std;

bool isThere(char arr[], char num) {
	int size = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i != size;++i) {
		if (arr[i] == num) {
			return true;
		}
	}
	return false;
}

int main() {
	setlocale(LC_ALL, "RU");
	char arr[100];
	char orArr[100];
	int size;
	
	cout << "ֲגוהטעו נאחלונ: ";
	cin >> size;
	cout << "ֲגוהטעו סטלגמכû:" << endl;
	for (int i = 0;i != size;++i) {
		cin >> arr[i];
	}

	orArr[0] = arr[0];
	int counter = 1;
	cout << arr[0];
	for (int i = 1;i != size;++i) {
		if (!(isThere(orArr, arr[i]))) {
			cout << arr[i];
			orArr[counter] = arr[i];
			counter++;
		}
	}
}