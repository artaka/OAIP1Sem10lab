//task 4
#include <iostream>
#include <vector>
using namespace std;

bool isThere(vector<int> arr, int num) {
	for (int i = 0; i != arr.size();++i) {
		if (arr[i] == num) {
			return true;
		}
	}
	return false;
}

int main() {
	setlocale(LC_ALL, "RU");
	const int k = 10;
	int M[k];
	vector<int> data;

	for (int i = 0;i != k;++i) {
		cin >> M[i];
	}
	
	int counter = 1;
	data.push_back(M[0]);
	for (int i = 1;i != k;++i) {
		if (!(isThere(data, M[i]))) {
			counter++;
			data.push_back(M[i]);
		}
	}

	cout << counter;
}