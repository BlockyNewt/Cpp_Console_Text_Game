#include "items.h"

#include <iostream>

Items::Items()
{

}

Items::~Items()
{

}

void Items::itemLoad()
{

}

void Items::itemPrint()
{

}



//POTION BEGIN-------------------------------------------------
Potion::Potion()
{
	itemName = "";
}

Potion::~Potion()
{

}

void Potion::itemLoad()
{
	this->itemName = "HP POT";

	std::cout << "ITEM POTION LOADED." << std::endl;
}

void Potion::itemPrint()
{

}

void Potion::itemOnUse(int& characterHp, const std::string& itemName)
{
	characterHp += 5;
	std::cout << "YOU HAVE USED A " << itemName << " AND GAINED 5 HP." << std::endl;
	std::cout << "___________________________________________________________" << std::endl;
	system("pause");
}

//POTION END---------------------------------------------------



//MP POTION BEGIN----------------------------------------------
mpPotion::mpPotion()
{
	itemName = "";
}

mpPotion::~mpPotion()
{

}

void mpPotion::itemLoad()
{
	this->itemName = "MP POT";

	std::cout << "ITEM MP POTION LOADED." << std::endl;
}

void mpPotion::itemPrint()
{

}

void mpPotion::itemOnUse(int& characterMp, const std::string& itemName)
{
	characterMp += 5;
	std::cout << "YOU HAVE USED A " << itemName << " AND GAINED 5 MP." << std::endl;
	std::cout << "___________________________________________________________" << std::endl;
	system("pause");
}
//MP POTION END------------------------------------------------



//STR POTION BEGIN---------------------------------------------
strPotion::strPotion()
{
	itemName = "";
}

strPotion::~strPotion()
{

}

void strPotion::itemLoad()
{
	this->itemName = "STR POT";

	std::cout << "ITEM STR POTION LOADED." << std::endl;
}

void strPotion::itemPrint()
{

}

void strPotion::itemOnUse(int& characterStr, const std::string& itemName)
{
	characterStr += 15;
	std::cout << "YOU HAVE USED A " << itemName << " AND GAINED 15 STR." << std::endl;
	std::cout << "___________________________________________________________" << std::endl;
	system("pause");
}
//STR POTION END-----------------------------------------------



//DEX POTION BEGIN---------------------------------------------
dexPotion::dexPotion()
{
	itemName = "";
}

dexPotion::~dexPotion()
{

}

void dexPotion::itemLoad()
{
	this->itemName = "DEX POT";

	std::cout << "ITEM DEX POTION LOADED." << std::endl;
}

void dexPotion::itemPrint()
{

}

void dexPotion::itemOnUse(int& characterDex, const std::string& itemName)
{
	characterDex += 15;
	std::cout << "YOU HAVE USED A " << itemName << " AND GAINED 15 DEX." << std::endl;
	std::cout << "___________________________________________________________" << std::endl;
	system("pause");
}
//DEX POTION END-----------------------------------------------



//INT POTION BEGIN---------------------------------------------
intPotion::intPotion()
{
	itemName = "";
}

intPotion::~intPotion()
{

}

void intPotion::itemLoad()
{
	this->itemName = "INT POT";

	std::cout << "ITEM INT POTION LOADED." << std::endl;
}

void intPotion::itemPrint()
{

}

void intPotion::itemOnUse(int& characterInt, const std::string& itemName)
{
	characterInt += 15;
	std::cout << "YOU HAVE USED A " << itemName << " AND GAINED 15 INT." << std::endl;
	std::cout << "___________________________________________________________" << std::endl;
	system("pause");
}
//INT POTION END-----------------------------------------------