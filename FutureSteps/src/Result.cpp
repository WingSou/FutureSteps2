#include "Result.h"

Result::Result()
{
	scene_switch = MAIN;
	result_end = false;
}

Result::~Result()
{

}

void Result::UpDate()
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

void Result::Draw()
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

void Result::Reset()
{
	scene_switch = MAIN;
	result_end = false;
}