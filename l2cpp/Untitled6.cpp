#include <iostream>
using namespace std;

double fun(int* a, int n) {
    bool ascending = true;
    bool firstzero = false;
    int sum = 0;
    int count = 0;

    for (int i = 0; i < n - 1; i++) {
        if (i > 0  && a[i - 1] > a[i]) {
            ascending = false;
            break;
        }
                if (a[i] == 0) {
            firstzero = true;
            break;
        }
    }
    
    for (int i = n - 1; i >= 0; i--) {
        if (a[i] == 0) {
            break;
        }
        count++;
        sum += a[i];
    }
    

    if (!ascending) {
        return 0.0;
    } else {
        return static_cast<double>(sum) / count; 
    }
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
