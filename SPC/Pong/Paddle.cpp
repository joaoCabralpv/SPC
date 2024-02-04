#include "Paddle.h"
#include "../common.h"
#include <algorithm>
#include "../Render.h"
#include <iostream>

#define ofset 20
#define PaddleWidth 20
#define PaddleHeight 100
#define velocity 10

Paddle::Paddle(char playerNumber)
{
	this->texture = LoadTexture("./Pong/paddle.png");
	this->playerNumber = playerNumber;
	if (playerNumber == 1)
	{
		this->x = ofset;
	}
	else if (playerNumber == 2)
	{
		this->x = DefaultWidth - ofset - PaddleWidth;
	}
		this->y = DefaultHeight/2;
}

Paddle::~Paddle()
{
	UnloadTexture(this->texture);
}

void Paddle::Render()
{	
	render(this->texture, this->x, this->y);
}

void Paddle::Move()
{
	char direction = 0;
	if (this->playerNumber == 1) {
		if (IsKeyDown(KEY_W))
			direction--;
		if (IsKeyDown(KEY_S))
			direction++;
	}
	else if (this->playerNumber == 2)
	{
		if (IsKeyDown(KEY_UP))
			direction--;
		if (IsKeyDown(KEY_DOWN))
			direction++;
	}
	y += (direction * velocity);
	

	if (y > DefaultHeight-PaddleHeight)
		y = DefaultHeight-PaddleHeight;

	if (y < 0)
		y = 0;
	

}

void Paddle::Update()
{
	this->Move();
	this->Render();
}

unsigned short Paddle::X()
{
	return this->x;
}

unsigned short Paddle::Y()
{
	return this->y;
}