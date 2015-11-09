﻿#pragma once
#include "../src/lib/framework.hpp"

class CharacterObject {
protected:

	CharacterObject();
	void Draw();
	void Move();

	Vec2f getPos();

	Vec2f pos;   //位置
	Vec2f size;  //サイズ
	float speed; //移動

};

