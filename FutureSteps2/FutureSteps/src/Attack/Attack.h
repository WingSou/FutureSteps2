#pragma once
#include "../lib/framework.hpp"
#include "../_Character.h"
#include "../_Object.h"

class Attack {
public:
	Attack();
	void Bomb();
	void RocketLancher();
private:
	Vec2f attack_start_pos;
};