#ifndef DEVICE_H
#define DEVICE_H

#include <iostream>
#include <string>

using namespace std;

class Device {
private: 
    string name;
    int version;
    string manufacturer;
public:
    Device(); 
    Device(const string& n, int v, const string& m); 
    Device(const Device& copyDevice); 
    Device(const string& s); 
    Device(const Device* d1, Device d2, string s);
	~Device(); 
	
    string getName();
    int getVersion();
    string getManufacturer();
    void setName(string n);
    void setVersion(int v);
    void setManufacturer(string m);
    void print();
    void scan();
    int count(int kol, string m);
};

#endif
