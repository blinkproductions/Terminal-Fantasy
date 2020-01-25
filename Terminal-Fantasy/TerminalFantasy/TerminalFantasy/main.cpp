#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


#include "Player.h"
#include "GameFunctions.h"

int IncrementByValue(int number) {
	return ++number;
}

void IncrementByReference(int &number) {
	number += 1;
}

int main() {
	
	Player FirstPlayer = Player("Rick", 100, 10, 0); //name, attack, defense
	Player SecondPlayer = Player("Negan", 100, 10, 0);
	FirstPlayer.DisplayStats();
	std::cout << std::endl;
	SecondPlayer.DisplayStats();
	std::cout << std::endl;

	AttackOpponent(FirstPlayer, SecondPlayer);

	FirstPlayer.DisplayStats();
	std::cout << std::endl;
	SecondPlayer.DisplayStats();
	std::cout << std::endl;

	/*
	srand(time(NULL));
	int randomnumber = std::rand() % 5;
	*/

	//int num = 1;
	//
	////PASS BY VALUE
	//std::cout << "PASS BY VALUE: \n";
	//std::cout << num << std::endl;
	//std::cout << std::to_string(IncrementByValue(num)) << std::endl;
	//std::cout << num << std::endl;

	////PASS BY REFERENCE
	//std::cout << "\nPASS BY REFERENCE: \n";
	//std::cout << num << std::endl;
	//std::cout << "...calling IncrementByReference()\n";
	//IncrementByReference(num);
	//std::cout << num << std::endl;

	

	return 0;
}
