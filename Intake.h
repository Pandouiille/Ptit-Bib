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
	char* tm{};

private:
	string dose;
	list < string > quantity;
};