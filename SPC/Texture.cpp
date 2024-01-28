#include "Texture.h"


TextureWraper::TextureWraper(const char* path)
{
	this->texture = LoadTexture(path);
}

TextureWraper::~TextureWraper()
{
	UnloadTexture(this->texture);
}

void TextureWraper::Render()
{
	return;
}


Texture2D TextureWraper::GetTexture()
{
	return this->texture;
}
