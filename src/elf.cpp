#include "elf.h"
#include <iostream>
using namespace std;
int Elf::InitHealth()
{
	HealthInit = getRandomNumber(10, 12)*10;
	Health = HealthInit;
	return HealthInit;
}
void Elf::CreatureName()
{
	cout << " Elf";
}
void Elf::Gun()
{
	cout << " with a magic rod! ";
}
void Elf::GetHeal()
{
	cout << "You drink live wather ";
}