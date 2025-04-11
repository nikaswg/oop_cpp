#ifndef SMARTPHONE_H
#define SMARTPHONE_H

#include "Device.h"

class Smartphone : public Device {
private:
    string os;        
    double screenSize; 

public:
    Smartphone();
    Smartphone(const string& n, int v, const string& m, const string& o, double s);
    ~Smartphone();

    string getOS();
    double getScreenSize();

    void setOS(const string& o);
    void setScreenSize(double s);

    void print();
    void scan();
};

#endif
