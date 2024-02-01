#include "Button.h"
#include <string>
#include <iostream>
#include <algorithm>
#include "Apps.h"
#include "Window.h"

#define TEXTURESIZE 50



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
	float xPos = this->x * screenWidthToDefaultWidthRatio;
	float yPos =  this->y * screenWidthToDefaultHeightRatio;
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

bool Button::CheckIfMouseIsHovering()
{
	int xMouse = GetMouseX();
	int yMouse = GetMouseY();

	if ((xMouse >= this->x) && (xMouse <= (this->x + TEXTURESIZE)))
		if ((yMouse >= this->y) && (yMouse <= (this->y + TEXTURESIZE)))
			return true;
	return false;
}

void Button::RunApp()
{
	
	CloseWindow();

	if (this->name == "Pong.png")
		Pong();
	else
		std::cout << "Invalid name: " << this->name << std::endl;

	StartWindow();

}

void Button::Update()
{
	if (this->CheckIfMouseIsHovering() && IsMouseButtonReleased(MOUSE_BUTTON_LEFT))
	{
		this->RunApp();
	}
	this->Render();
}

