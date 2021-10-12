#include <iostream>
#include "header.h"


int main() {
	XY *pointCordinats; // Points X and Y
	XY* sectionCordinats; //Section X Y
	int n = 0; // Number of section
	int m = 0; // Number of points

	int arrayPoints;
	int arraySections;

	while (n < 2 || m > 100) {
		std::cout << "Input n: ";
		std::cin >> n;
	}
	while (m < 1 || m > 1000) {
		std::cout << "Input m: ";
		std::cin >> m;
	}

	//Make Dynamic arrays
	pointCordinats = new XY[m];
	sectionCordinats = new XY[n * 2];

	for (int i = 0; i < n * 2; i++) { //Sections
		std::cout << std::endl << i + 1 << "n ";
		switch (i % 2) {
		case 0:
			std::cout << "1x = ";
			std::cin >> sectionCordinats[i].x;
			std::cout << "1y = ";
			std::cin >> sectionCordinats[i].y;
			break;
		case 1:
			std::cout << "2x = ";
			std::cin >> sectionCordinats[i].x;
			std::cout << "2y = ";
			std::cin >> sectionCordinats[i].y;
			break;
		}
	}

	for (int i = 0; i < m; i++) { //Points
		std::cout << std::endl << i + 1 << "m ";
		std::cout << "x = ";
		std::cin >> pointCordinats[i].x;
		std::cout << "y = ";
		std::cin >> pointCordinats[i].y;
	}

	int interacted = 0;

	for (int i = 0; i < m; i++) {
		if (isInteract(pointCordinats[i], sectionCordinats, n * 2))
			interacted++;
	}

	std::cout << "\n\nNumber of Interacted: " << interacted;

	return 0;
}