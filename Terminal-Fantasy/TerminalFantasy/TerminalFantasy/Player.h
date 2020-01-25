#pragma once

class Player {
public:
	Player();
	Player(std::string name);
	Player(std::string name, int max_health);
	Player(std::string name, int attack_damage, float defense_ratio);
	Player(std::string name, int max_health, int attack_damage, float defense_ratio);

	std::string SayTaunt(int i);
	std::string SayReaction(int i);
	std::string SayCelebration(int i);
	std::string GetName();

	void DisplayStats();

	int GetMaxHealth();
	void SetMaxHealth(int health);
	int GetAttackDamage();
	float GetDefenseRatio();

private:
	std::string name = "John Doe";
	int max_health = 100;
	int attack_damage = 15;
	float defense_ratio = .5f;
};

