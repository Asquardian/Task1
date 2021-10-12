#include "header.h"
#include <iostream>

bool isInteract(XY point, XY* figure, int n) {
	int i2;
	float S, S1, S2, S3;
	bool isInt;
	for (int i = 0; i < n; i++) {
		isInt = false;
		int i1 = i < n - 2 ? i + 2 : 0;
		while (!isInt) {
			i2 = i1 + 2;
			if (i2 >= n)
				i2 = 0;
			if (i2 == (i < n - 2 ? i + 2 : 0))
				break;
			S = abs(figure[i1].x * (figure[i2].y - figure[i].y) +
				figure[i2].x * (figure[i].y - figure[i1].y) +
				figure[i].x * (figure[i1].y - figure[i2].y));
			S1 = abs(figure[i1].x * (figure[i2].y - point.y) +
				figure[i2].x * (point.y - figure[i1].y) +
				point.x * (figure[i1].y - figure[i2].y));
			S2 = abs(figure[i].x * (figure[i2].y - point.y) +
				figure[i2].x * (point.y - figure[i].y) +
				point.x * (figure[i].y - figure[i2].y));
			S3 = abs(figure[i1].x * (figure[i].y - point.y) +
				figure[i].x * (point.y - figure[i1].y) +
				point.x * (figure[i1].y - figure[i].y));
			if (S == S1 + S2 + S3) {
				isInt = true;
				break;
			}
			i1+=2;
			if (i1 >= n)
				i1 = 0;
		}
		if (!isInt)
			break;
	}
	return isInt;
}

