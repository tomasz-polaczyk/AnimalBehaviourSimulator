#pragma once

#include "Coord.h"
#include "CoordsGenerator.h"

template<typename RandomGenerator>
class MoveRandomAlgorithm : private RandomGenerator
{
private:
	using RandomGenerator::generateCoord;
protected:
	inline void move(Coord& current)
	{
		current.setX(generateCoord(current).getX());
		current.setY(generateCoord(current).getY());
	}
};
