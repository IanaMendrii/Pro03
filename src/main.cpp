#include <iostream>
#include <string>
#include <cstdlib> // for rand() and srand()
#include <ctime> // for time()
#include <conio.h> // for _getch()
#include "game.h"
using namespace std;
int main()
{
	srand(static_cast<unsigned int>(time(0))); // start time for rand
	rand();
	Creatures*Player(NULL);
	Game::CreatePlayer(Player);
	system("pause");
	return 0;
}