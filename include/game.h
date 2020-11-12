#pragma once
#include "Creatures.h"
#include "human.h"
#include "elf.h"
#include "lizardman.h"
#include "snakeman.h"
#include <string>
class Game
{
public:
	static void CreateMonster(Creatures *&Monster);
	static void StartFight(Creatures *&Player, Creatures *&Monster);
	static void StartGame(Creatures *&Player);
	static void CreatePlayer(Creatures *&Player);
};
