#ifndef OBSTACLE_H_
#define OBSTACLE_H_

#include "GameObjectStationary.h"

struct Obstacle
{
    int width; // obstacle's width
    int height; // obstacle's height
    Point position; // obstacle's position in coordinate
    int positionOnMap[gridx][gridy]; // obstacle's position on Map
};

class Obstacles : public GameObjectStationary
{
	private:
		Obstacle ob[NUMBEROFOBSTACLES];
        Point currentScreenCenter;
        Point previousScreenCenter;
	public:
		Obstacle(int w, int h, Point po, int poM[][]);
		virtual GOPos Position();
		void SetNewPosition(Obstacle ob, Point currentPo, Point previousPo);
};

#endif