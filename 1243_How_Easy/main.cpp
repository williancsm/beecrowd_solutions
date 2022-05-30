#include <iostream>

using namespace std;

int main() {
	int Length, Number_Of_Words, Number_Of_Symbols, Number_Of_Letters, Total_Number_Of_Letters;
	string Msg;
	
	while (getline(cin, Msg)) {
		Length = Msg.length();
		
    Number_Of_Letters = 0;
		Number_Of_Words = 0;
		Number_Of_Symbols = 0;
		Total_Number_Of_Letters = 0;
		for (int i = 0; i <= Length; i++) {			
			if (((Msg[i] >= 'A') && (Msg[i] <= 'Z')) || ((Msg[i] >= 'a') && (Msg[i] <= 'z'))) {
				Number_Of_Letters++;
			}

			if (((Msg[i] >= '0') && (Msg[i] <= '9')) || (Msg[i] == '.'))  {
				Number_Of_Symbols++;
			}			

			if (Msg[i] == ' ' || Msg[i] == '\0') {
				if (Msg[i - 1] == '.') Number_Of_Symbols--;
				if (Number_Of_Symbols <= 0 && Number_Of_Letters > 0) {
					Number_Of_Words++;
					Total_Number_Of_Letters += Number_Of_Letters;
				}
				Number_Of_Letters = 0;
				Number_Of_Symbols = 0;
			}
		}
		
		if (Number_Of_Words > 0) {
			int Average_Length = Total_Number_Of_Letters / Number_Of_Words;
			if (Average_Length <= 3)
				cout << "250" << endl;
			else if (Average_Length == 4 || Average_Length == 5)
				cout << "500" << endl;
			else cout << "1000" << endl;			
		}
		else cout << "250" << endl;		
	}

	return 0;
}