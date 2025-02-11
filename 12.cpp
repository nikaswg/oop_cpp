#include <iostream>

using namespace std;

int main() {
	string s;
	getline(cin, s);
	int i;
	if (s[s.length()-1] == '!') {
		cout << "Stroka konchaetca na '!'.";
	} else {
		string result; 
		for (i = 0; i < s.length(); i++) {
			if (s[i] == '?') {
				result += '_';
				result += '?';
				result += '_';
			} else {
				result += s[i];
			}
		}
		cout << "Gotovaya stroka:" << result << endl;
	}
    return 0;
}
