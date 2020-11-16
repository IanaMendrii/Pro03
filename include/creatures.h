#pragma once
class Creatures
{
protected:
	int HealthInit;
	int Health;
	int Damage;
public:
	int getRandomNumber(int min, int max);
	virtual int InitHealth();
	int GetDamage();
	int GetHealth();
	bool isDead();
	virtual void CreatureName(){};
	virtual void Gun(){};
	virtual void GetHeal(){};
	void AttackMonster(Creatures *&Player, Creatures *&Monster);
	void AttackPlayer(Creatures *&Player, Creatures *&Monster);
	void HealPlayer(Creatures *&Player);
};