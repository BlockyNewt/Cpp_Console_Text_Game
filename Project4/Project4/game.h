#pragma once
#ifndef GAME
#define GAME

#include <iostream>
#include <string>	

#include "character.h" //ADD MORE SKILLS
#include "travel.h" //GOOD FOR NOW
#include "enemies.h" //ADD MORE ENEMIES AND ENEMY INDEX
#include "inventory.h"

#include <iostream>

class Game
{
private:
	bool menuRun;
	int menuChoice;

	bool battleRun;
	int battleChoice;
	std::string selectEnemy;

	Character character;
	Travel travel;
	
	Inventory inventory;
	Items item;
	Potion potion;
	mpPotion mppotion;
	strPotion strpotion;
	intPotion intpotion;
	dexPotion dexpotion;
	Items* itemPotion = &potion;
	Items* itemMpPotion = &mppotion;
	Items* itemStrPotion = &strpotion;
	Items* itemIntPotion = &intpotion;
	Items* itemDexPotion = &dexpotion;

	Enemies enemies;
	Orc orc;
	OrcShaman orcShaman;
	Wolf wolf;
	Boar boar;
	Bear bear;
	Enemies* enemyOrc = &orc;
	Enemies* enemyOrcShaman = &orcShaman;
	Enemies* enemyWolf = &wolf;
	Enemies* enemyBoar = &boar;
	Enemies* enemyBear = &bear;

	bool selectEnemy1Run;
	


public:
	Game();
	~Game();

	//accessors
	inline const bool& getMenuRun() const { return this->menuRun; }

	//modifiers
	void menu();

	//functions
	void gameStartScreen();
	void gameInit();

	void battleMenu();
	void enemySelect();
	void enemySelectConfirm(std::string selectEnemy, bool& selectEnemy1Run);
	void saveGame();
	void loadGame();
	void gameInfo();

	void mountainPic();
	void tavernPic();
	void battlePic();
	



};
#endif // !GAME
