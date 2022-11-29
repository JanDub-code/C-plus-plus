//Player.h
#ifndef PLAYER_H
#define PLAYER_H


#include <string>

class Monster;

class Player{
public:
	Player();
	bool isDead();
	std::string getName();
	int getArmor();
	void takeDamage(int damage);
	void createClass();
	bool attack(Monster& monster);
	void levelUp();
	void rest();
	void viewStats();
	void victory(int xp);
	void gameover();
	void displayHitPoints();
private:
	std::string mName;
	std::string mClassName;
	int mAccuracy;
	int mHitPoints;
	int mMaxHitPoints;
	int mExpPoints;
	int mNextLevelExp;
	int mLevel;
	int mArmor;
};

#endif 