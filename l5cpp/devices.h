#ifndef DEVICES_H
#define DEVICES_H

#include <iostream>
#include "Device.h"

using namespace std;

class Devices {
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
};

#endif
