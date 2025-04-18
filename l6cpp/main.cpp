#include <iostream>
#include "Devices.h"

int main() {
    Devices collection;

    Device* d1 = new Device("Printer", 2, "HP");
    Device* d2 = new Device("Scanner", 1, "Canon");
    Device d3("Monitor", 3, "LG");

    collection += d1;
    collection += d2;

    collection += d3;

    cout << "\n=== After Adding Devices ===\n";
    collection.print();

    cout << "\nDevice at index 1:\n";
    collection[1]->print();
    cout << endl;

    cout << "\nDevice with name 'Monitor':\n";
    Device* found = collection["Monitor"];
    if (found) {
        found->print();
        cout << endl;
    } else {
        cout << "Device not found.\n";
    }

    collection -= 0;
    cout << "\n=== After Removing Device at Index 0 ===\n";
    collection.print();

    collection -= string("Monitor");
    cout << "\n=== After Removing Device Named 'Monitor' ===\n";
    collection.print();

    return 0;
}
