#include <iostream>
#include <cstdlib>
#include "Game.h"

void Play()
{
	using namespace std;
	srand(time(0));

	string nameFirstPlayer = "Первый игрок";
	string nameSecondPlayer = "Второй игрок";
	int scoreFirstPlayer { 0 };
	int scoreSecondPlayer { 0 };
	int minRandomValue = -5;
	int maxInclusiveRandomValue = 5;
	int winScore = 50;

	for (int i = 0; i < 50; i++)
	{
		scoreFirstPlayer += RollTheDiceAndPrint(nameFirstPlayer, 0, maxInclusiveRandomValue);
		scoreSecondPlayer += RollTheDiceAndPrint(nameSecondPlayer, 0, maxInclusiveRandomValue);

		PrintScore(nameFirstPlayer, scoreFirstPlayer);
		PrintScore(nameFirstPlayer, scoreSecondPlayer);

		scoreFirstPlayer += RollTheDiceAndPrint(nameFirstPlayer, minRandomValue, 0);
		scoreSecondPlayer += RollTheDiceAndPrint(nameSecondPlayer, minRandomValue, 0);

		PrintScore(nameFirstPlayer, scoreFirstPlayer);
		PrintScore(nameFirstPlayer, scoreSecondPlayer);

		if (CheckWinAndPrint(nameFirstPlayer, scoreFirstPlayer, winScore)) return;
		if (CheckWinAndPrint(nameSecondPlayer, scoreSecondPlayer, winScore)) return;
	}

	cout << "Победитель ны выявился! Ничья!" << endl;
}

bool CheckWinAndPrint(std::string playerName, int playerScore, int winScore)
{
	using namespace std;

	if (playerScore >= winScore)
	{
		cout << playerName << " победил!" << endl;
		return true;
	}

	return false;
}

void PrintScore(std::string playerName, int playerScore)
{
	using namespace std;

	cout << playerName << " имеет - " << playerScore << " очков" << endl;
}

int RollTheDiceAndPrint(std::string playerName, int minDiceValue, int maxInclusiveDiceValue)
{
	using namespace std;

	cout << playerName << " бросает кости" << endl;



	int randomValue = Random(minDiceValue, maxInclusiveDiceValue);
	cout << "Выпало - " << randomValue << endl;

	return randomValue;
}

int Random(int min, int maxIncluding)
{
	return rand() % (maxIncluding - min + 1) + min;
}