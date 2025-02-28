#include <device.h>
void device::set_name(string n) {
	name = n;
}

void device::set_version(int v) {
	version = v;
}

void device::set_manufacturer(string m) {
	manufacturer = m;
}

string device::get_name() {
	return name;
}

int device::get_version() {
	return version;
}

string device::get_manufacturer() {
	return manufacturer;
}

