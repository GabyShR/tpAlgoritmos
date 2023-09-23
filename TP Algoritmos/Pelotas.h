#pragma once
#include "Librerias.h"

class EntityArea {
	int x1, y1, x2, y2;
public:
	EntityArea(int x1, int y1, int x2, int y2) {
		this->x1 = x1;
		this->y1 = y1;
		this->x2 = x2;
		this->y2 = y2;
	}

	~EntityArea() { }

	bool intersectsWith(EntityArea* area) {
		// TODO: Implement collision/overlapping method
		return false;
	}
};

class Ball {
	int x, y;
	int w, h;
	int dx, dy;
	char alternativa;
	int speed;
public:
	Ball(int width, int height) {
		System::Random^ gen = gcnew System::Random();
		speed = 1;
		x = gen->Next(25, width);
		y = gen->Next(15, height);

		dx = rand() % 2 == 0 ? -1 : 1;
		dy = rand() % 2 == 0 ? -1 : 1;

		w = 5;
		h = 4;

		alternativa = gen->Next('A', 'C' + 1);
		delete gen;
	}

	~Ball() { }

	void print() {
		//Console::SetCursorPosition(x, y);
		for (int i = 0; i < h; i++)
		{
			for (int j = 0; j < w; j++)
			{
				Console::SetCursorPosition(x + j, y + i);
				color(992);
				if (i == 0 || i == h - 1 || j == 0 || j == w - 1) cout << char(219);
				else ' ';
			} cout << endl;
		}
	}

	void clear() {
		for (int i = 0; i < h; ++i) {
			for (int j = 0; j < w; ++j) {
				Console::SetCursorPosition(x + j, y + i);
				cout << ' ';
			}
		}
	}

	void moverseEnLimites(int width, int height, int minx = 20, int miny = 15) {
		if (x + dx * speed < minx || x + dx * speed + w > width)
			dx = -dx;
		if (y + dy * speed < miny || y + dy * speed + h > height)
			dy = -dy;
	}

	void mover(int width, int height) {
		moverseEnLimites(width, height);
		x += dx * speed;
		y += dy * speed;
	}

	int getX() {
		return x;
	}

	int getY() {
		return y;
	}

	EntityArea* getArea() {
		return new EntityArea(x, y, x + w, y + h);
	}
};


class Controller {
	std::vector<Ball*> balls;
	int windowWidth, windowHeight;
public:
	Controller(int windowWidth, int windowHeight) {
		this->windowWidth = windowWidth;
		this->windowHeight = windowHeight;
	}

	~Controller() {
		for (Ball* ball : balls) {
			delete ball;
		}
		balls.clear();
	}

	void addBall() {
		balls.push_back(new Ball(windowWidth, windowHeight));
	}

	void runAnimation() {
		checkBallsCollisions();

		for (Ball* ball : balls) {
			ball->clear();
			ball->moverseEnLimites(windowWidth, windowHeight);
			ball->mover(windowWidth, windowWidth);
			ball->print();
		}
	}

	void checkBallsCollisions() {
		for (int i = 0; i < balls.size(); ++i) {
			Ball* firstBall = balls.at(i);
			// EntityArea* firstArea = firstBall->getArea();

			for (int j = 0; j < balls.size(); ++j) {
				if (i == j) continue;
				Ball* secondBall = balls.at(j);
				// EntityArea* secondArea = secondBall->getArea();

				/* Replace lines 54 to 57
				if (firstArea->intersectsWith(secondArea)) {
					firstBall->makeBounce();
					secondBall->makeBounce();
				}
				*/

				if (firstBall->getX() == secondBall->getX() && firstBall->getY() == secondBall->getY()) {
					firstBall->clear();
					firstBall->moverseEnLimites(windowWidth, windowHeight);
					firstBall->mover(windowWidth, windowWidth);

					secondBall->moverseEnLimites(windowWidth, windowHeight);
					secondBall->mover(windowWidth, windowWidth);

				}
			}
		}
	}
};


