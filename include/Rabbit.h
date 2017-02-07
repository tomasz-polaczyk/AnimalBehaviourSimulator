#pragma once

#include "MoveAlgorithm.h"
#include "CoordsGenerator.h"

struct RabbitMT19937Model
{
	using MoveAlgorithm = MoveRandomAlgorithm<CoordsGenerator<std::mt19937>>;
	//using EatAlgorithm = EatGrassAndVegetables<Animals::CreatureType>;
	//using ReproductionAlgorithm = Reproduction<Animals::CreatureType>
};

struct RabbitDefaultRandomModel
{
	using MoveAlgorithm = MoveRandomAlgorithm<CoordsGenerator<std::default_random_engine>>;
};
