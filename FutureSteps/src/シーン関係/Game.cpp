#include "Game.h"

Game::Game()
{
	scene_switch = MAIN;
	game_end = false;
}

Game::~Game()
{

}

void Game::UpDate()
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

void Game::Draw()
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

void Game::Reset()
{
	scene_switch = MAIN;
	game_end = false;
}