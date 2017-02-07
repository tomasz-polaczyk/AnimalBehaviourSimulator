#include "Coord.h"

std::ostream& operator<<(std::ostream& output, const Coord& coord)
{
	output << "( " << coord.getX() << ", " << coord.getY() << " )";
	return output;
}
