#include <iostream>
#include "Device.h"
#include "Smartphone.h"

using namespace std;

int main() {
    Smartphone phone1;
    phone1.print();
    phone1.scan();
    phone1.print();
    
    Smartphone phone2("iPhone", 15, "Apple", "iOS", 6.1);
    phone2.print();
    cout << "OS: " << phone2.getOS() << endl;
    cout << "Screen Size: " << phone2.getScreenSize() << endl;
    phone2.setOS("android");
    phone2.setScreenSize(7.0);
    
    Smartphone* dphone1 = new Smartphone();
    dphone1->print();
    dphone1->scan();
    dphone1->print();
    
    Smartphone* dphone2 = new Smartphone("A", 34, "samsung", "ios", 6.1); 
    dphone2->print();
    cout << "OS: " << dphone2->getOS() << endl;
    cout << "Screen Size: " << dphone2->getScreenSize() << endl;
    dphone2->setOS("android");
    dphone2->setScreenSize(7.0);
    
    return 0;
}
