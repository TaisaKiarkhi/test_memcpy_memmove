#include <iostream>
#include <string.h>
#include <array>
using namespace std;
int main() {

	char names[]{ "Nick Adele Tom Kate" };
	char adele[5];

	memcpy(adele, names + 5, sizeof(char) * 5);
	for (int i{ 0 }; i < size(adele); i++) {
		cout << adele[i];
	}
	cout << endl << "=============" << endl;
	//wanna Nick Kate Tom Kate
	memmove(names + 5, names + 14, sizeof(char) * 4);
	for (int i{ 0 }; i < size(names); i++) {
		cout << names[i];
	}
	cout << endl << endl;


	//task from the class
	char arr[12]{ "Hello World" };
	char reverse[12];


	memcpy(reverse, arr + 6, sizeof(char) * 5);
	reverse[5] = ' ';
	memcpy(reverse + 6, arr, sizeof(char) * 6); //sizeof is multiplied by six because of the term. zero
	for (int i{ 0 }; i < size(reverse); i++) {
		cout << *(reverse + i);
	}

	return 0;
}