#include <iostream>

using namespace std;

const long long int Overflow = 2147483647;

const int Max_Overflow_Number = 10;

const int Max_Input_Size = 51;

int main() {
	char Value[Max_Input_Size];
	char Result[Max_Input_Size];
	int j = 0;
	int k = 0;
	bool Is_Error = false;
	bool Zero_Condition = false;

	while (cin.getline(Value, sizeof(Value))) {
		for (int i = 0; i < Max_Input_Size; i++) {
			Zero_Condition =
				(Value[i] == 'o' || Value[i] == 'O' || Value[i] == '0');

			if (Zero_Condition) {
				Result[j++] = '0';
				if ((j - k) == 1)
					k++;
				continue;
			}

			if (Value[i] == 'l') {
				Result[j++] = '1';
				continue;
			}

			if (Value[i] > '0' && Value[i] <= '9') {
				Result[j++] = Value[i];
				continue;
			}

			if (Value[i] == ',' || Value[i] == ' ') {
				continue;
			}

			if (Value[i] == '\0') {
				Result[j] = '\0';
				break;
			} else {
				Is_Error = true;
				break;
			}
		}

		if ((Is_Error) || ((j - k) > Max_Overflow_Number) || (j == 0)) {
			Is_Error = false;
			printf("error\n");
		} else {
			long long int Int_Result = stoll(Result);

			if (Int_Result > Overflow)
				printf("error\n");
			else
				printf("%lld\n", Int_Result);
		}
		j = 0;
		k = 0;
	}

	return 0;
}
