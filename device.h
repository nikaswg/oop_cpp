//
#ifndef device_h
#define device_h
class device {
	private: 
	  string name;
	  int version;
	  string manufacturer;
	  string get_name();
	  int get_verion();
	  string get_manufacturer();
	  void set_name(string n);
	  void set_version(int v);
	  void set_manufacturer(string m);
	  void print(string n; int v; string m);
	  void scan();
};
#endif
