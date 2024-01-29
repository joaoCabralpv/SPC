#include "Menu.h"
#include <filesystem>
#include <iostream>
#include <string>


Menu::Menu()
{	//loads all the icons
	std::string path = "./icons";
	int i = 0;
	for (auto& entry : std::filesystem::directory_iterator(path)) { //reads all the files in the icons folder
		std::string path = entry.path().filename().string();
		const char* file = path.c_str(); //converts the path names to a Cstring (const char*)
		this->buttons.push_back(
			Button(
				std::string("pong"),
				"./icons/pong.png",
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
		button.Render();
	}
}




