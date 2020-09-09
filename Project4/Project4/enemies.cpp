#include "enemies.h"


#include <vector>	
#include <chrono>	
#include <thread>

using namespace std::this_thread;
using namespace std::chrono;



Enemies::Enemies()
{

}

Enemies::~Enemies()
{

}

void Enemies::enemyLoad()
{

}

void Enemies::enemyPrint()
{

}

void Enemies::startBattle(bool& gameMenuRun, bool& battleMenuRun, const std::string& characterProfession, std::string& characterName, int& characterLevel, int& characterExp, int& characterExpMax, int& characterHp, int& characterHpMax, int& characterMp, int& characterMpMax, int& characterStr, int& characterIntel, int& characterDex, const std::string mySkill1Name, int& mySkill1Dmg, int& mySkill1MpUse, const std::string mySkill2Name, int& mySkill2Dmg, int& mySkill2MpUse, const std::string mySkill3Name, int& mySkill3Dmg, int& mySkill3MpUse, const std::string& skill1Name, const int& skill1MpUse, const int& skill1Dmg, const std::string& skill2Name, const int& skill2MpUse, const int& skill2Dmg, const std::string& skill3Name, const int& skill3MpUse, const int& skill3Dmg, const std::string& skill4Name, const int& skill4MpUse, const int& skill4Dmg, const std::string& skill5Name, const int& skill5MpUse, const int& skill5Dmg, const std::string& skill6Name, const int& skill6MpUse, const int& skill6Dmg, const std::string& skill7Name, const int& skill7MpUse, const int& skill7Dmg, const std::string& skill8Name, const int& skill8MpUse, const int& skill8Dmg, const std::string& skill9Name, const int& skill9MpUse, const int& skill9Dmg, const std::string& hpPotion, const std::string& mpPotion, const std::string& strPotion, const std::string& intPotion, const std::string& dexPotion, Inventory& inventory)
{

}




//BOAR BEGIN--------------------------------------------
Boar::Boar()
{
	hp = 0;
	hpMax = 0;
	level = 0;
	dmg = 0;
	exp = 0;
}

Boar::~Boar()
{

}

void Boar::enemyLoad()
{
	this->name = "boar";
	this->hp = 10;
	this->hpMax = 10;
	this->level = 1;
	this->dmg = 2;
	this->exp = 1;

	std::cout << "ENEMY BOAR LOADED." << std::endl;
}

void Boar::enemyPrint()
{
	std::cout << "NAME: " << this->name << std::endl;
	std::cout << "HP: " << this->hp << "/" << this->hpMax << std::endl;
	std::cout << "LEVEL: " << this->level << std::endl;
	std::cout << "DMG: " << this->dmg << std::endl;
}

void Boar::enemyAttack(int& characterHp)
{	
	std::cout << std::endl;
	std::cout << "ENEMY ATTACKING";
	sleep_for(milliseconds(450));
	std::cout << ".";
	sleep_for(milliseconds(450));
	std::cout << ".";
	sleep_for(milliseconds(450));
	std::cout << "." << std::endl;

	std::cout << this->name << " HIT YOU FOR " << this->dmg << " DAMAGE." << std::endl;

	characterHp -= this->dmg;

	std::cout << "___________________________________________________________" << std::endl;
}

void Boar::enemyDied(int& characterLevel, int& characterExp, int& characterExpMax, int& characterHp, int& characterHpMax, int& characterMp, int& characterMpMax, int& characterStr, int& characterIntel, int& characterDex, const std::string& characterProfession, const std::string& hpPotion, const std::string& mpPotion, const std::string& strPotion, const std::string& intPotion, const std::string& dexPotion, Inventory& inventory)
{
	if (this->hp <= 0)
	{
		std::cout << "YOU HAVE SLAIN THE " << this->name << std::endl;
		this->hp = this->hpMax;
		characterMp = characterMpMax;
		characterHp = characterHpMax;
		character.levelUp(characterLevel, characterExp, characterExpMax, characterHp, characterHpMax, characterMp, characterMpMax, characterStr, characterIntel, characterDex, characterProfession, this->exp);
		inventory.addItem(hpPotion);
		std::cout << "___________________________________________________________" << std::endl;
		system("pause");
	}
}

void Boar::battleInfoPrint(int& characterHp, int& characterHpMax, int& characterMp, int& characterMpMax, std::string& characterName)
{
	std::cout << "___________________________________________________________" << std::endl;
	std::cout << "\t" << characterName << "\t\t\t" << "|" << "\t" << this->name << std::endl;
	std::cout << "\t" << "HP: " << characterHp << "/" << characterHpMax << "\t\t" << "|" << "\t" << "HP: " << this->hp << "/" << this->hpMax << std::endl;
	std::cout << "\t" << "MP: " << characterMp << "/" << characterMpMax << "\t\t" << "|" << std::endl;
	std::cout << "___________________________________________________________" << std::endl;
}

void Boar::startBattle(bool& gameMenuRun, bool& battleMenuRun, const std::string& characterProfession, std::string& characterName, int& characterLevel, int& characterExp, int& characterExpMax, int& characterHp, int& characterHpMax, int& characterMp, int& characterMpMax, int& characterStr, int& characterIntel, int& characterDex, const std::string mySkill1Name, int& mySkill1Dmg, int& mySkill1MpUse, const std::string mySkill2Name, int& mySkill2Dmg, int& mySkill2MpUse, const std::string mySkill3Name, int& mySkill3Dmg, int& mySkill3MpUse, const std::string& skill1Name, const int& skill1MpUse, const int& skill1Dmg, const std::string& skill2Name, const int& skill2MpUse, const int& skill2Dmg, const std::string& skill3Name, const int& skill3MpUse, const int& skill3Dmg, const std::string& skill4Name, const int& skill4MpUse, const int& skill4Dmg, const std::string& skill5Name, const int& skill5MpUse, const int& skill5Dmg, const std::string& skill6Name, const int& skill6MpUse, const int& skill6Dmg, const std::string& skill7Name, const int& skill7MpUse, const int& skill7Dmg, const std::string& skill8Name, const int& skill8MpUse, const int& skill8Dmg, const std::string& skill9Name, const int& skill9MpUse, const int& skill9Dmg, const std::string& hpPotion, const std::string& mpPotion, const std::string& strPotion, const std::string& intPotion, const std::string& dexPotion, Inventory& inventory)
{
	system("cls");

	while (this->hp > 0 && characterHp > 0)
	{
		system("cls");

		int battleChoice;
		battleInfoPrint(characterHp, characterHpMax, characterMp, characterMpMax, characterName);

		std::cout << std::endl;
		std::cout << "\t\t" << "1. ATTACK" << "\t";
		std::cout << "2. ITEM" << std::endl;
		//std::cout << "\t" << "3. RUN" << std::endl;
		std::cout << "> ";
		std::cin >> battleChoice;
		system("cls");
		battleInfoPrint(characterHp, characterHpMax, characterMp, characterMpMax, characterName);
		
		switch (battleChoice)
		{
		case 1:
			character.selectSkill(characterMp, characterProfession, characterStr, characterIntel, characterDex, mySkill1Name, mySkill1Dmg, mySkill1MpUse, mySkill2Name, mySkill2Dmg, mySkill2MpUse, mySkill3Name, mySkill3Dmg, mySkill3MpUse, skill1Name, skill1MpUse, skill1Dmg,  skill2Name,  skill2MpUse, skill2Dmg, skill3Name,  skill3MpUse, skill3Dmg, skill4Name,  skill4MpUse, skill4Dmg, skill5Name,  skill5MpUse, skill5Dmg, skill6Name, skill6MpUse, skill6Dmg, skill7Name,  skill7MpUse, skill7Dmg, skill8Name,  skill8MpUse, skill8Dmg, skill9Name, skill9Dmg, skill9MpUse, this->hp);
			enemyAttack(characterHp);
			system("PAUSE");
			system("cls");
			break;
		case 2:
			inventory.useItem(characterHp, characterMp, characterStr, characterIntel, characterDex , hpPotion, mpPotion, strPotion, intPotion, dexPotion);

			break;
		case 3:
			std::cout << "NOT YET IMPLEMENTED." << std::endl;

			break;
		default:
			std::cout << "UNKNOWN COMMAND." << std::endl;
			break;
		}
		character.youHaveDied(characterHp, gameMenuRun, battleMenuRun);
	}
	enemyDied(characterLevel, characterExp, characterExpMax, characterHp, characterHpMax, characterMp, characterMpMax, characterStr, characterIntel, characterDex, characterProfession, hpPotion, mpPotion, strPotion, intPotion, dexPotion, inventory);
}
//BOAR END----------------------------------------------



//BEAR BEGIN--------------------------------------------
Bear::Bear()
{
	hp = 0;
	hpMax = 0;
	level = 0;
	dmg = 0;
	exp = 0;
}

Bear::~Bear()
{

}

void Bear::enemyLoad()
{
	this->name = "bear";
	this->hp = 25;
	this->hpMax = 25;
	this->level = 3;
	this->dmg = 5;
	this->exp = 6;

	std::cout << "ENEMY BEAR LOADED." << std::endl;
}

void Bear::enemyPrint()
{
	std::cout << "NAME: " << this->name << std::endl;
	std::cout << "HP: " << this->hp << "/" << this->hpMax << std::endl;
	std::cout << "LEVEL: " << this->level << std::endl;
	std::cout << "DMG: " << this->dmg << std::endl;
}

void Bear::enemyAttack(int& characterHp)
{
	std::cout << std::endl;
	std::cout << "ENEMY ATTACKING";
	sleep_for(milliseconds(450));
	std::cout << ".";
	sleep_for(milliseconds(450));
	std::cout << ".";
	sleep_for(milliseconds(450));
	std::cout << "." << std::endl;

	std::cout << this->name << " HIT YOU FOR " << this->dmg << " DAMAGE." << std::endl;

	characterHp -= this->dmg;

	std::cout << "___________________________________________________________" << std::endl;
}

void Bear::enemyDied(int& characterLevel, int& characterExp, int& characterExpMax, int& characterHp, int& characterHpMax, int& characterMp, int& characterMpMax, int& characterStr, int& characterIntel, int& characterDex, const std::string& characterProfession, const std::string& hpPotion, const std::string& mpPotion, const std::string& strPotion, const std::string& intPotion, const std::string& dexPotion, Inventory& inventory)
{
	if (this->hp <= 0)
	{
		std::cout << "YOU HAVE SLAIN THE " << this->name << std::endl;
		this->hp = this->hpMax;
		characterMp = characterMpMax;
		characterHp = characterHpMax;
		character.levelUp(characterLevel, characterExp, characterExpMax, characterHp, characterHpMax, characterMp, characterMpMax, characterStr, characterIntel, characterDex, characterProfession, this->exp);
		inventory.addItem(hpPotion);
		std::cout << "___________________________________________________________" << std::endl;
		system("pause");
	}
}

void Bear::battleInfoPrint(int& characterHp, int& characterHpMax, int& characterMp, int& characterMpMax, std::string& characterName)
{
	std::cout << "___________________________________________________________" << std::endl;
	std::cout << "\t" << characterName << "\t\t\t" << "|" << "\t" << this->name << std::endl;
	std::cout << "\t" << "HP: " << characterHp << "/" << characterHpMax << "\t\t" << "|" << "\t" << "HP: " << this->hp << "/" << this->hpMax << std::endl;
	std::cout << "\t" << "MP: " << characterMp << "/" << characterMpMax << "\t\t" << "|" << std::endl;
	std::cout << "___________________________________________________________" << std::endl;
}

void Bear::startBattle(bool& gameMenuRun, bool& battleMenuRun, const std::string& characterProfession, std::string& characterName, int& characterLevel, int& characterExp, int& characterExpMax, int& characterHp, int& characterHpMax, int& characterMp, int& characterMpMax, int& characterStr, int& characterIntel, int& characterDex, const std::string mySkill1Name, int& mySkill1Dmg, int& mySkill1MpUse, const std::string mySkill2Name, int& mySkill2Dmg, int& mySkill2MpUse, const std::string mySkill3Name, int& mySkill3Dmg, int& mySkill3MpUse, const std::string& skill1Name, const int& skill1MpUse, const int& skill1Dmg, const std::string& skill2Name, const int& skill2MpUse, const int& skill2Dmg, const std::string& skill3Name, const int& skill3MpUse, const int& skill3Dmg, const std::string& skill4Name, const int& skill4MpUse, const int& skill4Dmg, const std::string& skill5Name, const int& skill5MpUse, const int& skill5Dmg, const std::string& skill6Name, const int& skill6MpUse, const int& skill6Dmg, const std::string& skill7Name, const int& skill7MpUse, const int& skill7Dmg, const std::string& skill8Name, const int& skill8MpUse, const int& skill8Dmg, const std::string& skill9Name, const int& skill9MpUse, const int& skill9Dmg, const std::string& hpPotion, const std::string& mpPotion, const std::string& strPotion, const std::string& intPotion, const std::string& dexPotion, Inventory& inventory)
{
	system("cls");

	while (this->hp > 0 && characterHp > 0)
	{
		system("cls");

		int battleChoice;
		battleInfoPrint(characterHp, characterHpMax, characterMp, characterMpMax, characterName);

		std::cout << std::endl;
		std::cout << "\t\t" << "1. ATTACK" << "\t";
		std::cout << "2. ITEM" << std::endl;
		//std::cout << "\t" << "3. RUN" << std::endl;
		std::cout << "> ";
		std::cin >> battleChoice;
		system("cls");
		battleInfoPrint(characterHp, characterHpMax, characterMp, characterMpMax, characterName);

		switch (battleChoice)
		{
		case 1:
			character.selectSkill(characterMp, characterProfession, characterStr, characterIntel, characterDex, mySkill1Name, mySkill1Dmg, mySkill1MpUse, mySkill2Name, mySkill2Dmg, mySkill2MpUse, mySkill3Name, mySkill3Dmg, mySkill3MpUse, skill1Name, skill1MpUse, skill1Dmg, skill2Name, skill2MpUse, skill2Dmg, skill3Name, skill3MpUse, skill3Dmg, skill4Name, skill4MpUse, skill4Dmg, skill5Name, skill5MpUse, skill5Dmg, skill6Name, skill6MpUse, skill6Dmg, skill7Name, skill7MpUse, skill7Dmg, skill8Name, skill8MpUse, skill8Dmg, skill9Name, skill9Dmg, skill9MpUse, this->hp);
			enemyAttack(characterHp);
			system("PAUSE");
			system("cls");
			break;
		case 2:
			inventory.useItem(characterHp, characterMp, characterStr, characterIntel, characterDex, hpPotion, mpPotion, strPotion, intPotion, dexPotion);

			break;
		case 3:
			std::cout << "NOT YET IMPLEMENTED." << std::endl;

			break;
		default:
			std::cout << "UNKNOWN COMMAND." << std::endl;
			break;
		}
		character.youHaveDied(characterHp, gameMenuRun, battleMenuRun);
	}
	enemyDied(characterLevel, characterExp, characterExpMax, characterHp, characterHpMax, characterMp, characterMpMax, characterStr, characterIntel, characterDex, characterProfession, hpPotion, mpPotion, strPotion, intPotion, dexPotion, inventory);
}//BEAR END----------------------------------------------



 //WOLF BEGIN--------------------------------------------
Wolf::Wolf()
{
	hp = 0;
	hpMax = 0;
	level = 0;
	dmg = 0;
	exp = 0;
}

Wolf::~Wolf()
{

}

void Wolf::enemyLoad()
{
	this->name = "wolf";
	this->hp = 16;
	this->hpMax = 16;
	this->level = 2;
	this->dmg = 3;
	this->exp = 3;

	std::cout << "ENEMY WOLF LOADED." << std::endl;
}

void Wolf::enemyPrint()
{
	std::cout << "NAME: " << this->name << std::endl;
	std::cout << "HP: " << this->hp << "/" << this->hpMax << std::endl;
	std::cout << "LEVEL: " << this->level << std::endl;
	std::cout << "DMG: " << this->dmg << std::endl;
}

void Wolf::enemyAttack(int& characterHp)
{
	std::cout << std::endl;
	std::cout << "ENEMY ATTACKING";
	sleep_for(milliseconds(450));
	std::cout << ".";
	sleep_for(milliseconds(450));
	std::cout << ".";
	sleep_for(milliseconds(450));
	std::cout << "." << std::endl;

	std::cout << this->name << " HIT YOU FOR " << this->dmg << " DAMAGE." << std::endl;

	characterHp -= this->dmg;

	std::cout << "___________________________________________________________" << std::endl;
}

void Wolf::enemyDied(int& characterLevel, int& characterExp, int& characterExpMax, int& characterHp, int& characterHpMax, int& characterMp, int& characterMpMax, int& characterStr, int& characterIntel, int& characterDex, const std::string& characterProfession, const std::string& hpPotion, const std::string& mpPotion, const std::string& strPotion, const std::string& intPotion, const std::string& dexPotion, Inventory& inventory)
{
	if (this->hp <= 0)
	{
		std::cout << "YOU HAVE SLAIN THE " << this->name << std::endl;
		this->hp = this->hpMax;
		characterMp = characterMpMax;
		characterHp = characterHpMax;
		character.levelUp(characterLevel, characterExp, characterExpMax, characterHp, characterHpMax, characterMp, characterMpMax, characterStr, characterIntel, characterDex, characterProfession, this->exp);
		inventory.addItem(mpPotion);
		std::cout << "___________________________________________________________" << std::endl;
		system("pause");
	}
}

void Wolf::battleInfoPrint(int& characterHp, int& characterHpMax, int& characterMp, int& characterMpMax, std::string& characterName)
{
	std::cout << "___________________________________________________________" << std::endl;
	std::cout << "\t" << characterName << "\t\t\t" << "|" << "\t" << this->name << std::endl;
	std::cout << "\t" << "HP: " << characterHp << "/" << characterHpMax << "\t\t" << "|" << "\t" << "HP: " << this->hp << "/" << this->hpMax << std::endl;
	std::cout << "\t" << "MP: " << characterMp << "/" << characterMpMax << "\t\t" << "|" << std::endl;
	std::cout << "___________________________________________________________" << std::endl;
}

void Wolf::startBattle(bool& gameMenuRun, bool& battleMenuRun, const std::string& characterProfession, std::string& characterName, int& characterLevel, int& characterExp, int& characterExpMax, int& characterHp, int& characterHpMax, int& characterMp, int& characterMpMax, int& characterStr, int& characterIntel, int& characterDex, const std::string mySkill1Name, int& mySkill1Dmg, int& mySkill1MpUse, const std::string mySkill2Name, int& mySkill2Dmg, int& mySkill2MpUse, const std::string mySkill3Name, int& mySkill3Dmg, int& mySkill3MpUse, const std::string& skill1Name, const int& skill1MpUse, const int& skill1Dmg, const std::string& skill2Name, const int& skill2MpUse, const int& skill2Dmg, const std::string& skill3Name, const int& skill3MpUse, const int& skill3Dmg, const std::string& skill4Name, const int& skill4MpUse, const int& skill4Dmg, const std::string& skill5Name, const int& skill5MpUse, const int& skill5Dmg, const std::string& skill6Name, const int& skill6MpUse, const int& skill6Dmg, const std::string& skill7Name, const int& skill7MpUse, const int& skill7Dmg, const std::string& skill8Name, const int& skill8MpUse, const int& skill8Dmg, const std::string& skill9Name, const int& skill9MpUse, const int& skill9Dmg, const std::string& hpPotion, const std::string& mpPotion, const std::string& strPotion, const std::string& intPotion, const std::string& dexPotion, Inventory& inventory)
{
	system("cls");

	while (this->hp > 0 && characterHp > 0)
	{
		system("cls");

		int battleChoice;
		battleInfoPrint(characterHp, characterHpMax, characterMp, characterMpMax, characterName);

		std::cout << std::endl;
		std::cout << "\t\t" << "1. ATTACK" << "\t";
		std::cout << "2. ITEM" << std::endl;
		//std::cout << "\t" << "3. RUN" << std::endl;
		std::cout << "> ";
		std::cin >> battleChoice;
		system("cls");
		battleInfoPrint(characterHp, characterHpMax, characterMp, characterMpMax, characterName);

		switch (battleChoice)
		{
		case 1:
			character.selectSkill(characterMp, characterProfession, characterStr, characterIntel, characterDex, mySkill1Name, mySkill1Dmg, mySkill1MpUse, mySkill2Name, mySkill2Dmg, mySkill2MpUse, mySkill3Name, mySkill3Dmg, mySkill3MpUse, skill1Name, skill1MpUse, skill1Dmg, skill2Name, skill2MpUse, skill2Dmg, skill3Name, skill3MpUse, skill3Dmg, skill4Name, skill4MpUse, skill4Dmg, skill5Name, skill5MpUse, skill5Dmg, skill6Name, skill6MpUse, skill6Dmg, skill7Name, skill7MpUse, skill7Dmg, skill8Name, skill8MpUse, skill8Dmg, skill9Name, skill9Dmg, skill9MpUse, this->hp);
			enemyAttack(characterHp);
			system("PAUSE");
			system("cls");
			break;
		case 2:
			inventory.useItem(characterHp, characterMp, characterStr, characterIntel, characterDex, hpPotion, mpPotion, strPotion, intPotion, dexPotion);

			break;
		case 3:
			std::cout << "NOT YET IMPLEMENTED." << std::endl;

			break;
		default:
			std::cout << "UNKNOWN COMMAND." << std::endl;
			break;
		}
		character.youHaveDied(characterHp, gameMenuRun, battleMenuRun);
	}
	enemyDied(characterLevel, characterExp, characterExpMax, characterHp, characterHpMax, characterMp, characterMpMax, characterStr, characterIntel, characterDex, characterProfession, hpPotion, mpPotion, strPotion, intPotion, dexPotion, inventory);
}
//WOLF END----------------------------------------------



//ORC BEGIN---------------------------------------------
Orc::Orc()
{
	name = "";
	hp = 0;
	hpMax = 0;
	dmg = 0;
	level = 0;
	exp = 0;
}

Orc::~Orc()
{

}

void Orc::enemyLoad()
{
	this->name = "Orc";
	this->hp = 34;
	this->hpMax = 34;
	this->dmg = 8;
	this->level = 5;
	this->exp = 12;

	std::cout << "ENEMY ORC LOADED." << std::endl;
}

void Orc::enemyPrint()
{
	std::cout << "NAME: " << this->name << std::endl;
	std::cout << "HP: " << this->hp << "/" << this->hpMax << std::endl;
	std::cout << "LEVEL: " << this->level << std::endl;
	std::cout << "DMG: " << this->dmg << std::endl;
}

void Orc::enemyAttack(int& characterHp)
{
	std::cout << std::endl;
	std::cout << "ENEMY ATTACKING";
	sleep_for(milliseconds(450));
	std::cout << ".";
	sleep_for(milliseconds(450));
	std::cout << ".";
	sleep_for(milliseconds(450));
	std::cout << "." << std::endl;

	std::cout << this->name << " HIT YOU FOR " << this->dmg << " DAMAGE." << std::endl;

	characterHp -= this->dmg;

	std::cout << "___________________________________________________________" << std::endl;
}

void Orc::enemyDied(int& characterLevel, int& characterExp, int& characterExpMax, int& characterHp, int& characterHpMax, int& characterMp, int& characterMpMax, int& characterStr, int& characterIntel, int& characterDex, const std::string& characterProfession, const std::string& hpPotion, const std::string& mpPotion, const std::string& strPotion, const std::string& intPotion, const std::string& dexPotion, Inventory& inventory)
{
	if (this->hp <= 0)
	{
		std::cout << "YOU HAVE SLAIN THE " << this->name << std::endl;
		this->hp = this->hpMax;
		characterMp = characterMpMax;
		characterHp = characterHpMax;
		character.levelUp(characterLevel, characterExp, characterExpMax, characterHp, characterHpMax, characterMp, characterMpMax, characterStr, characterIntel, characterDex, characterProfession, this->exp);
		inventory.addItem(hpPotion);
		std::cout << "___________________________________________________________" << std::endl;
		system("pause");
	}
}

void Orc::battleInfoPrint(int& characterHp, int& characterHpMax, int& characterMp, int& characterMpMax, std::string& characterName)
{
	std::cout << "___________________________________________________________" << std::endl;
	std::cout << "\t" << characterName << "\t\t\t" << "|" << "\t" << this->name << std::endl;
	std::cout << "\t" << "HP: " << characterHp << "/" << characterHpMax << "\t\t" << "|" << "\t" << "HP: " << this->hp << "/" << this->hpMax << std::endl;
	std::cout << "\t" << "MP: " << characterMp << "/" << characterMpMax << "\t\t" << "|" << std::endl;
	std::cout << "___________________________________________________________" << std::endl;
}

void Orc::startBattle(bool& gameMenuRun, bool& battleMenuRun, const std::string& characterProfession, std::string& characterName, int& characterLevel, int& characterExp, int& characterExpMax, int& characterHp, int& characterHpMax, int& characterMp, int& characterMpMax, int& characterStr, int& characterIntel, int& characterDex, const std::string mySkill1Name, int& mySkill1Dmg, int& mySkill1MpUse, const std::string mySkill2Name, int& mySkill2Dmg, int& mySkill2MpUse, const std::string mySkill3Name, int& mySkill3Dmg, int& mySkill3MpUse, const std::string& skill1Name, const int& skill1MpUse, const int& skill1Dmg, const std::string& skill2Name, const int& skill2MpUse, const int& skill2Dmg, const std::string& skill3Name, const int& skill3MpUse, const int& skill3Dmg, const std::string& skill4Name, const int& skill4MpUse, const int& skill4Dmg, const std::string& skill5Name, const int& skill5MpUse, const int& skill5Dmg, const std::string& skill6Name, const int& skill6MpUse, const int& skill6Dmg, const std::string& skill7Name, const int& skill7MpUse, const int& skill7Dmg, const std::string& skill8Name, const int& skill8MpUse, const int& skill8Dmg, const std::string& skill9Name, const int& skill9MpUse, const int& skill9Dmg, const std::string& hpPotion, const std::string& mpPotion, const std::string& strPotion, const std::string& intPotion, const std::string& dexPotion, Inventory& inventory)
{
	system("cls");

	while (this->hp > 0 && characterHp > 0)
	{
		system("cls");

		int battleChoice;
		battleInfoPrint(characterHp, characterHpMax, characterMp, characterMpMax, characterName);

		std::cout << std::endl;
		std::cout << "\t\t" << "1. ATTACK" << "\t";
		std::cout << "2. ITEM" << std::endl;
		//std::cout << "\t" << "3. RUN" << std::endl;
		std::cout << "> ";
		std::cin >> battleChoice;
		system("cls");
		battleInfoPrint(characterHp, characterHpMax, characterMp, characterMpMax, characterName);

		switch (battleChoice)
		{
		case 1:
			character.selectSkill(characterMp, characterProfession, characterStr, characterIntel, characterDex, mySkill1Name, mySkill1Dmg, mySkill1MpUse, mySkill2Name, mySkill2Dmg, mySkill2MpUse, mySkill3Name, mySkill3Dmg, mySkill3MpUse, skill1Name, skill1MpUse, skill1Dmg, skill2Name, skill2MpUse, skill2Dmg, skill3Name, skill3MpUse, skill3Dmg, skill4Name, skill4MpUse, skill4Dmg, skill5Name, skill5MpUse, skill5Dmg, skill6Name, skill6MpUse, skill6Dmg, skill7Name, skill7MpUse, skill7Dmg, skill8Name, skill8MpUse, skill8Dmg, skill9Name, skill9Dmg, skill9MpUse, this->hp);
			enemyAttack(characterHp);
			system("PAUSE");
			system("cls");
			break;
		case 2:
			inventory.useItem(characterHp, characterMp, characterStr, characterIntel, characterDex, hpPotion, mpPotion, strPotion, intPotion, dexPotion);

			break;
		case 3:
			std::cout << "NOT YET IMPLEMENTED." << std::endl;

			break;
		default:
			std::cout << "UNKNOWN COMMAND." << std::endl;
			break;
		}
		character.youHaveDied(characterHp, gameMenuRun, battleMenuRun);
	}
	enemyDied(characterLevel, characterExp, characterExpMax, characterHp, characterHpMax, characterMp, characterMpMax, characterStr, characterIntel, characterDex, characterProfession, hpPotion, mpPotion, strPotion, intPotion, dexPotion, inventory);
}
//ORC END-----------------------------------------------



//ORC SHAMAN BEGIN--------------------------------------
OrcShaman::OrcShaman()
{
	name = "";
	hp = 0;
	hpMax = 0;
	dmg = 0;
	level = 0;
	exp = 0;
}

OrcShaman::~OrcShaman()
{

}

void OrcShaman::enemyLoad()
{
	this->name = "Orc Shaman";
	this->hp = 27;
	this->hpMax = 27;
	this->dmg = 6;
	this->level = 4;
	this->exp = 8;

	std::cout << "ENEMY ORC SHAMAN LOADED." << std::endl;
}

void OrcShaman::enemyPrint()
{
	std::cout << "NAME: " << this->name << std::endl;
	std::cout << "HP: " << this->hp << "/" << this->hpMax << std::endl;
	std::cout << "LEVEL: " << this->level << std::endl;
	std::cout << "DMG: " << this->dmg << std::endl;
}

void OrcShaman::enemyAttack(int& characterHp)
{
	std::cout << std::endl;
	std::cout << "ENEMY ATTACKING";
	sleep_for(milliseconds(450));
	std::cout << ".";
	sleep_for(milliseconds(450));
	std::cout << ".";
	sleep_for(milliseconds(450));
	std::cout << "." << std::endl;

	std::cout << this->name << " HIT YOU FOR " << this->dmg << " DAMAGE." << std::endl;

	characterHp -= this->dmg;

	std::cout << "___________________________________________________________" << std::endl;
}

void OrcShaman::enemyDied(int& characterLevel, int& characterExp, int& characterExpMax, int& characterHp, int& characterHpMax, int& characterMp, int& characterMpMax, int& characterStr, int& characterIntel, int& characterDex, const std::string& characterProfession, const std::string& hpPotion, const std::string& mpPotion, const std::string& strPotion, const std::string& intPotion, const std::string& dexPotion, Inventory& inventory)
{
	if (this->hp <= 0)
	{
		std::cout << "YOU HAVE SLAIN THE " << this->name << std::endl;
		this->hp = this->hpMax;
		characterMp = characterMpMax;
		characterHp = characterHpMax;
		character.levelUp(characterLevel, characterExp, characterExpMax, characterHp, characterHpMax, characterMp, characterMpMax, characterStr, characterIntel, characterDex, characterProfession, this->exp);
		inventory.addItem(hpPotion);
		std::cout << "___________________________________________________________" << std::endl;
		system("pause");
	}
}

void OrcShaman::battleInfoPrint(int& characterHp, int& characterHpMax, int& characterMp, int& characterMpMax, std::string& characterName)
{
	std::cout << "___________________________________________________________" << std::endl;
	std::cout << "\t" << characterName << "\t\t\t" << "|" << "\t" << this->name << std::endl;
	std::cout << "\t" << "HP: " << characterHp << "/" << characterHpMax << "\t\t" << "|" << "\t" << "HP: " << this->hp << "/" << this->hpMax << std::endl;
	std::cout << "\t" << "MP: " << characterMp << "/" << characterMpMax << "\t\t" << "|" << std::endl;
	std::cout << "___________________________________________________________" << std::endl;
}

void OrcShaman::startBattle(bool& gameMenuRun, bool& battleMenuRun, const std::string& characterProfession, std::string& characterName, int& characterLevel, int& characterExp, int& characterExpMax, int& characterHp, int& characterHpMax, int& characterMp, int& characterMpMax, int& characterStr, int& characterIntel, int& characterDex, const std::string mySkill1Name, int& mySkill1Dmg, int& mySkill1MpUse, const std::string mySkill2Name, int& mySkill2Dmg, int& mySkill2MpUse, const std::string mySkill3Name, int& mySkill3Dmg, int& mySkill3MpUse, const std::string& skill1Name, const int& skill1MpUse, const int& skill1Dmg, const std::string& skill2Name, const int& skill2MpUse, const int& skill2Dmg, const std::string& skill3Name, const int& skill3MpUse, const int& skill3Dmg, const std::string& skill4Name, const int& skill4MpUse, const int& skill4Dmg, const std::string& skill5Name, const int& skill5MpUse, const int& skill5Dmg, const std::string& skill6Name, const int& skill6MpUse, const int& skill6Dmg, const std::string& skill7Name, const int& skill7MpUse, const int& skill7Dmg, const std::string& skill8Name, const int& skill8MpUse, const int& skill8Dmg, const std::string& skill9Name, const int& skill9MpUse, const int& skill9Dmg, const std::string& hpPotion, const std::string& mpPotion, const std::string& strPotion, const std::string& intPotion, const std::string& dexPotion, Inventory& inventory)
{
	system("cls");

	while (this->hp > 0 && characterHp > 0)
	{
		system("cls");

		int battleChoice;
		battleInfoPrint(characterHp, characterHpMax, characterMp, characterMpMax, characterName);

		std::cout << std::endl;
		std::cout << "\t\t" << "1. ATTACK" << "\t";
		std::cout << "2. ITEM" << std::endl;
		//std::cout << "\t" << "3. RUN" << std::endl;
		std::cout << "> ";
		std::cin >> battleChoice;
		system("cls");
		battleInfoPrint(characterHp, characterHpMax, characterMp, characterMpMax, characterName);

		switch (battleChoice)
		{
		case 1:
			character.selectSkill(characterMp, characterProfession, characterStr, characterIntel, characterDex, mySkill1Name, mySkill1Dmg, mySkill1MpUse, mySkill2Name, mySkill2Dmg, mySkill2MpUse, mySkill3Name, mySkill3Dmg, mySkill3MpUse, skill1Name, skill1MpUse, skill1Dmg, skill2Name, skill2MpUse, skill2Dmg, skill3Name, skill3MpUse, skill3Dmg, skill4Name, skill4MpUse, skill4Dmg, skill5Name, skill5MpUse, skill5Dmg, skill6Name, skill6MpUse, skill6Dmg, skill7Name, skill7MpUse, skill7Dmg, skill8Name, skill8MpUse, skill8Dmg, skill9Name, skill9Dmg, skill9MpUse, this->hp);
			enemyAttack(characterHp);
			system("PAUSE");
			system("cls");
			break;
		case 2:
			inventory.useItem(characterHp, characterMp, characterStr, characterIntel, characterDex, hpPotion, mpPotion, strPotion, intPotion, dexPotion);

			break;
		case 3:
			std::cout << "NOT YET IMPLEMENTED." << std::endl;

			break;
		default:
			std::cout << "UNKNOWN COMMAND." << std::endl;
			break;
		}
		character.youHaveDied(characterHp, gameMenuRun, battleMenuRun);
	}
	enemyDied(characterLevel, characterExp, characterExpMax, characterHp, characterHpMax, characterMp, characterMpMax, characterStr, characterIntel, characterDex, characterProfession, hpPotion, mpPotion, strPotion, intPotion, dexPotion, inventory);
}
//ORC SHAMAN END----------------------------------------



//BANDIT BEGIN------------------------------------------

//BANDIT END--------------------------------------------



//BANDIT ARCHER BEGIN-----------------------------------

//BANDIT ARCHER END-------------------------------------



//THIEF BEGIN-------------------------------------------

//THIEF END---------------------------------------------



//WITCH BEGIN------------------------------------------

//WITCH END--------------------------------------------



//SKELETON BEGIN---------------------------------------

//SKELETON END-----------------------------------------



//ZOMBIE BEGIN-----------------------------------------

//ZOMBIE END-------------------------------------------



//GHOUL BEGIN------------------------------------------

//GHOUL END--------------------------------------------



//SICK PEASANT BEGIN-----------------------------------

//SICK PEASANT END-------------------------------------



//CORRUPTED PRIEST BEING-------------------------------

//CORRUPTED PRIEST END---------------------------------



//CUTLIST BEGIN------------------------------------

//CUTLIST MEMBER END--------------------------------------



//RABID DOG BEGIN--------------------------------------

//RABID DOG END----------------------------------------



//CHURCH GUARD BEGIN-----------------------------------

//CHURCH GUARD END-------------------------------------