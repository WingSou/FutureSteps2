#include "Title.h"

Title::Title()
{
	scene_switch = MAIN;
	title_end = false;
}

Title::~Title()

{

}

void Title::UpDate()
{
	switch (scene_switch){

	case MUSIC_START:



		break;
	case FADE_IN:



		break;
	case MAIN:



		break;
	case FADE_OUT:



		break;
	default:
		break;
	}
}

void Title::Draw()
{
	switch (scene_switch){

	case MUSIC_START:



		break;
	case FADE_IN:



		break;
	case MAIN:



		break;
	case FADE_OUT:



		break;
	default:
		break;
	}
}

void Title::Reset()
{
	scene_switch = MAIN;
	title_end = false;
}