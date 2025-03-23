#include "Device.h"
#include "Smartphone.h"
#include <iostream>

using namespace std;

Smartphone::Smartphone() : Device(), os(""), screenSize(0.0) {
}

Smartphone::Smartphone(const string& n, int v, const string& m, const string& o, double s) 
    : Device(n, v, m), os(o), screenSize(s) {
}

Smartphone::~Smartphone() {
    cout << "Smartphone destructor called" << endl;	
}

string Smartphone::getOS() {
    return os;
}

double Smartphone::getScreenSize() {
    return screenSize;
}

void Smartphone::setOS(const string& o) {
    os = o;	
}

void Smartphone::setScreenSize(double s) {
    screenSize = s;
}

void Smartphone::print() {
    Device::print();
    cout << " " << os << " " << screenSize << endl;
}

void Smartphone::scan() {
    Device::scan();
    cout << "Enter smartphone OS: ";
    cin >> os;
    cout << "Enter smartphone screen size: ";
    cin >> screenSize;
}

Smartphone::Smartphone(Smartphone* mas, int i, int j) : Device(mas[i]) {
	os = mas[j].os;
	screenSize = mas[j].screenSize;
}

