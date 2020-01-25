#include <iostream>
#include <string>
#include <vector>
#include "Player.h"



std::vector<std::string> taunts{ "Nope", "I got this", "That's it?" };
std::vector<std::string> celebrations{ "woop!", "booyah!", "Let's go!" };
std::vector<std::string> reactions{ "Ouchie", "Stop that", "Blurgh!" };

Player::Player() {
	Player::name = name;
	Player::max_health = max_health;
	Player::attack_damage = attack_damage;
	Player::defense_ratio = defense_ratio;
}

Player::Player(std::string name, int attack_damage, float defense_ratio)
{
	Player::name = name;
	Player::attack_damage = attack_damage;
	Player::defense_ratio = defense_ratio;
}

Player::Player(std::string name, int max_health, int attack_damage, float defense_ratio)
{
	Player::name = name;
	Player::max_health = max_health;
	Player::attack_damage = attack_damage;
	Player::defense_ratio = defense_ratio;
}

Player::Player(std::string name)
{
	Player::name = name;
}

Player::Player(std::string name, int max_health)
{
	Player::name = name;
	Player::max_health = max_health;
}

std::string Player::SayTaunt(int i)
{
	return taunts[i];
}

std::string Player::SayReaction(int i)
{
	return reactions[i];
}

std::string Player::SayCelebration(int i)
{
	return celebrations[i];
}

std::string Player::GetName()
{
	return this->name;
}


int Player::GetMaxHealth()
{
	return this->max_health;
}

void Player::SetMaxHealth(int health)
{
	this->max_health = health;
}

int Player::GetAttackDamage()
{
	return this->attack_damage;
}

float Player::GetDefenseRatio()
{
	return this->defense_ratio;
}

void Player::DisplayStats()
{
	std::string output = "Name: ";

	std::cout << "Name: "<< this->name << "\nMax Health: " << std::to_string(this->GetMaxHealth()) + "\nAttack Damage: " << std::to_string(this->GetAttackDamage()) << "\nDefense Ratio: " << std::to_string(this->GetDefenseRatio()) << "\n";

}
