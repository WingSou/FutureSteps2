#pragma once
#include "../src/lib/framework.hpp"

class Character {
public:
	Character();
	void Draw();
	void Move();

	Vec2f getPos();

private:
	Vec2f pos;
	Vec2f size;
	float speed;
};