//Губкин Ростислав, 4 группа 

#include <iostream>
#include "modes.h"
 
void Calculator() {
	while (true) {
		cout << "Choose the mode:\n1.Standart\n2.Programmer\n3.Scientific\n4.Date Calculator\n5.Sorting" << endl;
		int mode;
		cout << "==============================\nMode: ";
		cin >> mode;
		cout << "==============================" << endl;
		switch (mode) {
		case 1: StandartCalculator(); break;
		case 2: ProgrammerCalculator(); break;
		case 3: SdientificCalculator(); break;
		case 4: DateCalculator(); break;
		case 5: SortingCalculator(); break;
		default: cout << "Invalid mode" << endl;
		}
	}
}

int main()
{
	Calculator();
	return 0;
}
