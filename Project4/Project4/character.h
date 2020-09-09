#pragma once
#ifndef CHARACTER
#define CHARACTER

#include <iostream>
#include <string>

class Character
{
private:
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

	std::string skillSelect;
	std::string skill1Name;
	int skill1Dmg;
	int skill1MpUse;

	std::string skill2Name;
	int skill2Dmg;
	int skill2MpUse;

	std::string skill3Name;
	int skill3Dmg;
	int skill3MpUse;

	std::string skill4Name;
	int skill4Dmg;
	int skill4MpUse;

	std::string skill5Name;
	int skill5Dmg;
	int skill5MpUse;

	std::string skill6Name;
	int skill6Dmg;
	int skill6MpUse;

	std::string skill7Name;
	int skill7Dmg;
	int skill7MpUse;

	std::string skill8Name;
	int skill8Dmg;
	int skill8MpUse;

	std::string skill9Name;
	int skill9Dmg;
	int skill9MpUse;

public:
	Character();
	~Character();

	//accessors
	inline int& getLevel() { return this->level; }
	inline std::string& getName() { return this->name; }
	inline const std::string& getProfession() const {
		return this->profession; }
	inline int& getExp() { return this->exp; }
	inline int& getExpMax() { return this->expMax; }
	inline int& getHp() { return this->hp; }
	inline int& getHpMax() { return this->hpMax; }
	inline int& getMp() { return this->mp; }
	inline int& getMpMax() { return this->mpMax; }
	inline int& getStr() { return this->str; }
	inline int& getIntel() { return this->intel; }
	inline int& getDex() { return this->dex; }

	//MY SKILL BEGIN--------------------------------
	inline  int& getMySkill1MpUse()  { return this->mySkill1MpUse; }
	inline  int& getMySkill1Dmg()  { return this->mySkill1Dmg; }
	inline const std::string getMySkill1Name() const { return this->mySkill1Name; }

	inline  int& getMySkill2MpUse()  { return this->mySkill2MpUse; }
	inline  int& getMySkill2Dmg()  { return this->mySkill2Dmg; }
	inline const std::string getMySkill2Name() const { return this->mySkill2Name; }

	inline  int& getMySkill3MpUse()  { return this->mySkill3MpUse; }
	inline  int& getMySkill3Dmg()  { return this->mySkill3Dmg; }
	inline const std::string getMySkill3Name() const { return this->mySkill3Name; }
	//MY SKILL END--------------------------------
	
	inline  int& getSkill1MpUse()  { return this->skill1MpUse; }
	inline  int& getSkill1Dmg()  { return this->skill1Dmg; }
	inline const std::string getSkill1Name() const { return this->skill1Name; }

	inline const int& getSkill2MpUse() const { return this->skill2MpUse; }
	inline const int& getSkill2Dmg() const { return this->skill2Dmg; }
	inline const std::string getSkill2Name() const { return this->skill2Name; }

	inline const int& getSkill3MpUse() const { return this->skill3MpUse; }
	inline const int& getSkill3Dmg() const { return this->skill3Dmg; }
	inline const std::string getSkill3Name() const { return this->skill3Name; }

	inline const int& getSkill4MpUse() const { return this->skill4MpUse; }
	inline const int& getSkill4Dmg() const { return this->skill4Dmg; }
	inline const std::string getSkill4Name() const { return this->skill4Name; }

	inline const int& getSkill5MpUse() const { return this->skill5MpUse; }
	inline const int& getSkill5Dmg() const { return this->skill5Dmg; }
	inline const std::string getSkill5Name() const { return this->skill5Name; }

	inline const int& getSkill6MpUse() const { return this->skill6MpUse; }
	inline const int& getSkill6Dmg() const { return this->skill6Dmg; }
	inline const std::string getSkill6Name() const { return this->skill6Name; }

	inline const int& getSkill7MpUse() const { return this->skill7MpUse; }
	inline const int& getSkill7Dmg() const { return this->skill7Dmg; }
	inline const std::string getSkill7Name() const { return this->skill7Name; }

	inline const int& getSkill8MpUse() const { return this->skill8MpUse; }
	inline const int& getSkill8Dmg() const { return this->skill8Dmg; }
	inline const std::string getSkill8Name() const { return this->skill8Name; }

	inline const int& getSkill9MpUse() const { return this->skill9MpUse; }
	inline const int& getSkill9Dmg() const { return this->skill9Dmg; }
	inline const std::string getSkill9Name() const { return this->skill9Name; }

	//modifiers
	void createName();
	void selectClass(std::string createName);
	void levelUp(int& characterLevel, int& characterExp, int& characterExpMax, int& characterHp, int& characterHpMax, int& characterMp, int& characterMpMax, int& characterStr, int& characterIntel, int& characterDex, const std::string& characterProfession, int& enemyExp);

	void skill1Use(int& characterMp, int& characterStr, int& characterIntel, int& characterDex, const std::string& skill1Name, const int& skill1MpUse, const int& skill1Dmg, int& mySkill1Dmg, int& enemyHp); //USING INSIDE OF ENEMY
	void skill2Use(int& characterMp, int& characterStr, int& characterIntel, int& characterDex, const std::string& skill2Name, const int& skill2MpUse, const int& skill2Dmg, int& mySkill2Dmg, int& enemyHp); //USING INSIDE OF ENEMY
	void skill3Use(int& characterMp, int& characterStr, int& characterIntel, int& characterDex, const std::string& skill3Name, const int& skill3MpUse, const int& skill3Dmg, int& mySkill3Dmg, int& enemyHp); //USING INSIDE OF ENEMY
	void skill4Use(int& characterMp, int& characterStr, int& characterIntel, int& characterDex, const std::string& skill4Name, const int& skill4MpUse, const int& skill4Dmg, int& mySkill4Dmg, int& enemyHp); //USING INSIDE OF ENEMY
	void skill5Use(int& characterMp, int& characterStr, int& characterIntel, int& characterDex, const std::string& skill5Name, const int& skill5MpUse, const int& skill5Dmg, int& mySkill5Dmg, int& enemyHp); //USING INSIDE OF ENEMY
	void skill6Use(int& characterMp, int& characterStr, int& characterIntel, int& characterDex, const std::string& skill6Name, const int& skill6MpUse, const int& skill6Dmg, int& mySkill6Dmg, int& enemyHp); //USING INSIDE OF ENEMY
	void skill7Use(int& characterMp, int& characterStr, int& characterIntel, int& characterDex, const std::string& skill7Name, const int& skill7MpUse, const int& skill7Dmg, int& mySkill7Dmg, int& enemyHp); //USING INSIDE OF ENEMY
	void skill8Use(int& characterMp, int& characterStr, int& characterIntel, int& characterDex, const std::string& skill8Name, const int& skill8MpUse, const int& skill8Dmg, int& mySkill8Dmg, int& enemyHp); //USING INSIDE OF ENEMY
	void skill9Use(int& characterMp, int& characterStr, int& characterIntel, int& characterDex, const std::string& skill9Name, const int& skill9MpUse, const int& skill9Dmg, int& mySkill9Dmg, int& enemyHp); //USING INSIDE OF ENEMY
	
	void selectSkill(int& characterMp, const std::string& profession, int& characterStr, int& characterIntel, int& characterDex, const std::string mySkill1Name, int& mySkill1Dmg, int& mySkill1MpUse, const std::string mySkill2Name, int& mySkill2Dmg, int& mySkill2MpUse, const std::string mySkill3Name, int& mySkill3Dmg, int& mySkill3MpUse, const std::string& skill1Name, const int& skill1MpUse, const int& skill1Dmg, const std::string& skill2Name, const int& skill2MpUse, const int& skill2Dmg, const std::string& skill3Name, const int& skill3MpUse, const int& skill3Dmg, const std::string& skill4Name, const int& skill4MpUse, const int& skill4Dmg, const std::string& skill5Name, const int& skill5MpUse, const int& skill5Dmg, const std::string& skill6Name, const int& skill6MpUse, const int& skill6Dmg, const std::string& skill7Name, const int& skill7MpUse, const int& skill7Dmg, const std::string& skill8Name, const int& skill8MpUse, const int& skill8Dmg, const std::string& skill9Name, const int& skill9MpUse, const int& skill9Dmg, int& enemyHp); //USING INSIDE OF ENEMY


	//functions
	void statInit(const std::string name, const std::string chooseClass, const std::string& mySkill1Name, const int& mySkill1Dmg, const int& mySkill1MpUse, const std::string& mySkill2Name, const int& mySkill2Dmg, const int& mySkill2MpUse, const std::string& mySkill3Name, const int& mySkill3Dmg, const int& mySkill3MpUse, const int& skill1Dmg, const int& skill2Dmg, const int& skill3Dmg, const int& skill4Dmg, const int& skill5Dmg, const int& skill6Dmg, const int& skill7Dmg, const int& skill8Dmg, const int& skill9Dmg, int str, int intel, int dex, int level, int exp, int hp, int hpMax, int mp, int mpMax);
	void printStats();
	void skillWaitTimer();

	void youHaveDied(const int& characterHp, bool& gameMenuRun, bool& battleMenuRun);

};
#endif // !1
