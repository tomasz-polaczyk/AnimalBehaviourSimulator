#pragma once

#include <iostream>

#include "Constans.h"
#include "Coord.h"

class Animal
{
protected:
	friend std::ostream& operator<<(std::ostream& output, const Animal& animal)
	{
		output << "Age: " << animal.age_ << "\nMass: " << animal.mass_ << "\nHeight: " << animal.height_;
		return output;
	}

	std::size_t age_;
	
	double mass_;
	
	double height_;
	
	std::size_t sight_range_;
	
	std::size_t velocity_;
	
	Animals::AnimalType type_;
	
	Animals::Sex sex_;
	
	Animals::Eatables eatables_;
	
	Animals::Mode mode_;
};

template<typename Model>
class Rabbit : private Model::MoveAlgorithm, public Animal
{
private:
	using Model::MoveAlgorithm::move;
public:
	Rabbit(Coord& coord) : coord_(coord)
	{

	}
	
	void move()
	{
		move(coord_);
	}
	
	void displayPosition() const
	{
		std::cout << "Current position: " << coord_ << '\n';
	}
private:
	Coord coord_;
};
