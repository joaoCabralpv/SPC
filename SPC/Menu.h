#pragma once
#include "common.h"
#include "Button.h"
#include <vector>


class Menu
{	
public:
	Menu();
private:
	std::vector<Button> buttons;
	void LoadIcons();
	void LoadApp();
};