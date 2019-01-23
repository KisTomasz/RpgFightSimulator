#pragma once
#include "Damage.hpp"

class Weapon
{
public:
	Weapon(Damage damamge);
	virtual ~Weapon() = default;
	
	Damage damage;
};

