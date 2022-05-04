#include <iostream>
 
using namespace std;

int main() {
 
    int Number_Of_Test_Cases, Length_A, Length_B, Length_C, Index_A, Index_B, Index_C;
    string String_A, String_B, String_C;
    cin >> Number_Of_Test_Cases;
	
    for (int i = 0; i < Number_Of_Test_Cases; i++) {
			cin >> String_A >> String_B;			

			Length_A = String_A.length();
			Length_B = String_B.length();
			Length_C = Length_A + Length_B;
			
			String_C = string(Length_C, ' ');

			Index_A = 0;
			Index_B = 0;
			Index_C = 0;

			while(Index_C < Length_C) {
				if (Index_A < Length_A)
					String_C[Index_C++] = String_A[Index_A++];
				if (Index_B < Length_B)
					String_C[Index_C++] = String_B[Index_B++];
			}
			
			cout << String_C << endl;						
		}			
 
    return 0;
}