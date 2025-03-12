#ifndef DEVICE_H
#define DEVICE_H

#include <iostream>
#include <string>

using namespace std;

class device {
private: 
    string name;
    int version;
    string manufacturer;
public:
    device(); 
    device(const string& n, int v, const string& m); 
    device(const device& copyDevice); 
    device(const string& s); 
    ~device(); 
	
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
