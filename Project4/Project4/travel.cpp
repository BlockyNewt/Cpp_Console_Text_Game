#include "travel.h"

#include <iostream>
#include <thread>
#include <chrono>

using namespace std::this_thread;
using namespace std::chrono;

Travel::Travel()
{
	menuRun = true;

	mapRun = true;
	mapChoice = 10;

	changeMapRun = true;
	
	moveRun = true;
	direction = "";

	map1Name = "";
	map1Run = false;
	map2Name = "";
	map2Run = false;
	map3Name = "";
	map3Run = false;
	map4Name = "";
	map4Run = false;
	map5Name = "";
	map5Run = false;
	map6Name = "";
	map6Run = false;
}

Travel::~Travel()
{

}

//MAP INITS---------------------------------------------
//MAP 1-------------------------------------------------
void Travel::map1Init()
{
	this->map1Name = "FOREST";

	for (int i = 0; i < 5; i++)
	{
		for (int k = 0; k < 5; k++)
		{
			this->map1Arr[i][k] = '_';
		}
	}

	this->map1Arr[0][0] = '!';
	this->map1Arr[0][1] = '#';
	this->map1Arr[0][3] = '#';
	this->map1Arr[1][1] = '#';
	this->map1Arr[1][3] = '#';
	this->map1Arr[2][1] = '#';
	this->map1Arr[3][1] = '#';
	this->map1Arr[3][2] = '#';
	this->map1Arr[3][3] = '#';
	//WORK ON THIS

	std::cout << "MAP1 LOADED." << std::endl;
}

void Travel::map1Print()
{
	if (this->map1Run == true)
	{
		std::cout << "MAP: " << this->map1Name << std::endl;
		std::cout << "X: " << this->yPos << " " << "Y: " << this->xPos << std::endl;

		for (int i = 0; i < 5; i++)
		{
			for (int k = 0; k < 5; k++)
			{
				std::cout << this->map1Arr[i][k] << " ";
			}
			std::cout << std::endl;
		}
	}
}

void Travel::map1Move()
{
	mapRun = true;

	while (mapRun == true && this->map1Run == true)
	{
		map1Print();
		map2Print();
		std::cout << std::endl;

		std::cout << "DIRECTION: ";
		std::cin >> direction;

		if (direction == "up")
		{
			mapRun = true;
			this->map1Arr[this->xPos][this->yPos] = '_';
			this->xPos--;

			if (this->xPos != -1 && this->map1Arr[this->xPos][this->yPos] != '#')
			{
				currentPosChange();
			}
			else
			{
				this->xPos += 1;
				currentPosChange();

				std::cout << "WHERE ARE YOU GOING?!" << std::endl;
				system("PAUSE");
			}
		}
		else if (direction == "down")
		{
			mapRun = true;
			this->map1Arr[this->xPos][this->yPos] = '_';

			this->xPos++;

			if (this->xPos != 5 && this->map1Arr[this->xPos][this->yPos] != '#')
			{
				currentPosChange();
			}
			else
			{
				this->xPos -= 1;
				currentPosChange();

				std::cout << "WHERE ARE YOU GOING?!" << std::endl;
				system("PAUSE");
			}
		}
		else if (direction == "right" )
		{
			mapRun = true;
			this->map1Arr[this->xPos][this->yPos] = '_';
			this->yPos++;

			if (this->yPos != +5 && this->map1Arr[this->xPos][this->yPos] != '#')
			{
				currentPosChange();
			}
			else
			{
				this->yPos -= 1;
				currentPosChange();

				std::cout << "WHERE ARE YOU GOING?!" << std::endl;
				system("PAUSE");
			}
		}
		else if (direction == "left")
		{
			mapRun = true;
			this->map1Arr[this->xPos][this->yPos] = '_';
			this->yPos--;

			if (this->yPos != -1 && this->map1Arr[this->xPos][this->yPos] != '#')
			{
				currentPosChange();
			}
			else
			{
				this->yPos += 1;
				currentPosChange();

				std::cout << "WHERE ARE YOU GOING?!" << std::endl;
				system("PAUSE");
			}
		}
		else if (direction == "exit")
		{
			this->map1Arr[xPos][yPos] = 'X';
			mapRun = false;

			std::cout << ">EXITING..." << std::endl;
			system("PAUSE");
		}
		else
		{
			mapRun = true;
			std::cout << ">ERROR - " << direction << " - IS AN UNKNOWN DIRECTION." << std::endl;
			system("PAUSE");
		}
		system("cls");
	}
}
//MAP 1-------------------------------------------------

//MAP 2-------------------------------------------------
void Travel::map2Init()
{
	this->map2Name = "CAVE";

	for (int i = 0; i < 7; i++)
	{
		for (int k = 0; k < 7; k++)
		{
			this->map2Arr[i][k] = '_';
		}
	}

	this->map2Arr[5][6] = '#';
	this->map2Arr[5][5] = '#';
	this->map2Arr[5][4] = '#';
	this->map2Arr[5][3] = '#';
	this->map2Arr[5][2] = '#';
	this->map2Arr[5][0] = '#';
	this->map2Arr[0][1] = '#';
	this->map2Arr[0][2] = '#';
	this->map2Arr[0][3] = '#';
	this->map2Arr[0][4] = '#';
	this->map2Arr[0][5] = '#';
	this->map2Arr[1][1] = '#';
	this->map2Arr[1][2] = '#';
	this->map2Arr[1][3] = '#';
	this->map2Arr[1][4] = '#';
	this->map2Arr[1][5] = '#';
	this->map2Arr[2][1] = '#';
	this->map2Arr[2][3] = '!';
	this->map2Arr[1][5] = '#';
	this->map2Arr[2][4] = '#';
	this->map2Arr[2][5] = '#';
	this->map2Arr[3][1] = '#';
	this->map2Arr[3][2] = '#';
	this->map2Arr[3][4] = '#';
	this->map2Arr[3][5] = '#';



	std::cout << "MAP2 LOADED." << std::endl;
}

void Travel::map2Print()
{
	if (this->map2Run == true)
	{
		std::cout << "MAP: " << this->map2Name << std::endl;
		std::cout << "X: " << this->yPos << " " << "Y: " << this->xPos << std::endl;

		for (int i = 0; i < 7; i++)
		{
			for (int k = 0; k < 7; k++)
			{
				std::cout << this->map2Arr[i][k] << " ";
			}
			std::cout << std::endl;
		}
	}
}

void Travel::map2Move()
{
	mapRun = true;
	while (mapRun == true && this->map2Run == true)
	{
		map1Print();
		map2Print();
		std::cout << std::endl;

		std::cout << "DIRECTION: ";
		std::cin >> direction;

		if (direction == "up")
		{
			mapRun = true;
			this->map2Arr[this->xPos][this->yPos] = '_';
			this->xPos--;

			if (this->xPos != -1 && this->map2Arr[this->xPos][this->yPos] != '#')
			{
				currentPosChange();
			}
			else
			{
				this->xPos += 1;
				currentPosChange();

				std::cout << "WHERE ARE YOU GOING?!" << std::endl;
				system("PAUSE");
			}
		}
		else if (direction == "down")
		{
			mapRun = true;
			this->map2Arr[this->xPos][this->yPos] = '_';

			this->xPos++;

			if (this->xPos != +7 && this->map2Arr[this->xPos][this->yPos] != '#')
			{
				currentPosChange();
			}
			else
			{
				this->xPos -= 1;
				currentPosChange();

				std::cout << "WHERE ARE YOU GOING?!" << std::endl;
				system("PAUSE");
			}
		}
		else if (direction == "right")
		{
			mapRun = true;
			this->map2Arr[this->xPos][this->yPos] = '_';
			this->yPos++;

			if (this->yPos != +7 && this->map2Arr[this->xPos][this->yPos] != '#')
			{
				currentPosChange();
			}
			else
			{
				this->yPos -= 1;
				currentPosChange();

				std::cout << "WHERE ARE YOU GOING?!" << std::endl;
				system("PAUSE");
			}


		}
		else if (direction == "left")
		{
			mapRun = true;
			this->map2Arr[this->xPos][this->yPos] = '_';
			this->yPos--;

			if (this->yPos != -1 && this->map2Arr[this->xPos][this->yPos] != '#')
			{
				currentPosChange();
			}
			else
			{
				this->yPos += 1;
				currentPosChange();

				std::cout << "WHERE ARE YOU GOING?!" << std::endl;
				system("PAUSE");
			}
		}
		else if (direction == "exit")
		{
			this->map2Arr[xPos][yPos] = 'X';
			mapRun = false;

			std::cout << ">EXITING..." << std::endl;
			system("PAUSE");
		}
		else
		{
			mapRun = true;
			std::cout << ">ERROR - " << direction << " - IS AN UNKNOWN DIRECTION." << std::endl;
			system("PAUSE");
		}
		system("cls");
	}
}
//MAP 2-------------------------------------------------

//MAP 3-------------------------------------------------
void Travel::map3Init()
{
	this->map3Name = "KINGDOM PLAINS";

	std::cout << "MAP3 LOADED." << std::endl;
}
//MAP 3-------------------------------------------------

//MAP 4-------------------------------------------------
void Travel::map4Init()
{
	this->map4Name = "KINGDOM";

	std::cout << "MAP4 LOADED." << std::endl;
}
//MAP 4-------------------------------------------------

//MAP 5-------------------------------------------------
void Travel::map5Init()
{
	this->map5Name = "GRAVEYARD";

	std::cout << "MAP5 LOADED." << std::endl;
}
//MAP 5-------------------------------------------------

//MAP 6-------------------------------------------------
void Travel::map6Init()
{
	this->map6Name = "PLAGUED VILLAGE";

	std::cout << "MAP6 LOADED." << std::endl;
}
//MAP 6-------------------------------------------------

//MAP INITS---------------------------------------------


void Travel::changeMap()
{
	changeMapRun = true;
	while (changeMapRun == true)
	{
		system("cls");

		mapSelectTable();
		std::cout << "SELECT: ";
		//std::cin.ignore();
		std::getline(std::cin, mapSelect);

		if (mapSelect != "")
		{
			if (mapSelect == "forest")
			{
				system("cls");

				mapSelectTable();
				std::cout << "TRAVELING TO " << this->map1Name;
				sleep_for(seconds(1));
				std::cout << ".";
				sleep_for(seconds(1));
				std::cout << ".";

				this->map1Run = true;
				this->map2Run = false;
				this->map3Run = false;

				this->xPos = 0;
				this->yPos = 2;
				currentPosChange();

				changeMapRun = false;
			}
			else if (mapSelect == "cave")
			{
				system("cls");

				mapSelectTable();
				std::cout << "TRAVELING TO " << this->map2Name;
				sleep_for(seconds(1));
				std::cout << ".";
				sleep_for(seconds(1));
				std::cout << ".";
				sleep_for(seconds(1));
				std::cout << ".";
				sleep_for(seconds(1));
				std::cout << ".";

				this->map1Run = false;
				this->map2Run = true;
				this->map3Run = false;
				this->map4Run = false;
				this->map5Run = false;
				this->map6Run = false;

				this->xPos = 6;
				this->yPos = 6;
				currentPosChange();

				changeMapRun = false;
			}
			else if (mapSelect == "kingdom plains")
			{
				system("cls");

				mapSelectTable();
				std::cout << "TRAVELING TO " << this->map3Name;
				sleep_for(seconds(1));
				std::cout << ".";
				sleep_for(seconds(1));
				std::cout << ".";
				sleep_for(seconds(1));
				std::cout << ".";

				this->map1Run = false;
				this->map2Run = false;
				this->map3Run = true;
				this->map4Run = false;
				this->map5Run = false;
				this->map6Run = false;


				changeMapRun = false;
			}
			else if (mapSelect == "kingdom")
			{
				system("cls");

				mapSelectTable();

				std::cout << "TRAVELING TO " << this->map4Name;
				sleep_for(seconds(1));
				std::cout << ".";
				sleep_for(seconds(1));
				std::cout << ".";
				sleep_for(seconds(1));
				std::cout << ".";
				sleep_for(seconds(1));
				std::cout << ".";
				sleep_for(seconds(1));
				std::cout << ".";
				sleep_for(seconds(1));
				std::cout << ".";
				system("cls");

				mapSelectTable();
				std::cout << "THE CASTLE DOORS ARE LOCKED SHUT, BUT IT LOOKS LIKE THEY \n HAVE TAKEN A BEATEN. MAYBE THE CASTLE WAS SIEGED? YOU GET \n CHILLS AND DECIDE TO MOVE ON." << std::endl;
				std::cout << "___________________________________________________________" << std::endl;
				system("pause");

				this->map1Run = false;
				this->map2Run = false;
				this->map3Run = false;
				this->map4Run = false;
				this->map5Run = false;
				this->map6Run = false;


				changeMapRun = false;
			}
			else if (mapSelect == "graveyard")
			{
				system("cls");

				mapSelectTable();
				std::cout << "TRAVELING TO " << this->map5Name;
				sleep_for(seconds(1));
				std::cout << ".";
				sleep_for(seconds(1));
				std::cout << ".";
				sleep_for(seconds(1));
				std::cout << ".";
				sleep_for(seconds(1));
				std::cout << ".";
				sleep_for(seconds(1));
				std::cout << ".";

				this->map1Run = false;
				this->map2Run = false;
				this->map3Run = false;
				this->map4Run = false;
				this->map5Run = true;
				this->map6Run = false;


				changeMapRun = false;
			}
			else if (mapSelect == "plagued village")
			{
				system("cls");

				mapSelectTable();
				std::cout << "TRAVELING TO " << this->map6Name;
				sleep_for(seconds(1));
				std::cout << ".";
				sleep_for(seconds(1));
				std::cout << ".";
				sleep_for(seconds(1));
				std::cout << ".";
				sleep_for(seconds(1));
				std::cout << ".";
				sleep_for(seconds(1));
				std::cout << ".";
				sleep_for(seconds(1));
				std::cout << ".";
				sleep_for(seconds(1));
				std::cout << ".";

				this->map1Run = false;
				this->map2Run = false;
				this->map3Run = false;
				this->map4Run = false;
				this->map5Run = false;
				this->map6Run = true;


				changeMapRun = false;
			}

			else if (mapSelect == "exit")
			{
				system("cls");

				mapSelectTable();
				std::cout << "Exiting..." << std::endl;
				changeMapRun = false;

				system("pause");
			}
			else
			{
				system("cls");

				mapSelectTable();
				std::cout << "ERROR: '" << mapSelect << "' IS AN UNKNOWN LOCATION OR YOU ARE ALREADY \n\t\tON THE THE DESIRED MAP." << std::endl;
				std::cout << "___________________________________________________________" << std::endl;
				changeMapRun = true;

				system("pause");
			}
		}
	}
}

void Travel::move() //rework this // REWORK THIS
{
	if (this->map1Run == true)
	{
		map1Move();
	}
	else if (this->map2Run == true)
	{
		map2Move();
	}
	else
	{
		std::cout << "NO MAP SELECTED." << std::endl;
	}
} 

char Travel::currentPosChange()
{
	if (this->map1Run == true)
	{
		return this->map1Arr[this->xPos][this->yPos] = 'X';
	}
	else if (this->map2Run == true)
	{
		return this->map2Arr[this->xPos][this->yPos] = 'X';
	}
}

void Travel::mapMenu()
{
	system("cls");
	menuRun = true;

	while (menuRun == true)
	{
		system("cls");

		mapPic();

		std::cout << "___________________________________________________________" << std::endl;
		std::cout << std::endl;
		std::cout << "\t" << "1. TRAVEL" << "\t";
		std::cout << "2. MOVE";
		std::cout << "\t\t" << "3. MAIN MENU" << std::endl;
		std::cout << std::endl;
		std::cout << "___________________________________________________________" << std::endl;
		std::cout << "> ";
		std::cin >> mapChoice;
		switch (mapChoice)
		{
		case 1:
			system("cls");
			menuRun = true;
			changeMap();
			
			break;
		case 2:
			system("cls");
			menuRun = true;
			move();

			break;
		case 3:
			system("cls");
			menuRun = false;

			break;
		default:
			menuRun = true;
			std::cout << "UNKNOWN COMMAND!" << std::endl;

			break;
		}
	}
}

//PICS--------------------------------------------------
void Travel::mapPic()
{
	std::cout << " __   __   __   __   __   __   __   __   __   __   __   __ " << std::endl;
	std::cout << "|  |_|  |_|  |_|  |_|  |_|  |_|  |_|  |_|  |_|  |_|  |_|  |" << std::endl;
	std::cout << "|                                                         |"<< std::endl;
	std::cout << "|                                                         |" << std::endl;
	std::cout << "|                                                         |" << std::endl;
	std::cout << "|                    ________________                     |" << std::endl;
	std::cout << "|                   /                \\                    |" << std::endl;
	std::cout << "|                  |       ____       |                   |" << std::endl;
	std::cout << "|                  |      /    \\      |                   |" << std::endl;
	std::cout << "|                  |     |      |     |                   |" << std::endl;
	std::cout << "|                  |     |      |     |                   |" << std::endl;
	std::cout << "|                  |     |______|     |                   |" << std::endl;
	std::cout << "|                  |     /     \\      |                   |" << std::endl;
	std::cout << "|                  |    /       \\     |                   |" << std::endl;
	std::cout << "|                  |   /         \\    |                   |" << std::endl;
	std::cout << "|                  |  /           \\   |                   |" << std::endl;
	std::cout << "|                  | /             \\  |                   |" << std::endl;
	std::cout << "|__________________|/_______________\\ |___________________|" << std::endl;
	std::cout << "" << std::endl;
}

void Travel::mapSelectTable()
{
	std::cout << "___________________________________________________________" << std::endl;
	std::cout << "--------NAME--------------------LEVEL----------TIME--------" << std::endl;
	std::cout << "\t" << this->map1Name << "\t\t\t" << "1~3" << "\t\t" << "2" << std::endl;
	std::cout << "\t" << this->map2Name << "\t\t\t" << "4~5" << "\t\t" << "4" << std::endl;
	std::cout << "\t" << this->map3Name << "\t\t" << "6~9" << "\t\t" << "3" << std::endl;
	std::cout << "\t" << this->map4Name << "\t\t\t" << "?~?" << "\t\t" << "6" << std::endl;
	std::cout << "\t" << this->map5Name << "\t\t" << "10~12" << "\t\t" << "5" << std::endl;
	std::cout << "\t" << this->map6Name << "\t\t" << "13~17" << "\t\t" << "7" << std::endl;
	std::cout << std::endl;
	std::cout << "___________________________________________________________" << std::endl;
}