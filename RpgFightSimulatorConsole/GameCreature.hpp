#pragma once
#include "DamageType.hpp"
#include "Weapon.hpp"

namespace GameCreatures
{
	using DamageValue = unsigned int;
	using Health = unsigned int;
	using Stamina = unsigned int;

	class GameCreature
	{
	public:
		GameCreature(Health health, Stamina stamina, Weapon weapon);
		virtual Damage attack();
		virtual void receiveDamage(Damage damage);
		Health showHealth();
		Stamina showStamina();

	private:
		Health health_;
		Stamina stamina_;
		Weapon weapon_;
	};

}