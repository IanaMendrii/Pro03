#include <iostream>
#include "lizardman.h"
using namespace std;
int  Lizardman::InitHealth()
{
	HealthInit = getRandomNumber(8, 10) * 10;
	Health = HealthInit;
	return HealthInit;
}
void Lizardman::CreatureName()
{
	cout << " Lizardman";
}
void Lizardman::Gun()
{
	cout << " with a fire! ";
}
void Lizardman::GetHeal()
{
	cout << "You fall asleep ";
}