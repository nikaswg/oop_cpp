#include <iostream>
#include "device.h"

using namespace std;

string device::getName() {
    return name;
}

int device::getVersion() {
    return version;
}

string device::getManufacturer() {
    return manufacturer;
}

void device::setName(string n) {
    name = n;
}

void device::setVersion(int v) {
    version = v;
}

void device::setManufacturer(string m) {
    manufacturer = m;
}

void device::scan() {
    cout << "Enter device name: ";
    cin >> name;
    cout << "Enter device version: ";
    cin >> version;
    cout << "Enter device manufacturer: ";
    cin >> manufacturer;
}

void device::print() {
    cout << "Device name: " << name << endl;
    cout << "Device version: " << version << endl;
    cout << "Device manufacturer: " << manufacturer << endl;
}

int device::count(int kol, string m) {
	int k = 0;
	for (int i = 0; i < kol; i++) {
		if ((this + i)->manufacturer == m) {
			k++;
		} 
    }
	return k;
}
