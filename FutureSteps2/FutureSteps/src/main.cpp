#pragma once
#include "lib/framework.hpp"
#include "Player.h"
#include "Enemy.h"

std::shared_ptr<AppEnv> App::env;

Player player;
Enemy enemy;

int main() {
	
	App::env =
		std::make_shared<AppEnv>(WIDTH, HEIGHT, false, true);

	while (App::env->isOpen()) {

		App::env->begin();

		player.Draw();
		player.Move();
		enemy.Draw();
		enemy.Move();


		App::env->end();
	}
}
