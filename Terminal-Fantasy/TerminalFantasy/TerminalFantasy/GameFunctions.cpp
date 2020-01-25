#include <iostream>
#include "GameFunctions.h"

void AttackOpponent(Player& FirstPlayer, Player& SecondPlayer)
{
	std::cout << SecondPlayer.GetName() << " is now attacking " << FirstPlayer.GetName() << ". . ." << std::endl;
	SecondPlayer.SetMaxHealth(SecondPlayer.GetMaxHealth() - FirstPlayer.GetAttackDamage());
}

void RollTheDice()
{
}


