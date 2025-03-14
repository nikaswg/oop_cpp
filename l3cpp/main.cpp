//Нагорнюк Никита В-24 класс: устройство, ЛР - 3

#include <iostream>
#include "device.h"

using namespace std;

int main() {
	Device device1;
	Device device2("Smartphone", 10, "Apple");
	Device device3(device2);
	Device device4("Laptop");
	
	device1.print();
	device2.print();
	device3.print();
	device4.print();
	
	Device* dDevice1 = new Device();
	Device* dDevice2 = new Device("x NFC", 3, "POCO");
	Device* dDevice3 = new Device(*dDevice2);
	Device* dDevice4 = new Device("Honor");
	
	dDevice1->print();
	dDevice2->print();
	dDevice3->print();
	dDevice4->print();

    Device device5(dDevice2, device2, "Honor");
    
    //числовое поле мин из двух объектов, первое символьно поле наиболее длинное, третье наименование
      
    
    Device device6(&device2, *dDevice2, "Honor");
    
    device5.print();
    
    device6.print();
	
	delete dDevice1;
	delete dDevice2;
	delete dDevice3;
	delete dDevice4;

    return 0;
}
