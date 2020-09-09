#pragma once
#ifndef ITEMS
#define ITEMS

#include <iostream>
#include <string>

class Items
{
private:
	
	std::string itemName;
	std::string itemDesc;

public:
	Items();
	~Items();

	//accessors

	//modifiers

	//functions
	virtual void itemLoad();
	virtual void itemPrint();
};


class Potion : public Items
{
private:

	std::string itemName;

public:
	Potion();
	~Potion();

	//accessors
	inline const std::string& getName() const { return this->itemName; }

	//modifiers

	//functions
	void itemLoad();
	void itemPrint();
	void itemOnUse(int& characterHp, const std::string& itemName);
};

class mpPotion : public Items
{
private:

	std::string itemName;

public:
	mpPotion();
	~mpPotion();

	//accessors
	inline const std::string& getName() const { return this->itemName; }

	//modifiers

	//functions
	void itemLoad();
	void itemPrint();
	void itemOnUse(int& characterMp, const std::string& itemName);
};

class strPotion : public Items
{
private:

	std::string itemName;

public:
	strPotion();
	~strPotion();

	//accessors
	inline const std::string& getName() const { return this->itemName; }

	//modifiers

	//functions
	void itemLoad();
	void itemPrint();
	void itemOnUse(int& characterStr, const std::string& itemName);
};

class dexPotion : public Items
{
private:

	std::string itemName;

public:
	dexPotion();
	~dexPotion();

	//accessors
	inline const std::string& getName() const { return this->itemName; }

	//modifiers

	//functions
	void itemLoad();
	void itemPrint();
	void itemOnUse(int& characterDex, const std::string& itemName);
};

class intPotion : public Items
{
private:

	std::string itemName;

public:
	intPotion();
	~intPotion();

	//accessors
	inline const std::string& getName() const { return this->itemName; }

	//modifiers

	//functions
	void itemLoad();
	void itemPrint();
	void itemOnUse(int& characterDex, const std::string& itemName);
};
#endif // !ITEMS
