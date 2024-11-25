#pragma once

void Play();
bool CheckWinAndPrint(std::string playerName, int playerScore, int winScore);
void PrintScore(std::string playerName, int playerScore);
int RollTheDiceAndPrint(std::string playerName, int minDiceValue, int maxInclusiveDiceValue);
int Random(int min, int maxIncluding);