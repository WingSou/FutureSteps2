#include "Player.h"


Player::Player(){
	pos = Vec2f(0, 0);
	size = Vec2f(200, 200);
	speed = 10.0f;
}

//描画用
void Player::Draw()
{
	drawFillBox(pos.x(), pos.y(), size.x(), size.y(), Color::cyan);
}


//移動用
void Player::Move()
{
	if (App::env->isPressKey('W')) {
		pos.y() += speed;
	}
	if (App::env->isPressKey('S')) {
		pos.y() -= speed;
	}
	if (App::env->isPressKey('D')) {
		pos.x() += speed;
	}
	if (App::env->isPressKey('A')) {
		pos.x() -= speed;
	}
}

Vec2f Player::getPos()
{
	return pos;
}