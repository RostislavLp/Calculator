#include "modes.h"
#include <iostream>
#include <vector>

void StandartCalculator()
{
	title("Standart calculator");
	char quit = ' ';
	while (quit != 'Q') {
		cout << "Choose operation:\n1.Sum\n2.Sub\n3.Mult\n4.Division\n5.Mod\n6.Unary plus\n7.Unary minus\n";
		int op;
		cin >> op;
		int x; pair<int, int> p;
		switch (op) {
		case 1: p = GetTwoIntArgs(); cout << "Answer: " << sum(p.first, p.second) << endl; break;
		case 2: p = GetTwoIntArgs(); cout << "Answer: " << sub(p.first, p.second) << endl; break;
		case 3: p = GetTwoIntArgs(); cout << "Answer: " << mult(p.first, p.second) << endl; break;
		case 4: p = GetTwoIntArgs(); cout << "Answer: " << division(p.first, p.second) << endl; break;
		case 5: p = GetTwoIntArgs(); cout << "Answer: " << mod(p.first, p.second) << endl; break;
		case 6: x = GetOneIntArg(); cout << "Answer: " << unaryPlus(x) << endl; break;
		case 7: x = GetOneIntArg(); cout << "Answer: " << unaryMinus(x) << endl; break;
		default: cout << "Invalid operation" << endl;
		}
		cout << "Continue or quit(C to continue, Q to quit)?" << endl;
		cin >> quit;
	}
}

void ProgrammerCalculator()
{
	title("Programmer calculator");
	char quit = ' ';
	while (quit != 'Q') {
		cout << "Choose operation:\n1.BitwiseNot\n2.bitwiseAnd\n3.bitwiseOr\n4.bitwiseExclusiveOr\n5.bitwiseConjunctionNegation\n6.bitwiseDisjunctionNegation\n7.leftShift\n8.rightShift\n9.negation\n10.conjunction\n11.disjunction\n12.exclusiveOr\n13.conjunctionNegation\n14.disjunctionNegation\n";
		int op;
		cin >> op;
		int x; pair<int, int> p;
		bool xBool; pair<bool, bool> pBool;
		switch (op) {
		case 1: x = GetOneIntArg(); cout << "Answer: " << bitwiseNot(x) << endl; break;
		case 2: p = GetTwoIntArgs(); cout << "Answer: " << bitwiseAnd(p.first, p.second) << endl; break;
		case 3: p = GetTwoIntArgs(); cout << "Answer: " << bitwiseOr(p.first, p.second) << endl; break;
		case 4: p = GetTwoIntArgs(); cout << "Answer: " << bitwiseExclusiveOr(p.first, p.second) << endl; break;
		case 5: p = GetTwoIntArgs(); cout << "Answer: " << bitwiseConjunctionNegation(p.first, p.second) << endl; break;
		case 6: p = GetTwoIntArgs(); cout << "Answer: " << bitwiseDisjunctionNegation(p.first, p.second) << endl; break;
		case 7: p = GetTwoIntArgs(); cout << "Answer: " << leftShift(p.first, p.second) << endl; break;
		case 8: p = GetTwoIntArgs(); cout << "Answer: " << rightShift(p.first, p.second) << endl; break;
		case 9: xBool = GetOneBoolArg(); cout << "Answer: " << negat(xBool) << endl; break;
		case 10: pBool = GetTwoBoolArgs(); cout << "Answer: " << conjunct(pBool.first, pBool.second) << endl; break;
		case 11: pBool = GetTwoBoolArgs(); cout << "Answer: " << disjunct(pBool.first, pBool.second) << endl; break;
		case 12: pBool = GetTwoBoolArgs(); cout << "Answer: " << exclusiveOr(pBool.first, pBool.second) << endl; break;
		case 13: pBool = GetTwoBoolArgs(); cout << "Answer: " << conjunctionNegation(pBool.first, pBool.second) << endl; break;
		case 14: pBool = GetTwoBoolArgs(); cout << "Answer: " << disjunctionNegation(pBool.first, pBool.second) << endl; break;
		default: cout << "Invalid operation" << endl;
		}
		cout << "Continue or quit(C to continue, Q to quit)?" << endl;
		cin >> quit;
	}
}

void SdientificCalculator()
{
	title("Scientific calculator");

	char quit = ' ';
	while (quit != 'Q') {
		cout << "Choose operation:\n1.Root\n2.Exponentiation\n3.Trigonometry\n4.Reciprocal\n";
		int op;
		cin >> op;
		switch (op) {
		case 1: Root(); break;
		case 2: Exponentiation(); break;
		case 3: Trigonometry(); break;
		case 4: reciprocal(); break;
		default: cout << "Invalid operation" << endl;
		}
		cout << "Continue or quit(C to continue, Q to quit)?" << endl;
		cin >> quit;
	}
}

void SortingCalculator()
{
	title("Sorting calculator");
	char quit = ' ';
	while (quit != 'Q') {
		int func;
		cout << "Choose sorting function:\n1.Ascending\n2.Descending\n";
		cin >> func;
		cout << "Enter amount of elements: ";
		int n, elem; cin >> n;
		vector<int> vec;
		cout << "Elements(integers): ";
		for (int i = 0; i < n; ++i) {
			cin >> elem;
			vec.push_back(elem);
		}

		if (func == 2) selectionSort(vec);
		else selectionSort(vec, descending);

		for (int i = 0; i < vec.size(); i++) {
			cout << vec[i] << " ";
		}
		cout << "\nContinue or quit(C to continue, Q to quit)?" << endl;
		cin >> quit;
	}
}

void DateCalculator()
{
	title("Date calculator");

	char quit = ' ';	
	while (quit!='Q') {
		Date dt1 = getStartDate();
		Date dt2 = getEndDate();
		
		if (!invalidDates(dt1, dt2)) cout << "Invalid date" << endl;
		else {
			cout << "Difference between two dates is "
				<< getDifference(dt1, dt2) << " days" << endl;
		}
		cout << "Continue or quit(C to continue, Q to quit)?" << endl;
		cin >> quit;
	}
}
