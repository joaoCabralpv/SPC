#include <iostream>
#include "../common.h"
#include "Paddle.h"
#include "Ball.h"



void Pong()
{
	Paddle Player1(1);
	Paddle Player2(2);
	Ball ball;

	while (!WindowShouldClose())
	{
		BeginDrawing();

		Player1.Update();

		Player2.Update();

		ball.Update();

		ClearBackground(BLACK);

		EndDrawing();
	}
}