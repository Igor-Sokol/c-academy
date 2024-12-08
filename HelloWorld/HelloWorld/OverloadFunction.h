#pragma once
#include <string>
#include <vector>
#include <iostream>

void print(int value);
void print(float value);
void print(std::string value);
void print(char* value);
void print(int* value);
void print(std::vector<int> value);
void print(std::shared_ptr<int> value);
void print(std::unique_ptr<double> value);