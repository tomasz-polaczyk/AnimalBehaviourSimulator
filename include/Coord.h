#pragma once

#include <ostream>

struct Coord
{
public:
	Coord(int x, int y) : x_(x), y_(y) { }
	
	Coord(const Coord& coord) : x_(coord.x_), y_(coord.y_) { }
	
	Coord& operator=(const Coord& coord)
	{
		if(&coord == this)
		{
			return *this;
		}
		
		x_ = coord.x_;
		y_ = coord.y_;
	}
	
	inline void setX(int x) { x_ = x; }
	
	inline int getX() const { return x_;}
	
	inline void setY(int y) { y_ = y; }
	
	inline int getY() const { return y_; }
	
	friend std::ostream& operator<<(std::ostream& output, const Coord& coord);
private:
	int x_;
	int y_;
};
