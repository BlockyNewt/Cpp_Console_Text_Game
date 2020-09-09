#include "character.h"

#include <iostream>
#include <string>
#include <chrono>
#include <thread>
#include <algorithm>

using namespace std::this_thread;
using namespace std::chrono;

Character::Character()
{
	name = "";
	profession = "";
	level = 0;
	exp = 0;
	expMax = 0;
	hp = 0;
	hpMax = 0;
	mp = 0;
	mpMax = 0;
	str = 0;
	intel = 0;
	dex = 0;

	skill1Name = "stab";
	skill1Dmg = 1;
	skill1MpUse = 0;

	skill2Name = "slash";
	skill2Dmg = 3;
	skill2MpUse = 2;

	skill3Name = "charge";
	skill3Dmg = 5;
	skill3MpUse = 3;

	skill4Name = "shock";
	skill4Dmg = 1;
	skill4MpUse = 0;

	skill5Name = "fireball";
	skill5Dmg = 4;
	skill5MpUse = 3;

	skill6Name = "meteor";
	skill6Dmg = 8;
	skill6MpUse = 7;

	skill7Name = "punch";
	skill7Dmg = 1;
	skill7MpUse = 0;

	skill8Name = "scratch";
	skill8Dmg = 4;
	skill8MpUse = 3;

	skill9Name = "backstab";
	skill9Dmg = 8;
	skill9MpUse = 7;
}

Character::~Character()
{

}

void Character::createName()
{
	system("cls");

	std::string createName;
	std::cout << "CREATE NAME: ";
	std::cin >> createName;

	std::cout << "NAME SUCCESSFULLY CREATED." << std::endl;

	selectClass(createName);
}

void Character::selectClass(std::string createName)
{
	system("cls");
	std::string chooseClass;
	
	bool chooseClassRun = true;
	while (chooseClassRun == true)
	{
		system("cls");
		std::cout << "___________________________________________________________" << std::endl;
		//std::cout << "--------NAME----------DESCRIPTION--------------------------" << std::endl;
		std::cout << std::endl;
		std::cout << "\t" << "WARRIOR" << "\t\t" << "WITH BRUTE STRENGTH YOU WILL BE THE\n \t\t\tFIRST TO CHARGE INTO BATTLE." << std::endl;
		std::cout << std::endl;
		std::cout << "\t" << "MAGE" << "\t\t" << "BEING DEFENSELESS FROM YOUR ARMOR, \n\t\t\tYOU MUST KEEP A DISTANCE." << std::endl;
		std::cout << std::endl;
		std::cout << "\t" << "ROGUE" << "\t\t" << "ATTACK YOUR ENEMY FROM THE BACK AND\n \t\t\tDEAL MASSIVE DAMAGE." << std::endl;
		std::cout << std::endl;
		std::cout << "___________________________________________________________" << std::endl;

		
		std::cout << "SELECT: ";
		std::cin >> chooseClass;

		if (chooseClass == "warrior")
		{
			statInit(createName, chooseClass, skill1Name, skill1Dmg, skill1MpUse, skill2Name, skill2Dmg, skill2MpUse, skill3Name, skill3Dmg, skill3MpUse, skill1Dmg, skill2Dmg, skill3Dmg, skill4Dmg, skill5Dmg, skill6Dmg, skill7Dmg, skill8Dmg, skill9Dmg, 2, 1, 1, 1, 0, 15, 15, 10, 10);
			chooseClassRun = false;
		}
		else if (chooseClass == "mage")
		{
			statInit(createName, chooseClass, skill4Name, skill4Dmg, skill4MpUse, skill5Name, skill5Dmg, skill5MpUse, skill6Name, skill6Dmg, skill6MpUse, skill1Dmg, skill2Dmg, skill3Dmg, skill4Dmg, skill5Dmg, skill6Dmg, skill7Dmg, skill8Dmg, skill9Dmg, 1, 4, 1, 1, 0, 12, 12, 15, 15);
			chooseClassRun = false;
		}
		else if (chooseClass == "rogue")
		{
			statInit(createName, chooseClass, skill7Name, skill7Dmg, skill7MpUse, skill8Name, skill8Dmg, skill8MpUse, skill9Name, skill9Dmg, skill9MpUse, skill1Dmg, skill2Dmg, skill3Dmg, skill4Dmg, skill5Dmg, skill6Dmg, skill7Dmg, skill8Dmg, skill9Dmg, 2, 1, 4, 1, 0, 15, 15, 10, 10);
			chooseClassRun = false;
		}
		else
		{
			std::cout << ">NOT A CLASS." << std::endl;
		}
	}

	
}

void Character::statInit(const std::string name, const std::string chooseClass, const std::string& mySkill1Name, const int& mySkill1Dmg, const int& mySkill1MpUse, const std::string& mySkill2Name, const int& mySkill2Dmg, const int& mySkill2MpUse, const std::string& mySkill3Name, const int& mySkill3Dmg, const int& mySkill3MpUse, const int& skill1Dmg, const int& skill2Dmg, const int& skill3Dmg, const int& skill4Dmg, const int& skill5Dmg, const int& skill6Dmg, const int& skill7Dmg, const int& skill8Dmg, const int& skill9Dmg, int str, int intel, int dex, int level, int exp, int hp, int hpMax, int mp, int mpMax)
{
	this->name = name;
	this->profession = chooseClass;
	this->level = level;
	this->exp = exp;
	this->expMax = level * 9;
	this->hp = hp;
	this->hpMax = hpMax;
	this->mp = mp;
	this->mpMax = mpMax;
	this->str = str;
	this->intel = intel;
	this->dex = dex;

	this->mySkill1Name = mySkill1Name;
	this->mySkill1Dmg = mySkill1Dmg;
	this->mySkill1MpUse = mySkill1MpUse;

	this->mySkill2Name = mySkill2Name;
	this->mySkill2Dmg = mySkill2Dmg;
	this->mySkill2MpUse = mySkill2MpUse;

	this->mySkill3Name = mySkill3Name;
	this->mySkill3Dmg = mySkill3Dmg;
	this->skill3MpUse = mySkill3MpUse;
	//make a my skill 1, 2, 3
}

void Character::printStats()
{
	system("cls");
	std::cout << std::endl;
	std::cout << "___________________________________________________________" << std::endl;
	std::cout << "NAME: " << this->name << "\t";
	std::cout << "CLASS: " << this->profession << "\t";
	std::cout << "STR: " << this->str << std::endl;

	std::cout << "LEVEL: " << this->level << "\t";
	std::cout << "HP: " << this->hp << "/" << this->hpMax << "\t";
	std::cout << "INT: " << this->intel << std::endl;

	std::cout << "EXP: " << this->exp << "/" << this->expMax << "\t";
	std::cout << "MP: " << this->mp << "/" << this->mpMax << "\t";
	std::cout << "DEX: " << this->dex << std::endl;
	std::cout << "___________________________________________________________" << std::endl;
	system("PAUSE");
}



//SKILLS BEGIN------------------------------------------
void Character::selectSkill(int& characterMp, const std::string& profession, int& characterStr, int& characterIntel, int& characterDex, const std::string mySkill1Name, int& mySkill1Dmg, int& mySkill1MpUse, const std::string mySkill2Name, int& mySkill2Dmg, int& mySkill2MpUse, const std::string mySkill3Name, int& mySkill3Dmg, int& mySkill3MpUse, const std::string& skill1Name, const int& skill1MpUse, const int& skill1Dmg, const std::string& skill2Name, const int& skill2MpUse, const int& skill2Dmg, const std::string& skill3Name, const int& skill3MpUse, const int& skill3Dmg, const std::string& skill4Name, const int& skill4MpUse, const int& skill4Dmg, const std::string& skill5Name, const int& skill5MpUse, const int& skill5Dmg, const std::string& skill6Name, const int& skill6MpUse, const int& skill6Dmg, const std::string& skill7Name, const int& skill7MpUse, const int& skill7Dmg, const std::string& skill8Name, const int& skill8MpUse, const int& skill8Dmg, const std::string& skill9Name, const int& skill9MpUse, const int& skill9Dmg, int& enemyHp)
{
	if (profession == "warrior")
	{
		//std::cout << "\t\t\t" << "SKILLS" << std::endl;
		std::cout << "-----------------------<SKILLS>----------------------------" << std::endl;
		std::cout << "\t" << mySkill1Name << "\t";
		std::cout << "\t" << mySkill2Name << "\t";
		std::cout << "\t" << mySkill3Name << std::endl;
		std::cout << "___________________________________________________________" << std::endl;
	}
	else if (profession == "mage")
	{
		std::cout << "-----------------------<SKILLS>----------------------------" << std::endl;
		std::cout << "\t" << mySkill1Name << "\t";
		std::cout << "\t" << mySkill2Name << "\t";
		std::cout << mySkill3Name << std::endl;
		std::cout << "___________________________________________________________" << std::endl;
	}
	else if (profession == "rogue")
	{
		std::cout << "-----------------------<SKILLS>----------------------------" << std::endl;
		std::cout << "\t" << mySkill1Name << "\t";
		std::cout << "\t" << mySkill2Name << "\t\t";
		std::cout << mySkill3Name << std::endl;
		std::cout << "___________________________________________________________" << std::endl;
	}
	std::cout << "> ";
	std::cin >> skillSelect;

	if (skillSelect == "stab" && characterMp >= skill1MpUse)
	{
		skill1Use(characterMp, characterStr, characterIntel, characterDex, skill1Name, skill1MpUse, skill1Dmg, mySkill1Dmg,  enemyHp);
	}
	else if (skillSelect == "slash" && characterMp >= skill2MpUse)
	{
		skill2Use(characterMp, characterStr, characterIntel, characterDex, skill2Name, skill2MpUse, skill2Dmg, mySkill2Dmg, enemyHp);
	}
	else if (skillSelect == "charge" && characterMp >= skill3MpUse)
	{
		skill3Use(characterMp, characterStr, characterIntel, characterDex, skill3Name, skill3MpUse, skill3Dmg, mySkill3Dmg, enemyHp);
	}
	else if (skillSelect == "shock" && characterMp >= skill4MpUse)
	{
		skill4Use(characterMp, characterStr, characterIntel, characterDex, skill4Name, skill4MpUse, skill4Dmg, mySkill1Dmg, enemyHp);
	}
	else if (skillSelect == "fireball" && characterMp >= skill5MpUse)
	{
		skill5Use(characterMp, characterStr, characterIntel, characterDex, skill5Name, skill5MpUse, skill5Dmg, mySkill2Dmg, enemyHp);
	}
	else if (skillSelect == "meteor" && characterMp >= skill6MpUse)
	{
		skill6Use(characterMp, characterStr, characterIntel, characterDex, skill6Name, skill6MpUse, skill6Dmg, mySkill3Dmg, enemyHp);
	}
	else if (skillSelect == "punch" && characterMp >= skill7MpUse)
	{
		skill7Use(characterMp, characterStr, characterIntel, characterDex, skill7Name, skill7MpUse, skill7Dmg, mySkill1Dmg, enemyHp);
	}
	else if (skillSelect == "scratch" && characterMp >= skill8MpUse)
	{
		skill8Use(characterMp, characterStr, characterIntel, characterDex, skill8Name, skill8MpUse, skill8Dmg, mySkill2Dmg, enemyHp);
	}
	else if (skillSelect == "backstab" && characterMp >= skill9MpUse)
	{
		skill9Use(characterMp, characterStr, characterIntel, characterDex, skill9Name, skill9MpUse, skill9Dmg, mySkill3Dmg, enemyHp);
	}
	else if (characterMp == 0)
	{
		std::cout << "MANA IS REQUIRED TO CAST " << skill1Name << std::endl;
	}
	else
	{
		std::cout << ">ERROR - " << skillSelect << " - IS AN UNKNOWN SKILL." << std::endl;
	}
}

void Character::skill1Use(int& characterMp, int& characterStr, int& characterIntel, int& characterDex, const std::string& skill1Name, const int& skill1MpUse, const int& skill1Dmg, int& mySkill1Dmg, int& enemyHp)
{
	characterMp -= skill1MpUse;
	mySkill1Dmg = skill1Dmg + (characterStr / 8) + (characterDex / 8);
	enemyHp -= mySkill1Dmg;

	skillWaitTimer();

	std::cout << skill1Name << " HAS INFLICTED " << mySkill1Dmg << "." << std::endl;
}

void Character::skill2Use(int& characterMp, int& characterStr, int& characterIntel, int& characterDex, const std::string& skill2Name, const int& skill2MpUse, const int& skill2Dmg, int& mySkill2Dmg, int& enemyHp)
{
	characterMp -= skill2MpUse;
	mySkill2Dmg = skill2Dmg + (characterStr / 6) + (characterDex / 6);
	enemyHp -= mySkill2Dmg;

	skillWaitTimer();

	std::cout << skill2Name << " HAS INFLICTED " << mySkill2Dmg << "." << std::endl;
}

void Character::skill3Use(int& characterMp, int& characterStr, int& characterIntel, int& characterDex, const std::string& skill3Name, const int& skill3MpUse, const int& skill3Dmg, int& mySkill3Dmg, int& enemyHp)
{
	characterMp -= skill3MpUse;
	mySkill3Dmg = skill3Dmg + (characterStr / 4) + (characterDex / 4);
	enemyHp -= mySkill3Dmg;

	skillWaitTimer();

	std::cout << skill3Name << " HAS INFLICTED " << mySkill3Dmg << "." << std::endl;
}

void Character::skill4Use(int& characterMp, int& characterStr, int& characterIntel, int& characterDex, const std::string& skill4Name, const int& skill4MpUse, const int& skill4Dmg, int& mySkill4Dmg, int& enemyHp)
{
	characterMp -= skill4MpUse;
	mySkill4Dmg = skill4Dmg + (characterIntel / 8);
	enemyHp -= mySkill4Dmg;

	skillWaitTimer();

	std::cout << skill4Name << " HAS INFLICTED " << mySkill4Dmg << "." << std::endl;

}

void Character::skill5Use(int& characterMp, int& characterStr, int& characterIntel, int& characterDex, const std::string& skill5Name, const int& skill5MpUse, const int& skill5Dmg, int& mySkill5Dmg, int& enemyHp)
{
	characterMp -= skill5MpUse;
	mySkill5Dmg = skill5Dmg + (characterIntel / 6);
	enemyHp -= mySkill5Dmg;

	skillWaitTimer();

	std::cout << skill5Name << " HAS INFLICTED " << mySkill5Dmg << "." << std::endl;
}

void Character::skill6Use(int& characterMp, int& characterStr, int& characterIntel, int& characterDex, const std::string& skill6Name, const int& skill6MpUse, const int& skill6Dmg, int& mySkill6Dmg, int& enemyHp)
{
	characterMp -= skill6MpUse;
	mySkill6Dmg = skill6Dmg + (characterIntel / 4);
	enemyHp -= mySkill6Dmg;

	skillWaitTimer();

	std::cout << skill6Name << " HAS INFLICTED " << mySkill6Dmg << "." << std::endl;
}

void Character::skill7Use(int& characterMp, int& characterStr, int& characterIntel, int& characterDex, const std::string& skill7Name, const int& skill7MpUse, const int& skill7Dmg, int& mySkill7Dmg, int& enemyHp)
{
	characterMp -= skill7MpUse;
	mySkill7Dmg = skill7Dmg + (characterDex / 8);
	enemyHp -= mySkill7Dmg;

	skillWaitTimer();

	std::cout << skill7Name << " HAS INFLICTED " << mySkill7Dmg << "." << std::endl;
}

void Character::skill8Use(int& characterMp, int& characterStr, int& characterIntel, int& characterDex, const std::string& skill8Name, const int& skill8MpUse, const int& skill8Dmg, int& mySkill8Dmg, int& enemyHp)
{
	characterMp -= skill8MpUse;
	mySkill8Dmg = skill8Dmg + (characterDex / 6);
	enemyHp -= mySkill8Dmg;

	skillWaitTimer();

	std::cout << skill8Name << " HAS INFLICTED " << mySkill8Dmg << "." << std::endl;
}

void Character::skill9Use(int& characterMp, int& characterStr, int& characterIntel, int& characterDex, const std::string& skill9Name, const int& skill9MpUse, const int& skill9Dmg, int& mySkill9Dmg, int& enemyHp)
{
	characterMp -= skill9MpUse;
	mySkill9Dmg = skill9Dmg + (characterDex / 4);
	enemyHp -= mySkill9Dmg;

	skillWaitTimer();

	std::cout << skill9Name << " HAS INFLICTED " << mySkill9Dmg << "." << std::endl;
}

void Character::skillWaitTimer()
{
	std::cout << std::endl;
	std::cout << "YOUR ATTACK";
	sleep_for(milliseconds(425));
	std::cout << ".";
	sleep_for(milliseconds(425));
	std::cout << ".";
	sleep_for(milliseconds(425));
	std::cout << "." << std::endl;
}
//SKILLS END--------------------------------------------



//LEVEL UP----------------------------------------------
void Character::levelUp(int& characterLevel, int& characterExp, int& characterExpMax, int& characterHp, int& characterHpMax, int& characterMp, int& characterMpMax, int& characterStr, int& characterIntel, int& characterDex, const std::string& characterProfession, int& enemyExp)
{
	characterExp += enemyExp;
	std::cout << "YOU HAVE GAINED " << enemyExp << " EXP." << std::endl;
	while (characterExp >= characterExpMax)
	{
		if (characterProfession == "warrior")
		{
			characterLevel++;
			characterHpMax += 5;
			characterMpMax += 2;
			characterHp = characterHpMax;
			characterMp = characterMpMax;
			characterStr += 4;
			characterIntel += 0;
			characterDex += 1;
			characterExp -= characterExpMax;
			characterExpMax = characterLevel * 9;
			std::cout << "YOU REACHED LEVEL " << characterLevel << "." << std::endl;
		}
		else if (characterProfession == "mage")
		{
			characterLevel++;
			characterHpMax += 1;
			characterMpMax += 4;
			characterHp = characterHpMax;
			characterMp = characterMpMax;
			characterStr += 0;
			characterIntel += 4;
			characterDex += 1;
			characterExp -= characterExpMax;
			characterExpMax = characterLevel * 9;
			std::cout << "YOU REACHED LEVEL " << characterLevel << "." << std::endl;
		}
		else if (characterProfession == "rogue")
		{
			characterLevel++;
			characterHpMax += 3;
			characterMpMax += 3;
			characterHp = characterHpMax;
			characterMp = characterMpMax;
			characterStr += 1;
			characterIntel += 0;
			characterDex += 5;
			characterExp -= characterExpMax;
			characterExpMax = characterLevel * 9;
			std::cout << "YOU REACHED LEVEL " << characterLevel << "." << std::endl;
		}
	}
}



//DEATH OF PLAYER---------------------------------------
void Character::youHaveDied(const int& characterHp, bool& gameMenuRun, bool& battleMenuRun)
{
	if (characterHp <= 0)
	{
		system("cls");
		std::cout << "You have died." << std::endl;
		battleMenuRun = false;
		gameMenuRun = false;
		system("PAUSE");
	}
}