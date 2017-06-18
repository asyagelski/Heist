#pragma once

class Player
{
public:
	//Setters
	void setHealth(int amount)
	{
		health = amount;
	}
	void setSpeed(float amount)
	{
		speed = amount;
	}
	void setArmor(float amount)
	{
		armor = amount;
	}

	//Getters
	int getHealth()
	{
		return health;
	}
	float getSpeed()
	{
		return speed;
	}
	float getArmor()
	{
		return armor;
	}
private:
	int health;
	float speed;
	float armor;
};