#include <iostream>
#include <random>
#include <memory>

#include "Animal.h"
#include "Constans.h"
#include "Rabbit.h"

int main()
{	
	using TestRabbit = Rabbit<RabbitDefaultRandomModel>;
	Coord start(0, 0);
	TestRabbit rabbit(start); 
	
	std::cout << "Start: \n";
	rabbit.displayPosition();
	
	for(int i = 0; i < 50; ++i)
	{
		rabbit.move();
		rabbit.displayPosition();
	}
	
	return 0;
}
