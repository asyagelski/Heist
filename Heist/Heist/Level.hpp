#pragma once
#include "Json.hpp"

#include <fstream>

class Level
{
public:
	bool loadLevelDataFromFile(std::string filename);
	bool openFile(std::string filename);

	std::vector<int> tiles_background;
	std::vector<int> tiles_floor;
	std::vector<int> tiles_walls;
	std::vector<int> tiles_objects;

	std::ifstream infile;
private:
	int width, height;
	int tilewidth, tileheight;

};

