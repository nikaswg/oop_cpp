#ifndef DEVICES_H
#define DEVICES_H

#include <iostream>
#include <string>
#include "Device.h"

using namespace std;

class Devices {
    friend void operator+=(Devices& d, Device* dev);   
    friend void operator+=(Devices& d, Device& dev);     
    friend void operator-=(Devices& d, string name);     

private:
    Device* devices[10];
    int size;

public:
    Devices();
    ~Devices();

    void addDevice(Device* p);
    void delDevice(int n);

    int getSize();
    Device* getDevice(int n);

    void swap(int n1, int n2);
    void sort();
    void print();

    void operator-=(int index);               
    Device* operator[](int index);           
    Device* operator[](string name);         
};

#endif
