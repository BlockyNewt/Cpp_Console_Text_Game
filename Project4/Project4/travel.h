#pragma once
#ifndef TRAVEL
#define TRAVEL

#include <iostream>
#include <string>

class Travel
{
private:
	int currentPos;
	int xPos = 0;
	int yPos = 0;

	bool menuRun;
	std::string mapSelect;
	std::string currentMap;
	bool currentMapRun;

	bool changeMapRun;

	bool mapRun;
	int mapChoice;
	
	bool moveRun;
	std::string direction;

	std::string map1Name;
	char map1Arr[5][5];
	bool map1Run;

	std::string map2Name;
	char map2Arr[7][7]; //MAKE CHAR AND FIX INIT 
	bool map2Run;

	std::string map3Name;
	bool map3Run;

	std::string map4Name;
	bool map4Run;

	std::string map5Name;
	bool map5Run;

	std::string map6Name;
	bool map6Run;


public:
	Travel();
	~Travel();

	//accessors
	inline const bool& getMap1Run() const { return this->map1Run; }
	inline const bool& getMap2Run() const { return this->map2Run; }
	inline const bool& getMap3Run() const { return this->map3Run; }
	inline const bool& getMap4Run() const { return this->map4Run; }
	inline const bool& getMap5Run() const { return this->map5Run; }
	inline const bool& getMap6Run() const { return this->map6Run; }

	//modifiers
	void move();
	void changeMap();


	//functions
	void map1Init();
	void map1Print();
	void map1Move();
	void map2Init();
	void map2Print();
	void map2Move();
	void map3Init();
	void map4Init();
	void map5Init();
	void map6Init();


	char currentPosChange();
	void mapMenu();
	void mapPic();
	void mapSelectTable();
};
#endif // !TRAVEL
