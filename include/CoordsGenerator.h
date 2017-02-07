#pragma once

#include <random>

#include "Coord.h"

template<typename RandomEngine>
class CoordsGenerator
{
public:
	CoordsGenerator() : engine_((std::random_device())()) { }
	
	CoordsGenerator(const CoordsGenerator& rhs) = delete;
	CoordsGenerator& operator=(const CoordsGenerator& rhs) = delete;
protected:
	inline Coord generateCoord(const Coord& coord)
	{
		std::uniform_int_distribution<int> uniformDistX(coord.getX() - 1, coord.getX() + 1);
		std::uniform_int_distribution<int> uniformDistY(coord.getY() - 1, coord.getY() + 1);
		return Coord(uniformDistX(engine_), uniformDistY(engine_));
	}
private:
	RandomEngine engine_;
};
