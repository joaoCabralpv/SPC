#include "Button.h"
#include <string>
#include "Texture.h"
#include <iostream>
#include <algorithm>


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
	//std::cout << this->x << this->y << std::endl;
	float screenWidthToDefaultWidthRatio = ((float)GetScreenWidth() / (float)DefaultWidth);
	float screenWidthToDefaultHeightRatio = ((float)GetScreenHeight() / (float)DefaultHeight);
	int xPos =  this->x * screenWidthToDefaultWidthRatio;
	int yPos =  this->y * screenWidthToDefaultHeightRatio;
	//std::cout << xPos << ":" <<GetScreenWidth() << " " << yPos << ":" << GetScreenHeight() << std::endl;
	float scale;
	if (std::min(GetScreenWidth(), GetScreenHeight()) == GetScreenWidth())
	{
		scale = screenWidthToDefaultWidthRatio;
	}
	else
	{
		scale = screenWidthToDefaultHeightRatio;
	}
	DrawTextureEx(this->texture, Vector2(xPos,yPos),0, scale, WHITE);
	//DrawTexture(this->texture, xPos, yPos, WHITE);
	//DrawTexture(this->texture, 50, 50, WHITE);
}
