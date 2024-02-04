#include "Button.h"
#include <string>
#include <iostream>
#include "Apps.h"
#include "Window.h"
#include "Render.h"

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
	render(this->texture, this->x, this->y);
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
	if (this->name == "Pong.png")
		Pong();
	else
		std::cout << "Invalid name: " << this->name << std::endl;


}

void Button::Update()
{
	if (this->CheckIfMouseIsHovering() && IsMouseButtonReleased(MOUSE_BUTTON_LEFT))
	{
		this->RunApp();
	}
	this->Render();
}

