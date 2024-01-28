#pragma once
#include "common.h"

class TextureWraper
{
private:
	Texture2D texture;

public:
	TextureWraper(const char* path);
	~TextureWraper();
	virtual void Render();
protected:
	Texture2D GetTexture();
};
