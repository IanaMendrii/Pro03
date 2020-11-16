#include <iostream>
#include <string>
#include <cstdlib> // for rand() and srand()
#include <ctime> // for time()
#include "game.h"
using namespace std;
string name;
void Game::CreateMonster(Creatures *&Monster)
{
	int key = Monster->getRandomNumber(1, 4);
	switch (key)
	{
	case 1:
		Monster = new Human();
		break;
	case 2:
		Monster = new Lizardman();
		break;
	case 3:
		Monster = new Elf();
		break;
	case 4:
		Monster = new Snakeman();
		break;
	default:
		break;
	}
}

void Game::StartFight(Creatures *&Player, Creatures *&Monster)
{
	cout << endl;
	int InitHealthP = Player->InitHealth();
	cout << "You have " << Player->InitHealth() << " HP." << "You encounter a";  Monster->CreatureName();
	cout << "! The";  Monster->CreatureName(); cout << " has " << Monster->InitHealth() << " HP" << endl;
	while (Player->isDead() && Monster->isDead())
	{
		cout << "What do you want to do?" << endl;
		cout << "1-attack" << endl;
		cout << "2- heal" << endl;
		while (true)
		{
			switch (getchar())
			{
			case '1':
				cout << endl;
				Player, Monster->AttackMonster(Player, Monster);
				Player, Monster->AttackPlayer(Player, Monster);


				break;
			case '2':
				cout << endl;
				Player->HealPlayer(Player);
				Player, Monster->AttackPlayer(Player, Monster);
				break;
			default:
				continue;
			}
			break;
		}
	}
}
void Game::StartGame(Creatures *&Player)
{
	Creatures*Monster(NULL);
	CreateMonster(Monster);
	cout << endl;
	cout << "Hello " << name; Player->CreatureName(); cout << "! What do you want to do now?" << endl;
	cout << "1 - fight a monster" << endl;
	cout << "2 - quit the game" << endl;
	while (true)
	{
		switch (getchar())
		{
		case '1':
			StartFight(Player, Monster);
			break;
		case '2':
			cout << "Good luck " << name << endl;
			system("pause");
			exit(0);
			break;
		default:
			continue;
		}
		break;
	}
}
void Game::CreatePlayer(Creatures *&Player)
{
	cout << "what is your name?" << endl;
	getline(cin, name);
	cout << "Hello " << name << "! " << "What type of creature do you want to be today?" << endl;
	cout << "1 - human" << endl;
	cout << "2 - lizardman" << endl;
	cout << "3 - elf" << endl;
	cout << "4 - snakeman" << endl;
	while (true)
	{
		switch (getchar())
		{
		case '1':
			Player = new Human();
			break;
		case '2':
			Player = new Lizardman();
			break;
		case '3':
			Player = new Elf();
			break;
		case '4':
			Player = new Snakeman();
			break;
		default:
			continue;
		}
		break;
	}
	StartGame(Player);
}

