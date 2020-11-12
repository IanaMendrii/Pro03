#include "Creatures.h"
#include "game.h"
#include <iostream>
#include <string>
#include <cstdlib> // for rand() and srand()
#include <ctime> // for time()
#include <conio.h> // for _getch()
using namespace std;
int Creatures::getRandomNumber(int min, int max)
	{
		static const double fraction = 1.0 / (static_cast<double>(RAND_MAX)+1.0);
		return static_cast<int>(rand() * fraction * (max - min + 1) + min);
	}
int Creatures::InitHealth()
{
	return HealthInit;
}
int Creatures::GetDamage()
	{
		Damage = getRandomNumber(5, 90);
		return Damage;
	}
	int Creatures::GetHealth()
	{
		Health -= Damage;
		return Health;
	}
	bool Creatures::isDead()
	{
		return Health >= 0;
	}
	
	void Creatures::AttackMonster(Creatures *&Player, Creatures *&Monster)
		{


			cout << "You hit the"; Monster->CreatureName(); Player->Gun();
			cout << "You hit"; Monster->CreatureName(); cout << " for " << Monster->GetDamage() << " HP." << endl;
			int HP = Monster->GetHealth();
			if (Monster->isDead())
			{
				cout << "The"; Monster->CreatureName(); cout << " looks injured. ";
				cout << "The"; Monster->CreatureName(); cout << " has " << HP << " HP now." << endl;
			}
			else
			{

				cout << "You kill the lizardman! ";
				cout << "Congratulations, you've won your fight!" << endl;
				Game::StartGame(Player);

			}
		}
		void Creatures::AttackPlayer(Creatures *&Player, Creatures *&Monster)
		{
			cout << "The"; Monster->CreatureName(); cout << " bites you for " << Player->GetDamage() << " damage! ";
			int HP = Player->GetHealth();
			if (Player->isDead())
			{
				cout << "You have " << HP << " HP now." << endl;
			}
			else
			{
				cout << "You are killed" << endl;
				cout << "Goodbye" << endl;
				system("pause");
				exit(0);
			}
		}
	void Creatures::HealPlayer(Creatures *&Player)
	{
		Player->GetHeal(); cout << "and heal yourself.You have " << Player->Creatures::InitHealth() << " HP now." << endl;
		Health = HealthInit;
	}
	