#include <iostream>
 
using namespace std;

const int Number_To_LED[10] = {
    6,
    2,
    5,
    5,
    4,
    5,
    6,
    3,
    7,
    6,
};

const int ASCII_Number_Zero = 48;

int main() {
 
    int Number_Of_Test_Cases, Length, Number_Of_LEDs, LED_Number;
    string Value;
    cin >> Number_Of_Test_Cases;
	
    for (int i = 0; i < Number_Of_Test_Cases; i++) {
			cin >> Value;
			Length = Value.length();

			Number_Of_LEDs = 0;
			for (int j = 0; j < Length; j++) {
				LED_Number = (static_cast<int>(Value[j]) - ASCII_Number_Zero);
				Number_Of_LEDs += Number_To_LED[LED_Number];				
			}
			cout << Number_Of_LEDs << " leds" << endl;						
		}			
 
    return 0;
}