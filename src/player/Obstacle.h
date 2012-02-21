#ifndef OBSTACLE_H_
#define OBSTACLE_H_

#include "GameObjectStationary.h"

class Obstacle : public GameObjectStationary
{
	private:
		int witdh;
		int height;
	public:
		Obstacle(int w, int h, Point po);
		virtual GOPos Position();
		void SetNewPosition(Obstacle ob, Point po);
};

#endif