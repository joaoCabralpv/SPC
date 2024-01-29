#pragma once
#include "common.h"
#include "Texture.h"
#include <string>


class Button : public TextureWraper
{
public:
	int x, y;

	std::string name;

	Button(std::string name, const char* path, int x, int y);
	void Render() override;


};