#include <iostream>
using namespace std;

double fun(int* mas, int n) {
    bool ascending = true;
    int firstZeroIndex = -1;
    int sum = 0;
    int count = 0;

    for (int i = 0; i < n; i++) {
        // ???????? ?? ????????? ???????????????
        if (i > 0 && mas[i] < mas[i - 1]) {
            ascending = false;
        }

        // ????? ??????? ????
        if (firstZeroIndex == -1 && mas[i] == 0) {
            firstZeroIndex = i;
        }

        // ????????? ???????? ?? ??????? ????, ???? ?????? ??? ??? ??????????
        if (ascending && firstZeroIndex == -1) {
            sum += mas[i];
            count++;
        }
    }

    // ?????????? ???????? ????????
    double average = 0.0;
    if (ascending && firstZeroIndex != -1 && count > 0) {
        average = static_cast<double>(sum) / count;
    }
    return average;
}

int main() {
    int n;
    cout << "Vvedite razmer massiva (n): ";
    cin >> n;
    int* mas = new int[n];

    cout << "Vvedite " << n << " tselye elementy: ";
    for (int i = 0; i < n; i++) {
        cin >> mas[i];
    }

    double average = fun(mas, n);
    cout << "Srednee: " << average;

    delete[] mas;
    return 0;
}
