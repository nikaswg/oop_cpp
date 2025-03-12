#include <iostream>
#include "device.h"

using namespace std;

int main() {
	device device1;
	device device2("Smartphone", 10, "Apple");
	device device3(device2);
	device device4("Laptop");
	
	cout << "static" << endl;
	
	device1.print();
	device2.print();
	device3.print();
	device4.print();
	
	device* dDevice1 = new device();
	device* dDevice2 = new device("x NFC", 3, "POCO");
	device* dDevice3 = new device(*dDevice2);
	device* dDevice4 = new device("Honor");
	
	cout << endl << "dynamic" << endl;
	
	dDevice1->print();
	dDevice2->print();
	dDevice3->print();
	dDevice4->print();
	
	delete dDevice1;
	delete dDevice2;
	delete dDevice3;
	delete dDevice4;
//    device device1;
//    
//    device1.setName("note");
//    device1.setVersion(11);
//    device1.setManufacturer("xiomi");
//    
//    cout << "This device1: " << device1.getManufacturer() << " " << device1.getName() << " " << device1.getVersion() << endl;
//    
//    device1.scan();
//    device1.print();
//    
//    device* device2 = new device;
//    
//    device2->setName("Galaxy A");
//    device2->setVersion(34);
//    device2->setManufacturer("Samsung");
//    
//    cout << "This device2: " << device2->getManufacturer() << " " << device2->getName() << " " << device2->getVersion() << endl;
//    
//    device2->scan();
//    device2->print();
//    
//    //СОЗДАЕМ ДИНАМ МАССИВ ИЗ 4 ЭЛЕМЕНТОВ И ЗАПОЛНЯЕМ ЕГО С КЛАВИАТУРЫ
//
//    device* device3 = new device[4];
//    
//    for (int i = 0; i < 4; i++) {
//    	device3[i].scan();
//	}
//    
//    for (int i = 0; i < 4; i++) {
//    	device3[i].print();
//	}
//    
//	int k = device3[0].count(4, "xiomi");
//	
//	cout << k;
//	
//	//метод должен определить сколько в массиве есть устройств этого производителя
//	    
//    delete[] device3;
//    delete device2;
    return 0;
}
