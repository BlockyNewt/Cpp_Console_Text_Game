#pragma once
#ifndef ENEMIES
#define ENEMIES

#include "character.h"


#include <iostream>
#include <vector>
#include <string>	

#include "items.h"
#include "inventory.h"

Inventory;
Potion;

class Enemies
{
private:
	

public:
	Enemies();
	~Enemies();

	

	//accessors

	//modifiers
	virtual void startBattle(bool& gameMenuRun, bool& battleMenuRun, const std::string& characterProfession, std::string& characterName, int& characterLevel, int& characterExp, int& characterExpMax, int& characterHp, int& characterHpMax, int& characterMp, int& characterMpMax, int& characterStr, int& characterIntel, int& characterDex, const std::string mySkill1Name, int& mySkill1Dmg, int& mySkill1MpUse, const std::string mySkill2Name, int& mySkill2Dmg, int& mySkill2MpUse, const std::string mySkill3Name, int& mySkill3Dmg, int& mySkill3MpUse, const std::string& skill1Name, const int& skill1MpUse, const int& skill1Dmg, const std::string& skill2Name, const int& skill2MpUse, const int& skill2Dmg, const std::string& skill3Name, const int& skill3MpUse, const int& skill3Dmg, const std::string& skill4Name, const int& skill4MpUse, const int& skill4Dmg, const std::string& skill5Name, const int& skill5MpUse, const int& skill5Dmg, const std::string& skill6Name, const int& skill6MpUse, const int& skill6Dmg, const std::string& skill7Name, const int& skill7MpUse, const int& skill7Dmg, const std::string& skill8Name, const int& skill8MpUse, const int& skill8Dmg, const std::string& skill9Name, const int& skill9MpUse, const int& skill9Dmg, const std::string& hpPotion, const std::string& mpPotion, const std::string& strPotion, const std::string& intPotion, const std::string& dexPotion, Inventory& inventory);

	

	//functions
	virtual void enemyLoad();
	virtual void enemyPrint();
	
};



class Boar : public Enemies
{
private:

	Character character;
	
	
	std::string name;
	int hp;
	int hpMax;
	int level;
	int dmg;
	int exp;

public:
	Boar();
	~Boar();

	//accessors 
	inline const std::string& getName() const {
		return this->name; }
	inline const int& getLevel() const { return this->level; }
	inline const int& getHpMax() const { return this->hpMax; }


	//modifiers
	void enemyAttack(int& characterHp);
	void startBattle(bool& gameMenuRun, bool& battleMenuRun, const std::string& characterProfession, std::string& characterName, int& characterLevel, int& characterExp, int& characterExpMax, int& characterHp, int& characterHpMax, int& characterMp, int& characterMpMax, int& characterStr, int& characterIntel, int& characterDex, const std::string mySkill1Name, int& mySkill1Dmg, int& mySkill1MpUse, const std::string mySkill2Name, int& mySkill2Dmg, int& mySkill2MpUse, const std::string mySkill3Name, int& mySkill3Dmg, int& mySkill3MpUse, const std::string& skill1Name, const int& skill1MpUse, const int& skill1Dmg, const std::string& skill2Name, const int& skill2MpUse, const int& skill2Dmg, const std::string& skill3Name, const int& skill3MpUse, const int& skill3Dmg, const std::string& skill4Name, const int& skill4MpUse, const int& skill4Dmg, const std::string& skill5Name, const int& skill5MpUse, const int& skill5Dmg, const std::string& skill6Name, const int& skill6MpUse, const int& skill6Dmg, const std::string& skill7Name, const int& skill7MpUse, const int& skill7Dmg, const std::string& skill8Name, const int& skill8MpUse, const int& skill8Dmg, const std::string& skill9Name, const int& skill9MpUse, const int& skill9Dmg, const std::string& hpPotion, const std::string& mpPotion, const std::string& strPotion, const std::string& intPotion, const std::string& dexPotion, Inventory& inventory);

	void enemyDied(int& characterLevel, int& characterExp, int& characterExpMax, int& characterHp, int& characterHpMax, int& characterMp, int& characterMpMax, int& characterStr, int& characterIntel, int& characterDex, const std::string& characterProfession, const std::string& hpPotion, const std::string& mpPotion, const std::string& strPotion, const std::string& intPotion, const std::string& dexPotion, Inventory& inventory);


	//functions
	void enemyLoad();
	void enemyPrint();
	void battleInfoPrint(int& characterHp, int& characterHpMax, int& characterMp, int& characterMpMax, std::string& characterName);
};

class Wolf : public Enemies
{
private:

	Character character;

	std::string name;
	int hp;
	int hpMax;
	int level;
	int dmg;
	int exp;

public:
	Wolf();
	~Wolf();

	//accessors 
	inline const std::string& getName() const {
		return this->name; }
	inline const int& getLevel() const { return this->level; }
	inline const int& getHpMax() const { return this->hpMax; }


	//modifiers
	void enemyAttack(int& characterHp);
	void startBattle(bool& gameMenuRun, bool& battleMenuRun, const std::string& characterProfession, std::string& characterName, int& characterLevel, int& characterExp, int& characterExpMax, int& characterHp, int& characterHpMax, int& characterMp, int& characterMpMax, int& characterStr, int& characterIntel, int& characterDex, const std::string mySkill1Name, int& mySkill1Dmg, int& mySkill1MpUse, const std::string mySkill2Name, int& mySkill2Dmg, int& mySkill2MpUse, const std::string mySkill3Name, int& mySkill3Dmg, int& mySkill3MpUse, const std::string& skill1Name, const int& skill1MpUse, const int& skill1Dmg, const std::string& skill2Name, const int& skill2MpUse, const int& skill2Dmg, const std::string& skill3Name, const int& skill3MpUse, const int& skill3Dmg, const std::string& skill4Name, const int& skill4MpUse, const int& skill4Dmg, const std::string& skill5Name, const int& skill5MpUse, const int& skill5Dmg, const std::string& skill6Name, const int& skill6MpUse, const int& skill6Dmg, const std::string& skill7Name, const int& skill7MpUse, const int& skill7Dmg, const std::string& skill8Name, const int& skill8MpUse, const int& skill8Dmg, const std::string& skill9Name, const int& skill9MpUse, const int& skill9Dmg, const std::string& hpPotion, const std::string& mpPotion, const std::string& strPotion, const std::string& intPotion, const std::string& dexPotion, Inventory& inventory);

	void enemyDied(int& characterLevel, int& characterExp, int& characterExpMax, int& characterHp, int& characterHpMax, int& characterMp, int& characterMpMax, int& characterStr, int& characterIntel, int& characterDex, const std::string& characterProfession, const std::string& hpPotion, const std::string& mpPotion, const std::string& strPotion, const std::string& intPotion, const std::string& dexPotion, Inventory& inventory);


	//functions
	void enemyLoad();
	void enemyPrint();
	void battleInfoPrint(int& characterHp, int& characterHpMax, int& characterMp, int& characterMpMax, std::string& characterName);
};

class Bear : public Enemies
{
private:

	Character character;
	

	std::string name;
	int hp;
	int hpMax;
	int level;
	int dmg;
	int exp;

public:
	Bear();
	~Bear();

	//accessors 
	inline const std::string& getName() const {
		return this->name;
	}
	inline const int& getLevel() const { return this->level; }
	inline const int& getHpMax() const { return this->hpMax; }


	//modifiers
	void enemyAttack(int& characterHp);
	void startBattle(bool& gameMenuRun, bool& battleMenuRun, const std::string& characterProfession, std::string& characterName, int& characterLevel, int& characterExp, int& characterExpMax, int& characterHp, int& characterHpMax, int& characterMp, int& characterMpMax, int& characterStr, int& characterIntel, int& characterDex, const std::string mySkill1Name, int& mySkill1Dmg, int& mySkill1MpUse, const std::string mySkill2Name, int& mySkill2Dmg, int& mySkill2MpUse, const std::string mySkill3Name, int& mySkill3Dmg, int& mySkill3MpUse, const std::string& skill1Name, const int& skill1MpUse, const int& skill1Dmg, const std::string& skill2Name, const int& skill2MpUse, const int& skill2Dmg, const std::string& skill3Name, const int& skill3MpUse, const int& skill3Dmg, const std::string& skill4Name, const int& skill4MpUse, const int& skill4Dmg, const std::string& skill5Name, const int& skill5MpUse, const int& skill5Dmg, const std::string& skill6Name, const int& skill6MpUse, const int& skill6Dmg, const std::string& skill7Name, const int& skill7MpUse, const int& skill7Dmg, const std::string& skill8Name, const int& skill8MpUse, const int& skill8Dmg, const std::string& skill9Name, const int& skill9MpUse, const int& skill9Dmg, const std::string& hpPotion, const std::string& mpPotion, const std::string& strPotion, const std::string& intPotion, const std::string& dexPotion, Inventory& inventory);

	void enemyDied(int& characterLevel, int& characterExp, int& characterExpMax, int& characterHp, int& characterHpMax, int& characterMp, int& characterMpMax, int& characterStr, int& characterIntel, int& characterDex, const std::string& characterProfession, const std::string& hpPotion, const std::string& mpPotion, const std::string& strPotion, const std::string& intPotion, const std::string& dexPotion, Inventory& inventory);


	//functions
	void enemyLoad();
	void enemyPrint();
	void battleInfoPrint(int& characterHp, int& characterHpMax, int& characterMp, int& characterMpMax, std::string& characterName);
};

class Orc : public Enemies
{
private:
	Character character;

	std::string name;
	int hp;
	int hpMax;
	int level;
	int dmg;
	int exp;

public:
	Orc();
	~Orc();

	//accessors
	inline const std::string& getName() const {
		return this->name; }
	inline const int& getLevel() const { return this->level; }
	inline const int& getHpMax() const { return this->hpMax; }


	//modifiers
	void enemyAttack(int& characterHp);
	void startBattle(bool& gameMenuRun, bool& battleMenuRun, const std::string& characterProfession, std::string& characterName, int& characterLevel, int& characterExp, int& characterExpMax, int& characterHp, int& characterHpMax, int& characterMp, int& characterMpMax, int& characterStr, int& characterIntel, int& characterDex, const std::string mySkill1Name, int& mySkill1Dmg, int& mySkill1MpUse, const std::string mySkill2Name, int& mySkill2Dmg, int& mySkill2MpUse, const std::string mySkill3Name, int& mySkill3Dmg, int& mySkill3MpUse, const std::string& skill1Name, const int& skill1MpUse, const int& skill1Dmg, const std::string& skill2Name, const int& skill2MpUse, const int& skill2Dmg, const std::string& skill3Name, const int& skill3MpUse, const int& skill3Dmg, const std::string& skill4Name, const int& skill4MpUse, const int& skill4Dmg, const std::string& skill5Name, const int& skill5MpUse, const int& skill5Dmg, const std::string& skill6Name, const int& skill6MpUse, const int& skill6Dmg, const std::string& skill7Name, const int& skill7MpUse, const int& skill7Dmg, const std::string& skill8Name, const int& skill8MpUse, const int& skill8Dmg, const std::string& skill9Name, const int& skill9MpUse, const int& skill9Dmg, const std::string& hpPotion, const std::string& mpPotion, const std::string& strPotion, const std::string& intPotion, const std::string& dexPotion, Inventory& inventory);

	void enemyDied(int& characterLevel, int& characterExp, int& characterExpMax, int& characterHp, int& characterHpMax, int& characterMp, int& characterMpMax, int& characterStr, int& characterIntel, int& characterDex, const std::string& characterProfession, const std::string& hpPotion, const std::string& mpPotion, const std::string& strPotion, const std::string& intPotion, const std::string& dexPotion, Inventory& inventory);

	//functions
	void enemyLoad();
	void enemyPrint();
	void battleInfoPrint(int& characterHp, int& characterHpMax, int& characterMp, int& characterMpMax, std::string& characterName);
};

class OrcShaman : public Enemies
{
private:
	Character character;

	std::string name;
	int hp;
	int hpMax;
	int level;
	int dmg;
	int exp;

public:
	OrcShaman();
	~OrcShaman();

	//accessors
	inline const std::string& getName() const {
		return this->name; }
	inline const int& getLevel() const { return this->level; }
	inline const int& getHpMax() const { return this->hpMax; }

	//modifiers
	void enemyAttack(int& characterHp);
	void startBattle(bool& gameMenuRun, bool& battleMenuRun, const std::string& characterProfession, std::string& characterName, int& characterLevel, int& characterExp, int& characterExpMax, int& characterHp, int& characterHpMax, int& characterMp, int& characterMpMax, int& characterStr, int& characterIntel, int& characterDex, const std::string mySkill1Name, int& mySkill1Dmg, int& mySkill1MpUse, const std::string mySkill2Name, int& mySkill2Dmg, int& mySkill2MpUse, const std::string mySkill3Name, int& mySkill3Dmg, int& mySkill3MpUse, const std::string& skill1Name, const int& skill1MpUse, const int& skill1Dmg, const std::string& skill2Name, const int& skill2MpUse, const int& skill2Dmg, const std::string& skill3Name, const int& skill3MpUse, const int& skill3Dmg, const std::string& skill4Name, const int& skill4MpUse, const int& skill4Dmg, const std::string& skill5Name, const int& skill5MpUse, const int& skill5Dmg, const std::string& skill6Name, const int& skill6MpUse, const int& skill6Dmg, const std::string& skill7Name, const int& skill7MpUse, const int& skill7Dmg, const std::string& skill8Name, const int& skill8MpUse, const int& skill8Dmg, const std::string& skill9Name, const int& skill9MpUse, const int& skill9Dmg, const std::string& hpPotion, const std::string& mpPotion, const std::string& strPotion, const std::string& intPotion, const std::string& dexPotion, Inventory& inventory);

	void enemyDied(int& characterLevel, int& characterExp, int& characterExpMax, int& characterHp, int& characterHpMax, int& characterMp, int& characterMpMax, int& characterStr, int& characterIntel, int& characterDex, const std::string& characterProfession, const std::string& hpPotion, const std::string& mpPotion, const std::string& strPotion, const std::string& intPotion, const std::string& dexPotion, Inventory& inventory);

	//functions
	void enemyLoad();
	void enemyPrint();
	void battleInfoPrint(int& characterHp, int& characterHpMax, int& characterMp, int& characterMpMax, std::string& characterName);
};


#endif // !ENEMIES
