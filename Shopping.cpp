#include <iostream>
#include <stdio.h>
#include <stdlib.h>

#include "Shopping.h"

using namespace std;

void Shop::PrintList() 
{
	cout << "Voici la liste de courses :" << endl;
	for (const char* a : ItemList)
	{
		cout << " - " << a <<"\n";
	}
}

void Shop::AddItem() 
{
	Prop = "Test";
	while (Prop.empty())
	{
		cout << "Quelle article voulez vous ajouter ?(Entree si vous avez tout mis)";
		cin >> Prop;
		Item = Prop.c_str();
		ItemList.push_back(Item);
	}
}

void Shop::CleanList() 
{
	ItemList.clear();
}

void Shop::Main() {
	Shop::PrintList();
	char answer;
	cout << "Avez vous fait les courses ? (reponse : C)"<< endl;
	cout << "Et est-ce que vous voulez rajouter des articles a votre liste ?(reponse : A)"<< endl;
	cin >> answer;
	if (answer == 'A')
	{
		Shop::AddItem();
	}
	if (answer == 'C')
	{
		Shop::CleanList();
	};
}