//Player.cpp
#include "Player.h"
#include <iostream>
using namespace std;

Player::Player(){
	mName = "Default";
	mClassName = "Default";
	mAccuracy = 0;
	mHitPoints = 0;
	mMaxHitPoints = 0;
	mExpPoints = 0;
	mNextLevelExp = 0;
	mLevel = 0;
	mArmor = 0;
	
	
	
}

bool Player::isDead(){
	return mHitPoints <= 0;
}

int Player::getArmor(){
	return mArmor;
}

void Player::takeDamage(int damage){
	mHitPoints -= damage;
}

void Player::createClass(){
	cout << "CHARACTER CLASS GENERATION" << endl;
	cout << "==========================" << endl;

	cout << "Enter your character's name: ";
	getline(cin,mName);

	cout << "Please select a character class number..." << endl;
	cout << "1)Fighter 2)Wizard 3)Cleric 4)Thief: ";
	int characterNum = 1;
	cin  >> characterNum;

	switch(characterNum){
	case 1:
		mClassName = "Fighter";
		mAccuracy = 10;
		mHitPoints = 20;
		mMaxHitPoints = 20;
		mExpPoints = 0;
		mNextLevelExp = 1000;
		mLevel = 1;
		mArmor = 4;
		
		
		break;
	case 2:
		mClassName = "Wizard";
		mAccuracy = 5;
		mHitPoints = 10;
		mMaxHitPoints = 10;
		mExpPoints = 0;
		mNextLevelExp = 1000;
		mLevel = 1;
		mArmor = 1;
		
		break;
	case 3:
		mClassName = "Cleric";
		mAccuracy = 8;
		mHitPoints = 15;
		mMaxHitPoints = 15;
		mExpPoints = 0;
		mNextLevelExp = 1000;
		mLevel = 1;
		mArmor = 3;
		
		break;
	default:
		mClassName = "Thief";
		mAccuracy = 7;
		mHitPoints = 12;
		mMaxHitPoints = 12;
		mExpPoints = 0;
		mNextLevelExp = 1000;
		mLevel = 1;
		mArmor = 2;
		
		break;
	}
}



void Player::levelUp(){
	if(mExpPoints >= mNextLevelExp){
		cout << "You gained a level!" << endl;
		mLevel++;
		mNextLevelExp = mLevel * mLevel * 1000;
		mAccuracy += (3);
		mMaxHitPoints += (6);
		mArmor += (2);
		mHitPoints = mMaxHitPoints;
	}
}

void Player::rest(){
	cout << "Resting..." << endl;

	mHitPoints = mMaxHitPoints;
}

void Player::viewStats(){
	cout << "PLAYER STATS" << endl;
	cout << "============" << endl;
	cout << endl;

	cout << "Name				= " << mName << endl;
	cout << "Class				= " << mClassName << endl;
	cout << "Accuracy			= " << mAccuracy << endl;
	cout << "Hitpoints			= " << mHitPoints << endl;
	cout << "Max hitpoints		= " << mMaxHitPoints << endl;
	cout << "Xp					= " << mExpPoints << endl;
	cout << "Xp for next level	= " << mNextLevelExp << endl;
	cout << "Level				= " << mLevel << endl;
	cout << "Armor				= " << mArmor << endl;
	
	
		
	cout << endl;
	cout << "END PLAYER STATS" << endl;
	cout << "================" << endl;
	cout << endl;
}

void Player::victory(int xp){
	cout << "You won the battle!" << endl;
	cout << "You win " << xp << " experience points!" << endl;
	mExpPoints += xp;
}

void Player::gameover(){
	cout << "You died in battle..." << endl << endl;
	cout << "=======================" << endl;
	cout << "GAME OVER!" << endl;
	cout << "=======================" << endl;
	cout << "Press 'q' to quit: " << endl;
	char q = 'q';
	cin  >> q;
	cout << endl;
}

void Player::displayHitPoints(){
	cout << mName << "'s hitpoints = " << mHitPoints << endl;
}

int main(){
    Player player;
    player.createClass();
    player.viewStats();
    player.levelUp();
    player.viewStats();
    player.rest();
    player.viewStats();
    player.victory(1000);
    player.viewStats();
    player.levelUp();
    player.viewStats();
    player.gameover();
    return 0;
}