#include "stdafx.h"
#include "GameCreature.hpp"

namespace GameCreatures{
	GameCreature::GameCreature(Health health, Stamina stamina, Weapon weapon)
		: health_(health)
		, stamina_(stamina)
		, weapon_(weapon)
	{}

	Damage GameCreature::attack()
	{
		return weapon_.damage;
	}

	void GameCreature::receiveDamage(Damage damage)
	{
		if (health_)
		{
			health_ -= health_ > damage.value ? damage.value : health_;
		}
	}

	Health GameCreature::showHealth()
	{
		return health_;
	}

	Stamina GameCreature::showStamina()
	{
		return stamina_;
	}

}