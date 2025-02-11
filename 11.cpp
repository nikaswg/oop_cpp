/*
Nagornuik Nikita
new,string
LR-1 
V-7
task 1.1
Dan massiv celix chisel A[n]. Naiti avg elementov massiva, naxodachixca mezhdy predposlednim i poslednim nulevimi elementami
*/


#include <iostream>

using namespace std;

int main() {
	int n;
	cout << "Vvedite kol-vo elementov massiva:";
	cin >> n;
	int* a = new int[n];
	cout << "Vvedite elementi massiva:";
	int i;
	for (i = 0; i < n; i++) {
		cin >> a[i];
	}
	int SecondLastZeroIndex = -1;
	int LastZeroIndex = -1;
	for (i = 0; i < n; i++) {
		if (a[i] == 0) {
			SecondLastZeroIndex = LastZeroIndex;
			LastZeroIndex = i;
		} 
	}
	if (LastZeroIndex == -1 || SecondLastZeroIndex == -1 || LastZeroIndex - SecondLastZeroIndex <= 1) {
		cout << "Nedostatochno nulevix elementov dlya vicheslenia srednego arifmeticheskogo." << endl;
    } else {
    	double sum = 0.0;
    	int count = 0;
    	for (i = SecondLastZeroIndex + 1; i < LastZeroIndex; i++) {
    		sum += a[i];
    		count++;
		}
		double average = sum / count;
		cout << "Average = " << average << endl;
	}
    delete[] a;
    return 0;
}
