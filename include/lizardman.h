#pragma once
#include "Creatures.h"
class Lizardman : public Creatures
{
public:
	virtual int InitHealth()override;
	virtual void CreatureName()override;
	virtual void Gun()override;
	virtual void GetHeal()override;
};