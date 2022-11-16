#pragma once
#include <SDL.h>
#include <vector>

using namespace std;

class Shop
{
public:
	void PrintList();
	void AddItem();
	vector<const char*> ItemList = {"aled", "osekour"};

private:

};
