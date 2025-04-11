#include "Devices.h"

Devices::Devices() {
    size = 0;
}

Devices::~Devices() {
    for (int i = 0; i < size; i++) {
        delete devices[i];
    }
}

void Devices::addDevice(Device* p) {
    if (size < 10) {
        devices[size] = p;
        size++;
    } else {
        cout << "Collection is full!" << endl;
    }
}

void Devices::delDevice(int n) {
    if (n >= 0 && n < size) {
        delete devices[n];
        for (int i = n; i < size - 1; i++) {
            devices[i] = devices[i + 1];
        }
        size--;
    }
}

int Devices::getSize() {
    return size;
}

Device* Devices::getDevice(int n) {
    if (n >= 0 && n < size) {
        return devices[n];
    }
}

void Devices::swap(int i, int j) {
    if (i >= 0 && i < size && j >= 0 && j < size) {
        Device* temp = devices[i];
        devices[i] = devices[j];
        devices[j] = temp;
    }
}

void Devices::sort() {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (devices[j]->getName() > devices[j + 1]->getName()) {
                swap(j, j + 1);
            }
        }
    }
}

void Devices::print() {
    for (int i = 0; i < size; i++) {
        cout << i << ": ";
        devices[i]->print();
    }
}
