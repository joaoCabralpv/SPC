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
		this->icons.push_back(
			Icon(
				path,
				file,
				(i%12+1)*60 
				,((i/12)+1)*60 //devides and modulates by 12 because each row of the menu has 12 icons
			)); 
		i++;
	}

}
