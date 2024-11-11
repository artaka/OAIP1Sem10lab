#include <iostream>
#include <ctime>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    const int N = 100;
	int i, sz, A[N], rmn = 0, rmx = 99, sum = 0;

    cout << "Введите размер массива ";
    cin >> sz;
    cout << "Массив А:" << endl;

    srand((unsigned)time(NULL));

    for (i = 0;i < sz;i++) {
        A[i] = (int)(((double)rand() / (double)RAND_MAX) * (rmx - rmn) + rmn);
        cout << A[i] << endl;
        sum += A[i];
    }

    cout << "Сумма: " << sum;
}