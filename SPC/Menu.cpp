#include "Menu.h"
#include <filesystem>
#include <iostream>
#include <string>



Menu::Menu()
{	//loads all the icons
	std::string iconPath = "./icons";
	int i = 0;
	for (auto& entry : std::filesystem::directory_iterator(iconPath)) { //reads all the files in the icons folder
		std::string path = entry.path().string();
		std::string file = entry.path().filename().string(); //converts the path names to a Cstring (const char*)
		this->buttons.push_back(
			Button(
				file,
				path.c_str(),
				(i % 12 + 1) * 60
				, ((i / 12) + 1) * 60 //devides and modulates by 12 because each row of the menu has 12 icons
			));
		i++;
	}

			
}
 
void Menu::Render()
{	
	
	for (Button button : this->buttons)
	{
		//std::cout << "Rendering" << std::endl;
		button.Update();
	}
}




