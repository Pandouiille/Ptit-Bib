#include <iostream>
#include <vector>
#include <stdio.h>
#include <stdlib.h>

#include "Shopping.h"

using namespace std;

void Shop::PrintList() {
	cout << "Voici la liste de courses :" << endl;
	for (const char* a : ItemList)
	{
		cout << " - " << a <<"\n";
	}
}

void Shop::AddItem() {

}