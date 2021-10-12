#include "pch.h"


TEST(SquareTest, middle) {
	XY square[8];
	square[0].x = 0;
	square[0].y = 10;
	square[1].x = 10;
	square[1].y = 10;
	square[2].x = 10;
	square[2].y = 10;
	square[3].x = 10;
	square[3].y = 0;
	square[4].x = 10;
	square[4].y = 0;
	square[5].x = 0;
	square[5].y = 0;
	square[6].x = 0;
	square[6].y = 0;
	square[7].x = 0;
	square[7].y = 10;
	XY point;
	point.x = 5;
	point.y = 5;
	EXPECT_EQ(isInteract(point, square, 8), true);
}

TEST(SquareTest, outOfRange) {
	XY square[8];
	square[0].x = 0;
	square[0].y = 10;
	square[1].x = 10;
	square[1].y = 10;
	square[2].x = 10;
	square[2].y = 10;
	square[3].x = 10;
	square[3].y = 0;
	square[4].x = 10;
	square[4].y = 0;
	square[5].x = 0;
	square[5].y = 0;
	square[6].x = 0;
	square[6].y = 0;
	square[7].x = 0;
	square[7].y = 10;
	XY point;
	point.x = 10;
	point.y = 11;
	EXPECT_EQ(isInteract(point, square, 8), false);
}


TEST(SquareTest, onBorder) {
	XY square[8];
	square[0].x = 0;
	square[0].y = 10;
	square[1].x = 10;
	square[1].y = 10;
	square[2].x = 10;
	square[2].y = 10;
	square[3].x = 10;
	square[3].y = 0;
	square[4].x = 10;
	square[4].y = 0;
	square[5].x = 0;
	square[5].y = 0;
	square[6].x = 0;
	square[6].y = 0;
	square[7].x = 0;
	square[7].y = 10;
	XY point;
	point.x = 10;
	point.y = 5;
	EXPECT_EQ(isInteract(point, square, 8), true);
}

TEST(RectangleTest, middle) {
	XY rect[6];
	rect[0].x = 5;
	rect[0].y = 10;
	rect[1].x = 10;
	rect[1].y = 0;
	rect[2].x = 10;
	rect[2].y = 0;
	rect[3].x = 0;
	rect[3].y = 0;
	rect[4].x = 0;
	rect[4].y = 0;
	rect[5].x = 5;
	rect[5].y = 10;
	XY point;
	point.x = 5;
	point.y = 5;
	EXPECT_EQ(isInteract(point, rect, 6), true);
}

TEST(RectangleTest, onBorder) {
	XY rect[6];
	rect[0].x = 5;
	rect[0].y = 10;
	rect[1].x = 10;
	rect[1].y = 0;
	rect[2].x = 10;
	rect[2].y = 0;
	rect[3].x = 0;
	rect[3].y = 0;
	rect[4].x = 0;
	rect[4].y = 0;
	rect[5].x = 5;
	rect[5].y = 10;
	XY point;
	point.x = 5;
	point.y = 10;
	EXPECT_EQ(isInteract(point, rect, 6), true);
}

TEST(RectangleTest, outOfRange) {
	XY rect[6];
	rect[0].x = 5;
	rect[0].y = 10;
	rect[1].x = 10;
	rect[1].y = 0;
	rect[2].x = 10;
	rect[2].y = 0;
	rect[3].x = 0;
	rect[3].y = 0;
	rect[4].x = 0;
	rect[4].y = 0;
	rect[5].x = 5;
	rect[5].y = 10;
	XY point;
	point.x = 6;
	point.y = 10;
	EXPECT_EQ(isInteract(point, rect, 6), false);
}

TEST(IncisionTest, middle) {
	XY ins[14];
	ins[0].x = 3;
	ins[0].y = 0;
	ins[1].x = 0;
	ins[1].y = 2;
	ins[2].x = 0;
	ins[2].y = 2;
	ins[3].x = 0;
	ins[3].y = 4;
	ins[4].x = 0;
	ins[4].y = 4;
	ins[5].x = 2;
	ins[5].y = 6;
	ins[6].x = 2;
	ins[6].y = 6;
	ins[7].x = 3;
	ins[7].y = 4;
	ins[8].x = 3;
	ins[8].y = 4;
	ins[9].x = 4;
	ins[9].y = 6;
	ins[9].x = 4;
	ins[9].y = 6;
	ins[10].x = 6;
	ins[10].y = 4;
	ins[11].x = 6;
	ins[11].y = 4;
	ins[12].x = 6;
	ins[12].y = 2;
	ins[13].x = 6;
	ins[13].y = 2;
	ins[13].x = 3;
	ins[13].y = 0;
	XY point;
	point.x = 3;
	point.y = 2;
	EXPECT_EQ(isInteract(point, ins, 14), true);
}

TEST(IncisionTest, onBorder) {
	XY ins[14];
	ins[0].x = 3;
	ins[0].y = 0;
	ins[1].x = 0;
	ins[1].y = 2;
	ins[2].x = 0;
	ins[2].y = 2;
	ins[3].x = 0;
	ins[3].y = 4;
	ins[4].x = 0;
	ins[4].y = 4;
	ins[5].x = 2;
	ins[5].y = 6;
	ins[6].x = 2;
	ins[6].y = 6;
	ins[7].x = 3;
	ins[7].y = 4;
	ins[8].x = 3;
	ins[8].y = 4;
	ins[9].x = 4;
	ins[9].y = 6;
	ins[9].x = 4;
	ins[9].y = 6;
	ins[10].x = 6;
	ins[10].y = 4;
	ins[11].x = 6;
	ins[11].y = 4;
	ins[12].x = 6;
	ins[12].y = 2;
	ins[13].x = 6;
	ins[13].y = 2;
	ins[13].x = 3;
	ins[13].y = 0;
	XY point;
	point.x = 3;
	point.y = 0;
	EXPECT_EQ(isInteract(point, ins, 14), true);
}

TEST(IncisionTest, outOfRange) {
	XY ins[14];
	ins[0].x = 3;
	ins[0].y = 0;
	ins[1].x = 0;
	ins[1].y = 2;
	ins[2].x = 0;
	ins[2].y = 2;
	ins[3].x = 0;
	ins[3].y = 4;
	ins[4].x = 0;
	ins[4].y = 4;
	ins[5].x = 2;
	ins[5].y = 6;
	ins[6].x = 2;
	ins[6].y = 6;
	ins[7].x = 3;
	ins[7].y = 3;
	ins[8].x = 3;
	ins[8].y = 3;
	ins[9].x = 4;
	ins[9].y = 6;
	ins[9].x = 4;
	ins[9].y = 6;
	ins[10].x = 6;
	ins[10].y = 4;
	ins[11].x = 6;
	ins[11].y = 4;
	ins[12].x = 6;
	ins[12].y = 2;
	ins[13].x = 6;
	ins[13].y = 2;
	ins[13].x = 3;
	ins[13].y = 0;
	XY point;
	point.x = 3;
	point.y = 4;
	EXPECT_EQ(isInteract(point, ins, 14), false);
}