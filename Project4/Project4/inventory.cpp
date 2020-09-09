#include "inventory.h"

#include <iostream>
#include <ctime>

Inventory::Inventory()
{

}

Inventory::~Inventory()
{
	
}

void Inventory::inventoryCreate()
{
	for (int i = 0; i < 5; i++)
	{
		items[i] = "";
		itemNumber[i] = 0;
	}
	items[0] = "HP POT";
	items[1] = "MP POT";
	items[2] = "STR POT";
	items[3] = "INT POT";
	items[4] = "DEX POT";

	std::cout << "INVENTORY CREATED." << std::endl;

	//need to use init and pass all values by reference into enemies
}

void Inventory::init( int potion,  int mpPotion,  int strPotion,  int intPotion,  int dexPotion)
{
	for (int i = 0; i < 5; i++)
	{
		items[i] = "";
		itemNumber[i] = 0;
	}
	items[0] = "HP POT";
	items[1] = "MP POT";
	items[2] = "STR POT";
	items[3] = "INT POT";
	items[4] = "DEX POT";

	itemNumber[0] = potion;
	itemNumber[1] = mpPotion;
	itemNumber[2] = strPotion;
	itemNumber[3] = intPotion;
	itemNumber[4] = dexPotion;

	std::cout << "INVENTORY LOAD." << std::endl;
}

void Inventory::addItem(const std::string& itemName)
{
		std::srand(std::time(0));
		dropChance = rand() % 101;
		if (itemName == items[0] && dropChance <= 50)
		{
			itemNumber[0] += 1;
			std::cout << "*A " << itemName << " WAS ADDED TO YOUR BAG." << std::endl;
			//this->nextItem++;
		}
		else if (itemName == items[1] && dropChance <= 50)
		{
			itemNumber[1] += 1;
			std::cout << "*A " << itemName << " WAS ADDED TO YOUR BAG." << std::endl;
			//this->nextItem++;
		}
		else if (itemName == items[2] && dropChance <= 25)
		{
			itemNumber[2] += 1;
			std::cout << "*A " << itemName << " WAS ADDED TO YOUR BAG." << std::endl;
			//this->nextItem++;
		}
		else if (itemName == items[3] && dropChance <= 25)
		{
			itemNumber[3] += 1;
			std::cout << "*A " << itemName << " WAS ADDED TO YOUR BAG." << std::endl;
			//this->nextItem++;
		}
		else if (itemName == items[4] && dropChance <= 25)
		{
			itemNumber[4] += 1;
			std::cout << "*A " << itemName << " WAS ADDED TO YOUR BAG." << std::endl;
			//this->nextItem++;
		}
}

void Inventory::removeItem(const int& nextItem)
{
	itemNumber[nextItem] -= 1;
}

void Inventory::useItem(int& characterHp, int& characterMp, int& characterStr, int& characterInt, int& characterDex, const std::string& hpPotion, const std::string& mpPotion, const std::string& strPotion, const std::string& intPotion, const std::string& dexPotion)
{
	printBag();

	std::cout << "WHICH ITEM WOULD YOU LIKE TO USE?: ";
	std::cin >> nextItem;
	if (items[0] != "" && nextItem == 0)
	{
		std::cout << "WOULD YOU LIKE TO USE " << items[nextItem] << " ?[y/n]: ";
		std::cin >> itemUseChoice;
		if (itemNumber[0] != 0 && itemUseChoice == 'y')
		{
			potion.itemOnUse(characterHp, hpPotion);

			removeItem(nextItem);
		}
		else if (itemUseChoice == 'n')
		{
			std::cout << "LET'S GET BACK TO THE BATTLE!" << std::endl;
			std::cout << "___________________________________________________________" << std::endl;
			system("pause");
		}
		else
		{
			std::cout << "YOU DO NOT HAVE ANY POTIONS." << std::endl;
			std::cout << "___________________________________________________________" << std::endl;
			system("pause");
		}
		
	}
	else if (items[1] != "" && nextItem == 1)
	{
		std::cout << "WOULD YOU LIKE TO USE " << items[nextItem] << " ?[y/n]: ";
		std::cin >> itemUseChoice;
		if (itemNumber[1] != 0 && itemUseChoice == 'y')
		{
			//change hp for mp
			mppotion.itemOnUse(characterMp, mpPotion);

			removeItem(nextItem);
		}
		else if (itemUseChoice == 'n')
		{
			std::cout << "LET'S GET BACK TO THE BATTLE!" << std::endl;
			std::cout << "___________________________________________________________" << std::endl;
			system("pause");
		}
		else
		{
			std::cout << "YOU DO NOT HAVE ANY POTIONS." << std::endl;
			std::cout << "___________________________________________________________" << std::endl;
			system("pause");
		}

	}
	else if (items[2] != "" && nextItem == 2)
	{
		std::cout << "WOULD YOU LIKE TO USE " << items[nextItem] << " ?[y/n]: ";
		std::cin >> itemUseChoice;
		if (itemNumber[2] != 0 && itemUseChoice == 'y')
		{
			//change hp for str
			strpotion.itemOnUse(characterStr, strPotion);

			removeItem(nextItem);
		}
		else if (itemUseChoice == 'n')
		{
			std::cout << "LET'S GET BACK TO THE BATTLE!" << std::endl;
			std::cout << "___________________________________________________________" << std::endl;
			system("pause");
		}
		else
		{
			std::cout << "YOU DO NOT HAVE ANY POTIONS." << std::endl;
			std::cout << "___________________________________________________________" << std::endl;
			system("pause");
		}

	}
	else if (items[3] != "" && nextItem == 3)
	{
		std::cout << "WOULD YOU LIKE TO USE " << items[nextItem] << " ?[y/n]: ";
		std::cin >> itemUseChoice;
		if (itemNumber[3] != 0 && itemUseChoice == 'y')
		{
			//change hp for int
			intpotion.itemOnUse(characterInt, intPotion);

			removeItem(nextItem);
		}
		else if (itemUseChoice == 'n')
		{
			std::cout << "LET'S GET BACK TO THE BATTLE!" << std::endl;
			std::cout << "___________________________________________________________" << std::endl;
			system("pause");
		}
		else
		{
			std::cout << "YOU DO NOT HAVE ANY POTIONS." << std::endl;
			std::cout << "___________________________________________________________" << std::endl;
			system("pause");
		}

	}
	else if (items[4] != "" && nextItem == 4)
	{
		std::cout << "WOULD YOU LIKE TO USE " << items[nextItem] << " ?[y/n]: ";
		std::cin >> itemUseChoice;
		if (itemNumber[4] != 0 && itemUseChoice == 'y')
		{
			//change hp for dex
			dexpotion.itemOnUse(characterDex, dexPotion);

			removeItem(nextItem);
		}
		else if (itemUseChoice == 'n')
		{
			std::cout << "LET'S GET BACK TO THE BATTLE!" << std::endl;
			std::cout << "___________________________________________________________" << std::endl;
			system("pause");
		}
		else
		{
			std::cout << "YOU DO NOT HAVE ANY POTIONS." << std::endl;
			std::cout << "___________________________________________________________" << std::endl;
			system("pause");
		}

	}

	else
	{
		std::cout << "NUMBER " << nextItem <<  " HAS NO ITEM." << std::endl;
		std::cout << "___________________________________________________________" << std::endl;
		system("pause");
	}
}

void Inventory::loadPotions(const int& potion, const int& mpPotion, const int& strPotion, const int& intPotion, const int& dexPotion)
{
	this->itemNumber[0] = potion;
	this->itemNumber[1] = mpPotion;
	this->itemNumber[2] = strPotion;
	this->itemNumber[3] = intPotion;
	this->itemNumber[4] = dexPotion;
}

void Inventory::printBag()
{
	std::cout << "___________________________________________________________" << std::endl;
	std::cout << "-------------NUMBER------ITEM---------STOCK----------------" << std::endl;
	for (int i = 0; i < 5; i++)
	{
		std::cout << "\t\t" << i << ". " << "\t" << items[i] << "\t\t" << itemNumber[i] << std::endl;
	}
	std::cout << "___________________________________________________________" << std::endl;
	
}

void Inventory::getItemDescription()
{
	getItemDescriptionRun = true;

	while (getItemDescriptionRun == true)
	{
		system("cls");
		printBag();
		std::cout << "TYPE '5' TO EXIT." << std::endl;
		std::cout << "TYPE ITEM 'NUMBER' TO GET ITEM INFORMATION. " << std::endl;
		std::cout << "___________________________________________________________" << std::endl;
		std::cout << ">";
		std::cin >> getItemDescriptionNumb;
		system("cls");
		printBag();

		switch (getItemDescriptionNumb)
		{
		case 0:
			getItemDescriptionRun = true;
			std::cout << "HP POT: WILL RESTORE 5 HP." << std::endl;
			std::cout << "___________________________________________________________" << std::endl;
			system("pause");

			break;
		case 1:
			getItemDescriptionRun = true;
			std::cout << "MP POT: WILL RESTORE 5 MP." << std::endl;
			std::cout << "___________________________________________________________" << std::endl;
			system("pause");

			break;
		case 2:
			getItemDescriptionRun = true;
			std::cout << "STR POT: WILL INCREASE STR BY 15." << std::endl;
			std::cout << "___________________________________________________________" << std::endl;
			system("pause");

			break;
		case 3:
			getItemDescriptionRun = true;
			std::cout << "INT POT: WILL INCREASE INT BY 15." << std::endl;
			std::cout << "___________________________________________________________" << std::endl;
			system("pause");

			break;
		case 4:
			getItemDescriptionRun = true;
			std::cout << "DEX POT: WILL INCREASE DEX BY 15." << std::endl;		
			std::cout << "___________________________________________________________" << std::endl;
			system("pause");

			break;
		case 5:
			getItemDescriptionRun = false;

			std::cout << "EXITING..." << std::endl;
			std::cout << "___________________________________________________________" << std::endl;
			break;
		default:

			break;
		}
	}
}