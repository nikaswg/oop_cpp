#include <iostream>
#include "Devices.h"

int main() {
    Devices collection;
    collection.addDevice(new Device("iPhone", 14, "Apple"));
    collection.addDevice(new Device("Galaxy", 12, "Samsung"));
    collection.addDevice(new Device("Pixel", 7, "Google"));

    cout << "Initial list:" << endl;
    collection.print();
    collection.sort();
    cout << "\nAfter sorting by name:" << endl;
    collection.print();
    collection.swap(0, 2);
    cout << "\nAfter swapping 0 and 2:" << endl;
    collection.print();
    collection.delDevice(1);
    cout << "\nAfter deleting element 1:" << endl;
    collection.print();
    Device* d = collection.getDevice(0);
    if (d) {
        cout << "\nAccessed element 0:" << endl;
        d->print();
    }

    cout << "\nTotal devices: " << collection.getSize() << endl;

    return 0;
}
