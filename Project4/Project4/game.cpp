#include "game.h"

#include <iostream>
#include <chrono>
#include <thread>
#include <fstream>
#include <algorithm>
#include <cctype>


Game::Game()
{
	menuRun = true;
	menuChoice = 10;

	battleRun = true;
	battleChoice = 10;
}

Game::~Game()
{

}

void Game::gameStartScreen()
{
	std::string loadOrPlayChoice;
	bool gameStartScreenRun = true;
	while (gameStartScreenRun == true)
	{
		mountainPic();

		std::cout << "___________________________________________________________" << std::endl;
		std::cout << std::endl;
		std::cout << "\t\t" << "PLAY" << "\t";
		std::cout << "LOAD" << "\t";
		std::cout << "EXIT" << "\t";
		std::cout << "INFO" << std::endl;
		std::cout << "___________________________________________________________" << std::endl;

		std::cin >> loadOrPlayChoice;

		if (loadOrPlayChoice == "play")
		{
			gameStartScreenRun = false;
			menuRun = true;

			gameInit();
		}
		else if (loadOrPlayChoice == "load")
		{
			system("cls");
			menuRun = true;
			loadGame();
			gameStartScreenRun = false;
		}
		else if (loadOrPlayChoice == "exit")
		{
			system("cls");
			std::cout << "EXITING..." << std::endl;
			menuRun = false;
			gameStartScreenRun = false;
		}
		else if (loadOrPlayChoice == "info")
		{
			system("cls");
			gameInfo();
			system("pause");
			menuRun = false;
			gameStartScreenRun = true;
		}
		else
		{
			menuRun = true;
		}
	}
}

void Game::gameInfo()
{
	std::cout << "___________________________________________________________" << std::endl;
	std::cout << "--------------------<WINDOW SETTINGS>----------------------" << std::endl;
	std::cout << "YOU WILL NEED TO CHANGE YOUR CMD WINDOW SETTINGS IN ORDER TO PLAY THIS GAME AS IT IS INTENDED TO BE PLAYED." << std::endl;
	std::cout << std::endl;
	std::cout << "1. RIGHT CLICK THE WINDOW PANEL AND GOTO PROPERTIES." << std::endl;
	std::cout << "2. GOTO THE 'FONT TAB'. " << std::endl;
	std::cout << "3. FONT SIZE: 24" << std::endl;
	std::cout << "4. FONT: CONSOLAS" << std::endl;
	std::cout << "5. GOTO THE 'LAYOUT' TAB." << std::endl;
	std::cout << "6. WINDOW WIDTH: 60" << std::endl;
	std::cout << "6. WINDOW HEIGHT: 25" << std::endl;
	std::cout << "7. GOTO THE 'COLORS' TAB." << std::endl;
	std::cout << "7. CHANGE COLOR TO LIKING" << std::endl;
	std::cout << "___________________________________________________________" << std::endl;
	std::cout << "-----------------------<GAMEPLAY>--------------------------" << std::endl;
	std::cout << "I THINK IT'S STRAIGHT FOWARD, BUT THERE MAY BE SOME THINGS \nTHAT DON'T WORK OR AN ENEMY THAT YOU MAY NOT BE ABLE TO \nKILL. BE SURE TO SAVE A LOT. OTHERWISE HAVE FUN!" << std::endl;
	std::cout << "___________________________________________________________" << std::endl;
	std::cout << "-----------------------<CREDITS>---------------------------" << std::endl;
	std::cout << "WRITTEN BY: TOMMY HARBISON" << std::endl;
	std::cout << "SOFTWARE USED: MICROSOFT VISUAL STUDIO 2019" << std::endl;
	std::cout << "PROGRAMMED IN C++" << std::endl;
	std::cout << "___________________________________________________________" << std::endl;
}

void Game::gameInit()
{
		character.createName();
		system("cls");

		using namespace std::this_thread;
		using namespace std::chrono;
		
		inventory.inventoryCreate();
		sleep_for(milliseconds(125));
		travel.map1Init();
		sleep_for(milliseconds(125));
		travel.map2Init();
		sleep_for(milliseconds(125));
		travel.map3Init();
		sleep_for(milliseconds(125));
		travel.map4Init();
		sleep_for(milliseconds(125));
		travel.map5Init();
		sleep_for(milliseconds(125));
		travel.map6Init();
		sleep_for(milliseconds(125));
		enemyOrc->enemyLoad();
		sleep_for(milliseconds(125));
		enemyOrcShaman->enemyLoad();
		sleep_for(milliseconds(125));
		enemyBoar->enemyLoad();
		sleep_for(milliseconds(125));
		enemyWolf->enemyLoad();
		sleep_for(milliseconds(125));
		enemyBear->enemyLoad();
		sleep_for(milliseconds(125));
		itemPotion->itemLoad();
		sleep_for(milliseconds(125));
		itemMpPotion->itemLoad();
		sleep_for(milliseconds(125));
		itemStrPotion->itemLoad();
		sleep_for(milliseconds(125));
		itemIntPotion->itemLoad();
		sleep_for(milliseconds(125));
		itemDexPotion->itemLoad();
}

void Game::menu()
{
	system("cls");

	while (menuRun == true)
	{
		system("cls");

		tavernPic();
		
		std::cout << "___________________________________________________________" << std::endl;
		std::cout << std::endl;
		std::cout << "\t" << "1. STATS" << "\t";
		std::cout << "2. TRAVEL" << "\t";
		std::cout << "4. SAVE" << std::endl;
		std::cout << "\t\t\t" << "3. BATTLE" << "\t";
		std::cout << "5. EXIT" << std::endl;
		std::cout << "___________________________________________________________" << std::endl;
		std::cout << "> ";
		std::cin >> menuChoice;
		
		switch (menuChoice)
		{
		case 1:
			system("cls");
			menuRun = true;
			character.printStats();

			break;
		case 2:
			system("cls");
			menuRun = true;
			travel.mapMenu();

			break;
		case 3:
			system("cls");
			menuRun = true;
			battleMenu();

			break;
		case 4:
			system("cls");
			menuRun = true;
			saveGame();

			break;
		case 5:
			system("cls");
			menuRun = false;
			std::cout << "EXITING..." << std::endl;

			break;
		default:
			menuRun = true;
			std::cout << "UNKNOWN COMMAND!" << std::endl;

			break;
		}
	}
}

void Game::tavernPic()
{
	std::cout << " __________________________________________________________" << std::endl;
	std::cout << "|                                                          |" << std::endl;
	std::cout << "|    ___________                            ___________    |" << std::endl;
	std::cout << "|   |     |     |                          |     |     |   |" << std::endl;
	std::cout << "|   |     |     |                          |     |     |   |" << std::endl;
	std::cout << "|   |     |     |                          |     |     |   |" << std::endl;
	std::cout << "|   |     |     |       ___________        |     |     |   |" << std::endl;
	std::cout << "|   |-----|-----|      / _________ \\       |-----|-----|   |" << std::endl;
	std::cout << "|   |     |     |     | |         | |      |     |     |   |" << std::endl;
	std::cout << "|   |     |     |     | |         | |      |     |     |   |" << std::endl;
	std::cout << "|   |     |     |     | |        .| |      |     |     |   |" << std::endl;
	std::cout << "|   |     |     |     | |         | |      |     |     |   |" << std::endl;
	std::cout << "|   |_____|_____|     | |         | |      |_____|_____|   |" << std::endl;
	std::cout << "|                     | |_________| |                      |" << std::endl;
	std::cout << "|                     |/__________\\ |                      |" << std::endl;
	std::cout << "|                     |_____________|                      |" << std::endl;
	std::cout << "|                    |_______________|                     |" << std::endl;
	std::cout << "|___________________|_________________|____________________|" << std::endl;
	std::cout << std::endl;
}

void Game::mountainPic()
{
	std::cout << "  _____    __________                         " << std::endl;
	std::cout << " /     \\       |         /|            / \\" << std::endl;
	std::cout << "|       |      |        / |           /   \\" << std::endl;
	std::cout << "|       |      |       /  |          /     \\" << std::endl;
	std::cout << " \\_____/       |      /   |         /       \\" << std::endl;
	std::cout << "|              |     /____|_       /         \\" << std::endl;
	std::cout << "|              |          |       /           \\" << std::endl;
	std::cout << "|         \\___/           |      /             \\" << std::endl;
	std::cout << "         /\\                     /               \\" << std::endl;
	std::cout << "        /  \\                   /                 \\" << std::endl;
	std::cout << "       /    \\      /\\         /                   \\" << std::endl;
	std::cout << "      /      \\    /  \\       /                     \\" << std::endl;
	std::cout << "     /        \\  /    \\     /                       \\" << std::endl;
	std::cout << "    /          \\/      \\   /                         \\" << std::endl;
	std::cout << "   /            \\       \\ /                           \\" << std::endl;
	std::cout << "  /              \\       /                             \\" << std::endl;
	std::cout << " /                \\     /                               \\" << std::endl;
	std::cout << "/                  \\                                     \\" << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
}


//BATTLE STUFF------------------------------------------
void Game::battleMenu()
{
	battleRun = true;

	while (battleRun == true)
	{
		system("cls");
		battlePic();

		std::cout << "___________________________________________________________" << std::endl;
		std::cout << std::endl;
		std::cout << "\t" << "1. BATTLE" << "\t";
		std::cout << "2. INVENTORY" << "\t";
		std::cout << "3. MAIN MENU" << std::endl;
		std::cout << std::endl;
		std::cout << "___________________________________________________________" << std::endl;
		std::cout << "> ";

		std::cin >> battleChoice;
		switch (battleChoice)
		{
		case 1:
			battleRun = true;
			enemySelect();

			break;
		case 2:
			battleRun = true;
			system("cls");
			inventory.getItemDescription();
			
			system("pause");
			break;
		case 3:
			battleRun = false;
			std::cout << "EXITING..." << std::endl;
			system("cls");
			break;
		default:
			battleRun = true;
			std::cout << "UNKNOWN COMMAND" << std::endl;

			break;
		}
	}
}

void Game::enemySelect()
{
	system("cls");
	if (travel.getMap1Run() == true)
	{
		selectEnemy1Run = true;
		while (selectEnemy1Run == true)
		{
			system("cls");
			std::cout << "___________________________________________________________" << std::endl;
			std::cout << "--------NAME----------LEVEL-----------HEALTH---------------" << std::endl;
			std::cout << "\t" << boar.getName() << "\t\t" << boar.getLevel() << "\t\t" << boar.getHpMax() << std::endl;
			std::cout << "\t" << wolf.getName() << "\t\t" << wolf.getLevel() << "\t\t" << wolf.getHpMax() << std::endl;
			std::cout << "\t" << bear.getName() << "\t\t" << bear.getLevel() << "\t\t" << bear.getHpMax() << std::endl;
			std::cout << std::endl;
			std::cout << "___________________________________________________________" << std::endl;
			std::cout << "SELECT: ";
			//std::cin.ignore();
			std::getline(std::cin, selectEnemy);
			std::cout << selectEnemy << std::endl;
			if (selectEnemy != "")
			{
				enemySelectConfirm(selectEnemy, selectEnemy1Run);
			}
		}
	}
	else if (travel.getMap2Run() == true)
	{
		selectEnemy1Run = true;
		while (selectEnemy1Run == true)
		{
			system("cls");
			std::cout << "___________________________________________________________" << std::endl;
			std::cout << "--------NAME----------LEVEL----------HEALTH----------------" << std::endl;
			std::cout << "\t" << orcShaman.getName() << "\t" << orcShaman.getLevel() << "\t\t" << orcShaman.getHpMax() << std::endl;
			std::cout << "\t" << orc.getName() << "\t\t" << orc.getLevel() << "\t\t" << orc.getHpMax() << std::endl;
			std::cout << std::endl;
			std::cout << "___________________________________________________________" << std::endl;
			std::cout << "SELECT: ";
			//std::cin.ignore();
			std::getline(std::cin, selectEnemy);
			if (selectEnemy != "")
			{
				enemySelectConfirm(selectEnemy, selectEnemy1Run);
			}
		}
	}
	else if (travel.getMap3Run() == true)
	{
		selectEnemy1Run = true;
		while (selectEnemy1Run == true)
		{
			system("cls");
			std::cout << "___________________________________________________________" << std::endl;
			std::cout << "--------NAME----------LEVEL----------HEALTH----------------" << std::endl;
			std::cout << "\t" << orc.getName() << "\t\t" << orc.getLevel() << "\t\t" << orc.getHpMax() << std::endl;
			std::cout << "\t" << orcShaman.getName() << "\t" << orcShaman.getLevel() << "\t\t" << orcShaman.getHpMax() << std::endl;
			std::cout << std::endl;
			std::cout << "___________________________________________________________" << std::endl;
			std::cout << "SELECT: ";
			std::cin.ignore();
			std::getline(std::cin, selectEnemy);
			if (selectEnemy != "")
			{
				enemySelectConfirm(selectEnemy, selectEnemy1Run);
			}
		}
	}
	else if (travel.getMap4Run() == true)
	{
		selectEnemy1Run = true;
		while (selectEnemy1Run == true)
		{
			system("cls");
			std::cout << "___________________________________________________________" << std::endl;
			std::cout << "--------NAME----------LEVEL----------HEALTH----------------" << std::endl;
			std::cout << "\t" << orc.getName() << "\t\t" << orc.getLevel() << "\t\t" << orc.getHpMax() << std::endl;
			std::cout << "\t" << orcShaman.getName() << "\t" << orcShaman.getLevel() << "\t\t" << orcShaman.getHpMax() << std::endl;
			std::cout << std::endl;
			std::cout << "___________________________________________________________" << std::endl;
			std::cout << "SELECT: ";
			std::cin.ignore();
			std::getline(std::cin, selectEnemy);
			if (selectEnemy != "")
			{
				enemySelectConfirm(selectEnemy, selectEnemy1Run);
			}
		}
	}
	else if (travel.getMap5Run() == true)
	{
		selectEnemy1Run = true;
		while (selectEnemy1Run == true)
		{
			system("cls");
			std::cout << "___________________________________________________________" << std::endl;
			std::cout << "--------NAME----------LEVEL----------HEALTH----------------" << std::endl;
			std::cout << "\t" << orc.getName() << "\t\t" << orc.getLevel() << "\t\t" << orc.getHpMax() << std::endl;
			std::cout << "\t" << orcShaman.getName() << "\t" << orcShaman.getLevel() << "\t\t" << orcShaman.getHpMax() << std::endl;
			std::cout << std::endl;
			std::cout << "___________________________________________________________" << std::endl;
			std::cout << "SELECT: ";
			std::cin.ignore();
			std::getline(std::cin, selectEnemy);
			if (selectEnemy != "")
			{
				enemySelectConfirm(selectEnemy, selectEnemy1Run);
			}
		}
	}
	else if (travel.getMap6Run() == true)
	{
		selectEnemy1Run = true;
		while (selectEnemy1Run == true)
		{
			system("cls");
			std::cout << "___________________________________________________________" << std::endl;
			std::cout << "--------NAME----------LEVEL----------HEALTH----------------" << std::endl;
			std::cout << "\t" << orc.getName() << "\t\t" << orc.getLevel() << "\t\t" << orc.getHpMax() << std::endl;
			std::cout << "\t" << orcShaman.getName() << "\t" << orcShaman.getLevel() << "\t\t" << orcShaman.getHpMax() << std::endl;
			std::cout << std::endl;
			std::cout << "___________________________________________________________" << std::endl;
			std::cout << "SELECT: ";
			std::cin.ignore();
			std::getline(std::cin, selectEnemy);
			if (selectEnemy != "")
			{
				enemySelectConfirm(selectEnemy, selectEnemy1Run);
			}
		}
	}
	else
	{
		std::cout << ">ERROR - NO MAP SELECTED." << std::endl;
		std::cout << "___________________________________________________________" << std::endl;
		system("pause");
	}
}

void Game::enemySelectConfirm(std::string selectEnemy, bool& selectEnemy1Run)
{
	if (selectEnemy == "wolf")
	{
		enemyWolf->startBattle(this->menuRun, this->battleRun, character.getProfession(), character.getName(), character.getLevel(), character.getExp(), character.getExpMax(), character.getHp(), character.getHpMax(), character.getMp(), character.getMpMax(), character.getStr(), character.getIntel(), character.getDex(), character.getMySkill1Name(), character.getMySkill1Dmg(), character.getMySkill1MpUse(), character.getMySkill2Name(), character.getMySkill2Dmg(), character.getMySkill2MpUse(), character.getMySkill3Name(), character.getMySkill3Dmg(), character.getMySkill3MpUse(), character.getSkill1Name(), character.getSkill1MpUse(), character.getSkill1Dmg(), character.getSkill2Name(), character.getSkill2MpUse(), character.getSkill2Dmg(), character.getSkill3Name(), character.getSkill3MpUse(), character.getSkill3Dmg(), character.getSkill4Name(), character.getSkill4MpUse(), character.getSkill4Dmg(), character.getSkill5Name(), character.getSkill5MpUse(), character.getSkill5Dmg(), character.getSkill6Name(), character.getSkill6MpUse(), character.getSkill6Dmg(), character.getSkill7Name(), character.getSkill7MpUse(), character.getSkill7Dmg(), character.getSkill8Name(), character.getSkill8MpUse(), character.getSkill8Dmg(), character.getSkill9Name(), character.getSkill9MpUse(), character.getSkill9Dmg(), potion.getName(), mppotion.getName(), strpotion.getName(), intpotion.getName(), dexpotion.getName(), inventory);

		selectEnemy1Run = false;
	}
	else if (selectEnemy == "boar")
	{
		enemyBoar->startBattle(this->menuRun, this->battleRun, character.getProfession(), character.getName(), character.getLevel(), character.getExp(), character.getExpMax(), character.getHp(), character.getHpMax(), character.getMp(), character.getMpMax(), character.getStr(), character.getIntel(), character.getDex(), character.getMySkill1Name(), character.getMySkill1Dmg(), character.getMySkill1MpUse(), character.getMySkill2Name(), character.getMySkill2Dmg(), character.getMySkill2MpUse(), character.getMySkill3Name(), character.getMySkill3Dmg(), character.getMySkill3MpUse(), character.getSkill1Name(), character.getSkill1MpUse(), character.getSkill1Dmg(), character.getSkill2Name(), character.getSkill2MpUse(), character.getSkill2Dmg(), character.getSkill3Name(), character.getSkill3MpUse(), character.getSkill3Dmg(), character.getSkill4Name(), character.getSkill4MpUse(), character.getSkill4Dmg(), character.getSkill5Name(), character.getSkill5MpUse(), character.getSkill5Dmg(), character.getSkill6Name(), character.getSkill6MpUse(), character.getSkill6Dmg(), character.getSkill7Name(), character.getSkill7MpUse(), character.getSkill7Dmg(), character.getSkill8Name(), character.getSkill8MpUse(), character.getSkill8Dmg(), character.getSkill9Name(), character.getSkill9MpUse(), character.getSkill9Dmg(), potion.getName(), mppotion.getName(), strpotion.getName(), intpotion.getName(), dexpotion.getName(), inventory);

		selectEnemy1Run = false;
	}
	else if (selectEnemy == "bear")
	{
		enemyBear->startBattle(this->menuRun, this->battleRun, character.getProfession(), character.getName(), character.getLevel(), character.getExp(), character.getExpMax(), character.getHp(), character.getHpMax(), character.getMp(), character.getMpMax(), character.getStr(), character.getIntel(), character.getDex(), character.getMySkill1Name(), character.getMySkill1Dmg(), character.getMySkill1MpUse(), character.getMySkill2Name(), character.getMySkill2Dmg(), character.getMySkill2MpUse(), character.getMySkill3Name(), character.getMySkill3Dmg(), character.getMySkill3MpUse(), character.getSkill1Name(), character.getSkill1MpUse(), character.getSkill1Dmg(), character.getSkill2Name(), character.getSkill2MpUse(), character.getSkill2Dmg(), character.getSkill3Name(), character.getSkill3MpUse(), character.getSkill3Dmg(), character.getSkill4Name(), character.getSkill4MpUse(), character.getSkill4Dmg(), character.getSkill5Name(), character.getSkill5MpUse(), character.getSkill5Dmg(), character.getSkill6Name(), character.getSkill6MpUse(), character.getSkill6Dmg(), character.getSkill7Name(), character.getSkill7MpUse(), character.getSkill7Dmg(), character.getSkill8Name(), character.getSkill8MpUse(), character.getSkill8Dmg(), character.getSkill9Name(), character.getSkill9MpUse(), character.getSkill9Dmg(), potion.getName(), mppotion.getName(), strpotion.getName(), intpotion.getName(), dexpotion.getName(), inventory);

		selectEnemy1Run = false;
	}
	else if (selectEnemy == "orc")
	{
		enemyOrc->startBattle(this->menuRun, this->battleRun, character.getProfession(), character.getName(), character.getLevel(), character.getExp(), character.getExpMax(), character.getHp(), character.getHpMax(), character.getMp(), character.getMpMax(), character.getStr(), character.getIntel(), character.getDex(), character.getMySkill1Name(), character.getMySkill1Dmg(), character.getMySkill1MpUse(), character.getMySkill2Name(), character.getMySkill2Dmg(), character.getMySkill2MpUse(), character.getMySkill3Name(), character.getMySkill3Dmg(), character.getMySkill3MpUse(), character.getSkill1Name(), character.getSkill1MpUse(), character.getSkill1Dmg(), character.getSkill2Name(), character.getSkill2MpUse(), character.getSkill2Dmg(), character.getSkill3Name(), character.getSkill3MpUse(), character.getSkill3Dmg(), character.getSkill4Name(), character.getSkill4MpUse(), character.getSkill4Dmg(), character.getSkill5Name(), character.getSkill5MpUse(), character.getSkill5Dmg(), character.getSkill6Name(), character.getSkill6MpUse(), character.getSkill6Dmg(), character.getSkill7Name(), character.getSkill7MpUse(), character.getSkill7Dmg(), character.getSkill8Name(), character.getSkill8MpUse(), character.getSkill8Dmg(), character.getSkill9Name(), character.getSkill9MpUse(), character.getSkill9Dmg(), potion.getName(), mppotion.getName(), strpotion.getName(), intpotion.getName(), dexpotion.getName(), inventory);

		selectEnemy1Run = false;
	}
	else if (selectEnemy == "orc shaman")
	{
		enemyOrcShaman->startBattle(this->menuRun, this->battleRun, character.getProfession(), character.getName(), character.getLevel(), character.getExp(), character.getExpMax(), character.getHp(), character.getHpMax(), character.getMp(), character.getMpMax(), character.getStr(), character.getIntel(), character.getDex(), character.getMySkill1Name(), character.getMySkill1Dmg(), character.getMySkill1MpUse(), character.getMySkill2Name(), character.getMySkill2Dmg(), character.getMySkill2MpUse(), character.getMySkill3Name(), character.getMySkill3Dmg(), character.getMySkill3MpUse(), character.getSkill1Name(), character.getSkill1MpUse(), character.getSkill1Dmg(), character.getSkill2Name(), character.getSkill2MpUse(), character.getSkill2Dmg(), character.getSkill3Name(), character.getSkill3MpUse(), character.getSkill3Dmg(), character.getSkill4Name(), character.getSkill4MpUse(), character.getSkill4Dmg(), character.getSkill5Name(), character.getSkill5MpUse(), character.getSkill5Dmg(), character.getSkill6Name(), character.getSkill6MpUse(), character.getSkill6Dmg(), character.getSkill7Name(), character.getSkill7MpUse(), character.getSkill7Dmg(), character.getSkill8Name(), character.getSkill8MpUse(), character.getSkill8Dmg(), character.getSkill9Name(), character.getSkill9MpUse(), character.getSkill9Dmg(), potion.getName(), mppotion.getName(), strpotion.getName(), intpotion.getName(), dexpotion.getName(), inventory);

		selectEnemy1Run = false;
	}
	else
	{
		std::cout << "ERROR: " << selectEnemy << " IS AN UNKNOWN ENEMY." << std::endl;
		std::cout << "___________________________________________________________" << std::endl;
		system("pause");
		system("cls");
	}
}

void Game::saveGame()
{
	std::ofstream theFile("mySave.txt");
	
	int potionStock;
	int mpPotionStock;
	int strPotionStock;
	int intPotionStock;
	int dexPotionStock;

	
	theFile << character.getName() << ' ' << character.getProfession() << ' ' << character.getLevel() << ' ' << character.getExp() << ' ' << character.getExpMax() << ' ' << character.getHp() << ' ' << character.getHpMax() << ' ' << character.getMp() << ' ' << character.getMpMax() << ' ' << character.getStr() << ' ' << character.getIntel() << ' ' << character.getDex() << ' ' << character.getMySkill1Name() << ' ' << character.getMySkill1Dmg() << ' ' << character.getMySkill1MpUse() << ' ' << character.getMySkill2Name() << ' ' << character.getMySkill2Dmg() << ' ' << character.getMySkill2MpUse() << ' ' << character.getMySkill3Name() << ' ' << character.getMySkill3Dmg() << ' ' << character.getMySkill3MpUse() << ' ' << character.getSkill1Dmg() << ' ' << character.getSkill2Dmg() << ' ' << character.getSkill3Dmg() << ' ' << character.getSkill4Dmg() << ' ' << character.getSkill5Dmg() << ' ' << character.getSkill6Dmg() << ' ' << character.getSkill7Dmg() << ' ' << character.getSkill8Dmg() << ' ' << character.getSkill9Dmg() << ' ' << inventory.getPotionStock() << ' ' << inventory.getMpPotionStock() << ' ' << inventory.getStrPotionStock() << ' ' << inventory.getIntPotionStock() << ' ' << inventory.getDexPotionStock() <<  std::endl;

	theFile.close();
	system("cls");
	std::cout << "GAME WAS SAVED." << std::endl;
	system("pause");
}
//WORK ON THIS

void Game::loadGame()
{
	

	

	std::fstream theFile;
	theFile.open("mySave.txt");
	if (theFile.is_open())
	{
		std::string name;
		std::string profession;
		int level;
		int exp;
		int expMax;
		int hp;
		int hpMax;
		int mp;
		int mpMax;
		int str;
		int intel;
		int dex;
		std::string mySkill1Name;
		int mySkill1Dmg;
		int mySkill1MpUse;
		std::string mySkill2Name;
		int mySkill2Dmg;
		int mySkill2MpUse;
		std::string mySkill3Name;
		int mySkill3Dmg;
		int mySkill3MpUse;

		int skill1Dmg;
		int skill2Dmg;
		int skill3Dmg;
		int skill4Dmg;
		int skill5Dmg;
		int skill6Dmg;
		int skill7Dmg;
		int skill8Dmg;
		int skill9Dmg;

		int potionStock;
		int mpPotionStock;
		int strPotionStock;
		int intPotionStock;
		int dexPotionStock;

		theFile >> name >> profession >> level >> exp >> expMax >> hp >> hpMax >> mp >> mpMax >> str >> intel >> dex >> mySkill1Name >> mySkill1Dmg >> mySkill1MpUse >> mySkill2Name >> mySkill2Dmg >> mySkill2MpUse >> mySkill3Name >> mySkill3Dmg >> mySkill3MpUse >> skill1Dmg >> skill2Dmg >> skill3Dmg >> skill4Dmg >> skill5Dmg >> skill6Dmg >> skill7Dmg >> skill8Dmg >> skill9Dmg >> potionStock >> mpPotionStock >> strPotionStock >> intPotionStock >> dexPotionStock;

		character.statInit(name, profession, mySkill1Name, mySkill1Dmg, mySkill1MpUse, mySkill2Name, mySkill2Dmg, mySkill2MpUse, mySkill3Name, mySkill3Dmg, mySkill3MpUse, skill1Dmg, skill2Dmg, skill3Dmg, skill4Dmg, skill5Dmg, skill6Dmg, skill7Dmg, skill8Dmg, skill9Dmg, str, intel, dex, level, exp, hp, hpMax, mp, mpMax);

		using namespace std::this_thread;
		using namespace std::chrono;

		inventory.init(potionStock, mpPotionStock, strPotionStock, intPotionStock, dexPotionStock);
		sleep_for(milliseconds(125));
		travel.map1Init();
		sleep_for(milliseconds(125));
		travel.map2Init();
		sleep_for(milliseconds(125));
		travel.map3Init();
		sleep_for(milliseconds(125));
		travel.map4Init();
		sleep_for(milliseconds(125));
		travel.map5Init();
		sleep_for(milliseconds(125));
		travel.map6Init();
		sleep_for(milliseconds(125));
		enemyOrc->enemyLoad();
		sleep_for(milliseconds(125));
		enemyOrcShaman->enemyLoad();
		sleep_for(milliseconds(125));
		enemyBoar->enemyLoad();
		sleep_for(milliseconds(125));
		enemyWolf->enemyLoad();
		sleep_for(milliseconds(125));
		enemyBear->enemyLoad();
		sleep_for(milliseconds(125));
		itemPotion->itemLoad();
		sleep_for(milliseconds(125));
		itemMpPotion->itemLoad();
		sleep_for(milliseconds(125));
		itemStrPotion->itemLoad();
		sleep_for(milliseconds(125));
		itemIntPotion->itemLoad();
		sleep_for(milliseconds(125));
		itemDexPotion->itemLoad();

		theFile.close(); //may break load

		std::cout << "GAME LOADED." << std::endl;
	}
	else
	{
		std::cout << "ERROR: YOU HAVE NO SAVE FILE. " << std::endl;
		system("pause");
	}

}



//IMAGE-------------------------------------------------------------
void Game::battlePic()
{
	std::cout << "       _____________________________________________" << std::endl;
	std::cout << "      |_____________________________________________|" << std::endl;
	std::cout << "     |_______________________________________________|" << std::endl;
	std::cout << "    |_________________________________________________|" << std::endl;
	std::cout << "   |___________________________________________________|" << std::endl;
	std::cout << "  |_____________________________________________________|" << std::endl;
	std::cout << " |_______________________________________________________|" << std::endl;
	std::cout << "|_________________________________________________________|" << std::endl;
	std::cout << "|                                                         |" << std::endl;
	std::cout << "|    _________           _________           _________    |" << std::endl;
	std::cout << "|   /| | | | |\\         /| | | | |\\         /| | | | |\\   |" << std::endl;
	std::cout << "|  | | | | | | |       | | | | | | |       | | | | | | |  |" << std::endl;
	std::cout << "|  | | | | | | |       | | | | | | |       | | | | | | |  |" << std::endl;
	std::cout << "|  | | | | | | |       | | | | | | |       | | | | | | |  |" << std::endl;
	std::cout << "|  | | | | | | |       | | | | | | |       | | | | | | |  |" << std::endl;
	std::cout << "|  | | | | | | |       | | | | | | |       | | | | | | |  |" << std::endl;
	std::cout << "|  | | | | | | |       | | | | | | |       | | | | | | |  |" << std::endl;
	std::cout << "|__|_|_|_|_|_|_|_______|_|_|_|_|_|_|_______|_|_|_|_|_|_|__|" << std::endl;
	std::cout << std::endl;
}

