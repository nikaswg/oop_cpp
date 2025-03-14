#include "Device.h"

Device::Device() : name(""), version(0), manufacturer("") {
}

Device::Device(const string& n, int v, const string& m) : name(n), version(v), manufacturer(m) {
}

Device::Device(const Device& s) : name(s.name), version(s.version), manufacturer(s.manufacturer) {
}

Device::Device(const string& s) : version(0), manufacturer("") {
    name = s;
}

Device::Device(const Device* d1, Device d2, string s) {
	if (d1->name.length() > d2.name.length()) {
		name = d1->name;
	}
	else {
		name = d2.name;
	}
	if (d1->version < d2.version) {
		version = d1->version;
	}
	else {
		version = d2.version;
	}
	manufacturer = s;
}


Device::~Device() {
    cout << "Destructor called for: " << name << endl;
}


string Device::getName() {
    return name;
}

int Device::getVersion() {
    return version;
}

string Device::getManufacturer() {
    return manufacturer;
}

void Device::setName(string n) {
    name = n;
}

void Device::setVersion(int v) {
    version = v;
}

void Device::setManufacturer(string m) {
    manufacturer = m;
}

void Device::scan() {
    cout << "Enter device name: ";
    cin >> name;
    cout << "Enter device version: ";
    cin >> version;
    cout << "Enter device manufacturer: ";
    cin >> manufacturer;
}

void Device::print() {
    cout << manufacturer << " " << name << " " << version << endl;
}

int Device::count(int kol, string m) {
    int k = 0;
    for (int i = 0; i < kol; i++) {
        if ((this + i)->manufacturer == m) {
            k++;
        }
    }
    return k;
}
