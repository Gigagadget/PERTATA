#pragma once
#include <string>
#include <string>

class Player {
public:
	Player() {};
	Player(std::string name);

	std::string getName();

private:
	std::string name = "";

};