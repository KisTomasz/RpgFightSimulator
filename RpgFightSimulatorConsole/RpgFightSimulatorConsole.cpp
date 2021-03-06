// RpgFightSimulatorConsole.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "GameCreature.hpp"
#include "Weapon.hpp"


namespace {

	bool isCreatureAlive(GameCreatures::GameCreature creature)
	{
		return creature.showHealth();
	}
}

int main()
{
	Weapon sword{Damage{12, DamageType::Physic}};
	GameCreatures::GameCreature creature1{100, 100, sword};

	Weapon fireball{Damage{8, DamageType::Magic}};
	GameCreatures::GameCreature creature2{100, 100, fireball};

	unsigned int roundsMaxCount{ 100 };
	auto roundNumber = 0;

	while (isCreatureAlive(creature1) && isCreatureAlive(creature2))
	{
		++roundNumber;
		
		std::cout << std::endl << std::endl;
		std::cout << "round: " << roundNumber << std::endl
			<< "first creature health = " << creature1.showHealth() << std::endl
			<< "first creature stamina = " << creature1.showStamina() << std::endl
			<< std::endl
			<< "second creature health = " << creature2.showHealth() << std::endl
			<< "second creature stamina = " << creature2.showStamina() << std::endl;

		creature1.receiveDamage(creature2.attack());
		creature2.receiveDamage(creature1.attack());

		if (roundNumber > roundsMaxCount)
		{
			break; // it is done for safety
		}
	}

	system("Pause");

    return 0;
}

