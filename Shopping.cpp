#include <iostream>
#include <stdio.h>
#include <stdlib.h>

#include "Shopping.h"

using namespace std;

void Shop::PrintList()
{
	cout << "Voici la liste de courses :" << endl;
	for (auto v : ItemList)
	{
		cout << " - " << v << "\n";
	}
}

void Shop::AddItem()
{
	int a = 1;
	string Prop;
	while (a == 1)
	{
		cout << "Quelle article voulez vous ajouter ? (Entrer \"STOP\" pour quitter)" << endl;
		cin >> Prop;
		ItemList.push_back(Prop);
		if (Prop == "STOP") {
			ItemList.pop_back();
			break;
		}
	}
	Shop::Main();

}

void Shop::CleanList()
{
	ItemList.clear();
	Shop::Main();
}

void Shop::Main() {
	Shop::PrintList();
	char answer;
	cout << "Avez vous fait les courses ? (reponse : C)" << endl;
	cout << "Et est-ce que vous voulez rajouter des articles a votre liste ?(reponse : A)" << endl;
	cin >> answer;
	if (answer == 'A')
	{
		Shop::AddItem();
	}
	if (answer == 'C')
	{
		Shop::CleanList();
	}
}