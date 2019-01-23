#pragma once
#include "DamageType.hpp"

class Damage
{
public:
	using DamageValue = unsigned int;
	Damage(DamageValue value, DamageType type);
	virtual ~Damage() = default;
	DamageValue value;
	DamageType type;
};

