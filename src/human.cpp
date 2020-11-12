#include <iostream>
#include "human.h"
using namespace std;
int  Human::InitHealth()
{
	HealthInit = getRandomNumber(8, 12) * 10;
	Health = HealthInit;
	return HealthInit;
}
	void Human::CreatureName()
	{
		cout << " Human";
	}
    void  Human::Gun()
	{
		cout << " with a club! ";
	}
	void  Human::GetHeal()
	{
		cout << "You open a medkit";
	}
