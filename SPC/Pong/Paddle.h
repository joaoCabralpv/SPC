#pragma once
#include <raylib.h>

class Paddle
{
private:
	Texture2D texture;
	short x, y;
	char playerNumber;
	void Render();
	void Move();
public:
	Paddle(char playerNumber);
	~Paddle();
	void Update();
	unsigned short X();
	unsigned short Y();


};