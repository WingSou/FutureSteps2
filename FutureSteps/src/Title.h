#pragma once
#include "SceneCommon.h"

class Title 
{
public:

	Title();
	~Title();

	void UpDate();
	void Draw();
	void Reset();

	bool title_end;

private:

	Texture title_logo;
	Media title_bgm;
	ProcessScene scene_switch;

};