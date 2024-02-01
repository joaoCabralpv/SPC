#pragma once
#include "common.h"
#include <string>


class Button
{
private:
	int x, y;
	std::string name;
	std::string path;
	Texture2D texture;
	void Render();
	bool CheckIfMouseIsHovering();
	void RunApp();
public:	
	Button(std::string name, const char* path, int x, int y);
	void Update();


};