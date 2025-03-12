#include "device.h"

device::device() : name(""), version(0), manufacturer("") {
}

device::device(const string& n, int v, const string& m) : name(n), version(v), manufacturer(m) {
}

device::device(const device& s) : name(s.name), version(s.version), manufacturer(s.manufacturer) {
}

device::device(const string& s) : version(0), manufacturer("") {
    name = s;
}


device::~device() {
    cout << "Destructor called for: " << name << endl;
}


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
    cout << manufacturer << " " << name << " " << version << endl;
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
