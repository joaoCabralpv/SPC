#include "Ball.h"
#include "../Render.h"

Ball::Ball()
{
	this->texture = LoadTexture("./Pong/ball.png");
	this->x = DefaultWidth / 2;
	this->y = DefaultHeight / 2;
	this->velocityX = this->velocityY = 5;
}

Ball::~Ball()
{
	UnloadTexture(this->texture);
}

void Ball::Move()
{
	this->x += this->velocityX;
	this->y += this->velocityY;
}

void Ball::Render()
{
	render(this->texture, this->x, this->y);
}

void Ball::Update()
{	
	this->Move();
	this->Render();
}
