#include "inputOutputFunctions.h"
#include <iostream>
#include <thread>
#include <chrono>
#include <utility>

void title(string title) {
	for (int a = 0; a < 30; a++) {
		cout << "#";
		this_thread::sleep_for(chrono::nanoseconds(5000000));
	}
	cout << "\n        ";
	for (int a = 0; a < title.size(); ++a) {
		cout << title[a];
		this_thread::sleep_for(chrono::nanoseconds(5000000));
	}
	cout << endl;
	for (int a = 0; a < 30; a++) {
		cout << "#";
		this_thread::sleep_for(chrono::nanoseconds(5000000));
	}
	cout << endl;
}

pair<int, int> GetTwoIntArgs() {
	int x1, x2;
	cout << "x1="; cin >> x1;
	cout << "x2="; cin >> x2;
	pair<int, int> p{ x1, x2 };
	return p;
}

pair<bool, bool> GetTwoBoolArgs() {
	bool x1, x2;
	cout << "x1(0 or 1)="; cin >> x1;
	cout << "x2(0 or 1)="; cin >> x2;
	pair<bool, bool> p{ x1, x2 };
	return p;
}

int GetOneIntArg() {
	int x;
	cout << "x="; cin >> x;
	return x;
}

bool GetOneBoolArg() {
	bool x;
	cout << "x(0 or 1)="; cin >> x;
	return x;
}



