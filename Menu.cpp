#include <iostream>
#include <stdio.h>
#include <stdlib.h>

#include "Menu.h"
#include "Intake.h"
#include "Shopping.h"
using namespace std;

void Menu::both() {
	Register intake;
	Shop shopping;
	cout << "Qu'est ce que vous voulez faire ? (choissisez avec 1 ou 2)\n";
	cin >> var;
	if (var == 1) {
		intake.Intake();
		intake.Add();
		
	}

	if (var == 2) {
		shopping.Main();
	}
}