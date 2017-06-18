#include "Level.hpp"

using json = nlohmann::json;

bool Level::openFile(std::string filename)
{
	try
	{
		infile.open(filename.c_str());
		return true;
	}
	catch (...)
	{
		std::cout << "Couldn't open " << filename << "." << std::endl;
		return false;
	}
}

bool Level::loadLevelDataFromFile(std::string filename)
{
	if (!openFile(filename))
	{
		std::cout << "Cannot load level." << std::endl;
		return false;
	}

	json filedata;
	infile >> filedata;

	//Set width
	if (filedata.find("width") != filedata.end)
	{
		width = filedata["width"];
	}
	else
	{
		std::cout << "Couldn't set the width of the tilemap." << std::endl;
		return false;
	}

	//Set height
	if (filedata.find("height") != filedata.end)
	{
		height = filedata["height"];
	}
	else
	{
		std::cout << "Couldn't set the height of the tilemap." << std::endl;
		return false;
	}

	//Set tilewidth
	if (filedata.find("tilewidth") != filedata.end)
	{
		width = filedata["tilewidth"];
	}
	else
	{
		std::cout << "Couldn't set the tilewidth of the tilemap." << std::endl;
		return false;
	}
	
	//Set tileheight
	if (filedata.find("tileheight") != filedata.end)
	{
		height = filedata["tileheight"];
	}
	else
	{
		std::cout << "Couldn't set the tileheight of the tilemap." << std::endl;
		return false;
	}

}