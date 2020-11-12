#include <iostream>
#include "snakeman.h"
using namespace std;
int  Snakeman::InitHealth()
{
	HealthInit = getRandomNumber(10, 13) * 10;
	Health = HealthInit;
	return HealthInit;
}
void Snakeman::CreatureName()
{
	cout << " Snakeman";
}
void Snakeman::Gun()
{
	cout << " with a teeth! ";
}
void Snakeman::GetHeal()
{
	cout << "You use magic cristal ";
}