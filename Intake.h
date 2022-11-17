#pragma once
#include <SDL.h>
#include <list>

using namespace std;

class Register
{
public:
	void Intake();
	void Add();
	int Time();
	void Print();
	int getTime();

private:
	string dose;
	char* tm;
	list < string > quantity;
	int heure;
	int heure_en_seconde;
	int minute;
	int seconde;
};