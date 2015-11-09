#pragma once
#include "SceneCommon.h"

class Game
{
public:
	
	Game();
	~Game();

	void UpDate();
	void Draw();
	void Reset();
	bool game_end;

private:

	Texture game_logo;
	Media game_bgm;
	ProcessScene scene_switch;

};