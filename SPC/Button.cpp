#include "Button.h"
#include <string>
#include "Texture.h"
#include <iostream>


Button::Button(std::string name, const char* path, int x, int y)
{
	this->name = name;
	this->path = path;
	this->x = x;
	this->y = y;
	this->texture = LoadTexture(path);
}

void Button::Render()
{	
	std::cout << "Render" << std::endl;
	int xPos =  + this->x * DefaulWidth / GetScreenWidth();
	int yPos =  + this->y * DefaultHeight / GetScreenHeight();
	std::cout << xPos << ":" <<GetScreenWidth() << " " << yPos << ":" << GetScreenHeight() << std::endl;
	DrawTexture(this->texture, xPos,yPos, WHITE);
	//DrawTexture(this->texture, 50, 50, WHITE);
}
