#pragma warning(disable: 4996)
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <list>
#include <chrono>
#include <ctime>
#include <time.h>

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
	time_t now = time(0);
	struct tm* ltm = localtime(&now);

	heure = ltm->tm_hour;
	heure_en_seconde = ltm->tm_hour * 3600 + ltm->tm_min * 60 + ltm->tm_sec;
	minute = ltm->tm_min;
	seconde = ltm->tm_sec;

	cout << heure << " : ";
	cout << minute << " : ";
	cout << seconde;


	return 0;
}

void Register::Print() {
	cout << "the list is:" << endl;
	for (auto v : quantity)
		cout << v << "\n";
}

int Register::getTime() {

	while (true) {

		system("CLS");
		Time();
		_sleep(1000);

		if (heure_en_seconde % 7200 == 0) {
			Intake();
		}
	}
}
