#include <iostream>
#include <string>
using namespace std;
bool UserInput(string input) {


	if (input.empty()) return false;

	try {
		int number = stoi(input);
	}
	catch (...) {
		return false;
	}
	if (stoi(input) < 0)
	{
		return false;
	}
	return true;

	
}
int CalcRectangleArea(int NumberA, int NumberB) {
	return NumberA * NumberB + 10;
}
int main() {


	string str_input;
	cout << "input height A" << endl;
	getline(cin, str_input);
	while (!UserInput(str_input)) {
		cout << "input height A" << endl;
		getline(cin, str_input);
	}
	int NumberA = stoi(str_input);
	cout << "input weight B" << endl;
	getline(cin, str_input);
	while (!UserInput(str_input)) {
		cout << "input weight B" << endl;
		getline(cin, str_input);
	}
	int NumberB = stoi(str_input);
	int RectangleArea = CalcRectangleArea(NumberA, NumberB);
	cout << "Area of Rectangle is" << RectangleArea << endl;
}