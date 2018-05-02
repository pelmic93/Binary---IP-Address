#include <iostream>
using namespace std;

int Oct1(int &result);
int Oct2(int &result);
int Oct3(int &result);
int Oct4(int &result);

int main() {

	int result1;
	int result2;
	int result3;
	int result4;

	cout << "Your First Octet is: " << Oct1(result1) << endl << endl;
	cout << "Your Second Octet is: " << Oct2(result2) << endl << endl;
	cout << "Your Third Octet is: " << Oct3(result3) << endl << endl;
	cout << "Your Fourth Octet is: " << Oct4(result4) << endl << endl << endl;

	cout << "Your IP ADDRESS IS: " << result1 << "." << result2 << "." << result3 << "." << result4 << "-------";


	if (result1 >= 1 && result1 <= 126)
		cout << "This IP Address is in: Class A\n";
	if (result1 == 10)
		cout << "This is a private address.\n";
	if (result1 >= 128 && result1 <= 191)
		cout << "This IP Address is in: Class B\n";
	if (result1 == 172 && result2 >= 16 || result2 <=32)
		cout << "This is a private address.\n";
	if (result1 >= 192 && result1 <= 223)
		cout << "This IP Address is in: Class C\n";
	if (result1 == 192 && result2 == 168)
		cout << "This is a private address.\n";
	if (result1 >= 224 && result1 <= 239)
		cout << "This IP Address is in: Class D\n";
	if (result1, result2, result3, result4 == 255)
		cout << "This is a Broadcast Address\n";


	return 0;
}

int Oct1(int &result) {
	
	int BinArr[8] = { 128, 64, 32, 16, 8, 4, 2, 1 }; //index values may change to 0 if user inputs an integer other than 1
	int Input[8] = {}; //input array to correspond with BinArr array
	int BinaryNum = 1; //increment binary placement number
	
	
	cout << "=============FIRST OCTET==================\n";
	cout << "IF YOU INPUT A NUMBER GREATER THAN 1 OR LESS THAN 0 IT WILL BE 0\n";
	cout << "Enter 8 entries of either 1 or 0: \n\n";

	
	for (int i = 0; i < 8; i++) 
	{
		cout << "Binary " << BinaryNum << ": ";
		cin >> Input[i]; 

		/*
		If a user inputs 1 when requested; will equal to index listed above
		If a user inputs anything other than 1; current index location will change to 0
		BinaryNumm increments after each input
		*/

		if (Input[i] == 1) { 
			Input[BinArr[i]];
			
		}
		if ( Input[i] != 1) { 
		Input[i] = 0;
		BinArr[i] = Input[i];
	
		}
		BinaryNum++;
	}

	//Totals values in BinArr 
	result = (BinArr[0] + BinArr[1] + BinArr[2] + BinArr[3] + BinArr[4] + BinArr[5] + BinArr[6] + BinArr[7]);
		
	return result;
}

int Oct2(int &result) {

	int BinArr[8] = { 128, 64, 32, 16, 8, 4, 2, 1 };
	int Input[8] = {};
	int BinaryNum = 1; //turns


	cout << "=============SECOND OCTET==================\n";
	cout << "IF YOU INPUT A NUMBER GREATER THAN 1 OR LESS THAN 0 IT WILL BE 0\n";
	cout << "Enter 8 entries of either 1 or 0: \n\n";

	for (int i = 0; i < 8; i++)
	{
		cout << "Binary " << BinaryNum << ": ";
		cin >> Input[i]; //input i
		if (Input[i] == 1) {
			Input[BinArr[i]];
		}
		if (Input[i] != 1) {
			Input[i] = 0;
			BinArr[i] = Input[i];
		}
		BinaryNum++;
	}

	result = (BinArr[0] + BinArr[1] + BinArr[2] + BinArr[3] + BinArr[4] + BinArr[5] + BinArr[6] + BinArr[7]);

	return result;
}

int Oct3(int &result) {

	int BinArr[8] = { 128, 64, 32, 16, 8, 4, 2, 1 };
	int Input[8] = {};
	int BinaryNum = 1; //turns


	cout << "=============THIRD OCTET==================\n";
	cout << "IF YOU INPUT A NUMBER GREATER THAN 1 OR LESS THAN 0 IT WILL BE 0\n";
	cout << "Enter 8 entries of either 1 or 0: \n\n";

	for (int i = 0; i < 8; i++)
	{
		cout << "Binary " << BinaryNum << ": ";
		cin >> Input[i]; //input i
		if (Input[i] == 1) {
			Input[BinArr[i]];
		}
		if (Input[i] != 1) {
			Input[i] = 0;
			BinArr[i] = Input[i];
		}
		BinaryNum++;
	}

	result = (BinArr[0] + BinArr[1] + BinArr[2] + BinArr[3] + BinArr[4] + BinArr[5] + BinArr[6] + BinArr[7]);

	return result;
}

int Oct4(int &result) {

	int BinArr[8] = { 128, 64, 32, 16, 8, 4, 2, 1 };
	int Input[8] = {};
	int BinaryNum = 1; //turns

	cout << "=============FOURTH OCTET==================\n";
	cout << "IF YOU INPUT A NUMBER GREATER THAN 1 OR LESS THAN 0 IT WILL BE 0\n";
	cout << "Enter 8 entries of either 1 or 0: \n\n";

	for (int i = 0; i < 8; i++)
	{
		cout << "Binary " << BinaryNum << ": ";
		cin >> Input[i]; //input i
		if (Input[i] == 1) {
			Input[BinArr[i]];
		}
		if (Input[i] != 1) {
			Input[i] = 0;
			BinArr[i] = Input[i];
		}
		BinaryNum++;
	}

	result = (BinArr[0] + BinArr[1] + BinArr[2] + BinArr[3] + BinArr[4] + BinArr[5] + BinArr[6] + BinArr[7]);

	return result;
}