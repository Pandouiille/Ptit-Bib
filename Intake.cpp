#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <list>
#include <chrono>
#include <ctime>   

#include "Intake.h"

using namespace std;

void Register::Intake() {
	cout << "Combien de millilitres fait votre biberon ?\n";
	cin >> dose;
	cout << "\n";
	if (dose == "blurp") {
		quantity.pop_back();
		quantity.pop_back();
		quantity.pop_back();
	}

	else {
		quantity.push_back(dose);
	}
}

void Register::Add() {
	Register::Time();
	Register::Print();
}

int Register::Time() {
	auto end = chrono::system_clock::now();
	time_t end_time = chrono::system_clock::to_time_t(end);
	tm = ctime(&end_time);

	quantity.push_back(tm);

	return 0;
}

void Register::Print() {
	cout << "the list is:" << endl;
	for (auto& v : quantity)
		cout << v << "\n";
}