#pragma once
#include "common.h"
#include "Icon.h"
#include <vector>


class Menu
{	
public:
	Menu();
private:
	std::vector<Icon> icons;
	void LoadIcons();
	void LoadApp();
};