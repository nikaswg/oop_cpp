#include <iostream>
#include "Device.h"
#include "Smartphone.h"

using namespace std;

int main() {
	Smartphone* mas_phone = new Smartphone[3];
	int i;
	for (i = 0; i < 3; i++) {
		mas_phone[i].scan();
	}
	for (i = 0; i < 3; i++) {
		mas_phone[i].print();
	}
	
	Smartphone phone3(mas_phone, 1, 0); //поля базового класса взять из эл-та массива с индексом 1, а наследника с индексом 0
	
	phone3.print();
	
    Smartphone phone1;
    phone1.print();
    phone1.scan();
    phone1.print();
    
    Smartphone phone2("iPhone", 15, "Apple", "iOS", 6.1);
    phone2.print();
    cout << "name: " << phone2.getName() << endl;
    cout << "version: " << phone2.getVersion() << endl;
    cout << "manufacturer: " << phone2.getManufacturer() << endl;
    cout << "OS: " << phone2.getOS() << endl;
    cout << "Screen Size: " << phone2.getScreenSize() << endl;
    phone2.setName("A");
    phone2.setVersion(34);
    phone2.setManufacturer("samsung");  
    phone2.setOS("android");
    phone2.setScreenSize(7.0);
    
    Smartphone* dphone1 = new Smartphone();
    dphone1->print();
    dphone1->scan();
    dphone1->print();
    
    Smartphone* dphone2 = new Smartphone("A", 34, "samsung", "ios", 6.1); 
    dphone2->print();
    cout << "name: " << dphone2->getName() << endl;
    cout << "version: " << dphone2->getVersion() << endl;
    cout << "manufacturer: " << dphone2->getManufacturer() << endl;
    cout << "OS: " << dphone2->getOS() << endl;
    cout << "Screen Size: " << dphone2->getScreenSize() << endl;
    dphone2->setName("iPhone");
    dphone2->setVersion(15);
    dphone2->setManufacturer("Apple");
    dphone2->setOS("android");
    dphone2->setScreenSize(7.0);
    
    delete dphone1;
    delete dphone2;
    delete[] mas_phone;
    
    return 0;
}
