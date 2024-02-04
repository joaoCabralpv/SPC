#include "common.h"
#include <algorithm>

void render(Texture2D& texture, int x, int y) {
	float screenWidthToDefaultWidthRatio = ((float)GetScreenWidth() / (float)DefaultWidth);
	float screenWidthToDefaultHeightRatio = ((float)GetScreenHeight() / (float)DefaultHeight);
	float xPos = x * screenWidthToDefaultWidthRatio;
	float yPos = y * screenWidthToDefaultHeightRatio;
	float scale;
	if (std::min(GetScreenWidth(), GetScreenHeight()) == GetScreenWidth())
		scale = screenWidthToDefaultWidthRatio;
	else
		scale = screenWidthToDefaultHeightRatio;
	DrawTextureEx(texture, Vector2(xPos, yPos), 0, scale, WHITE);
}