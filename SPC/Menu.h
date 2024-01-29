#pragma once
#include "common.h"
#include "Button.h"
#include <vector>


class Menu
{	
public:
	Menu();
	void Render();
private:
	std::vector<Button> buttons;
	
};