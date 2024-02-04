#pragma once
#include "raylib.h"
#include"../common.h"

class Ball
{
private:
	Texture2D texture;
	char velocityX, velocityY;
	unsigned short x, y;
	void Render();
	void Move();
	//void Colide();
public:
	Ball();
	~Ball();
	void Update();
};

