#pragma once
#ifndef INVENTORY
#define INVENTORY

#include "items.h"

class Inventory
{
private:

	Potion potion;
	mpPotion mppotion;
	strPotion strpotion;
	intPotion intpotion;
	dexPotion dexpotion;

	std::string items[5];
	int itemNumber[5];
	int nextItem;

	std::string searchItem;
	int itemNumb;
	char itemUseChoice;

	bool getItemDescriptionRun;
	int getItemDescriptionNumb;

	int dropChance;
	
public:
	Inventory();
	~Inventory();

	//accessors
	inline  int& getPotionStock()  { return this->itemNumber[0]; }
	inline  int& getMpPotionStock()  { return this->itemNumber[1]; }
	inline  int& getStrPotionStock()  { return this->itemNumber[2]; }
	inline  int& getIntPotionStock()  { return this->itemNumber[3]; }
	inline  int& getDexPotionStock()  { return this->itemNumber[4]; }
	
	//modifiers 
	void addItem(const std::string& itemName);
	void removeItem(const int& itemNumb);
	void useItem(int& characterHp, int& characterMp, int& characterStr, int& characterInt, int& characterDex, const std::string& hpPotion, const std::string& mpPotion, const std::string& strPotion, const std::string& intPotion, const std::string& dexPotion);
	void loadPotions(const int& potion, const int& mpPotion, const int& strPotion, const int& intPotion, const int& dexPotion);

	//functions
	void inventoryCreate();
	void init(int potion, int mpPotion, int strPotion, int intPotion, int dexPotion);
	void printBag();
	void getItemDescription();

};
#endif // !INVENTORY
