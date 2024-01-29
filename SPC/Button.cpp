#include "Button.h"

Button::Button(std::string name, const char* path, int x, int y)
	:TextureWraper{path}
	, name{name}
	, x{x}
	, y{y}
{}

void Button::Render()
{
	DrawTexture(this->GetTexture(), GetScreenWidth() / 2 -this->x*DefaulWidth, GetScreenHeight() / 2 - this->y * DefaultHeight, WHITE);
}
