#include <iostream>

using namespace std;

int main() {
	int Length, Middle;
	string Msg;
	getline(cin, Msg);

	while (getline(cin, Msg)) {
		Length = Msg.length();
		Middle = Length / 2;

		for (int j = (Middle - 1); j >= 0; j--) {
			cout << Msg[j];
		}

		for (int k = (Length - 1); k >= Middle; k--) {
			cout << Msg[k];
		}

		cout << endl;
	}

	return 0;
}