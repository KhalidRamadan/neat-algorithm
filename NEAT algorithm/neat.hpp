#pragma once


#include<cmath>
#include<random>
#include <cstdlib>
#include <iostream>
#include <ctime>

namespace NEAT
{

	// distance
	static const double DELTA_DISJOINT = 2.0; // c1 
	static const double DELTA_EXCESS = 2.0; // c2 
	static const double DELTA_WEIGHTS = 2.0;  // c3 
	static const double DELTA_THRESHOLD = 2.0; // thershold
	static const int POPULATION = 300;
	static const int STALE_SPECIES = 15;

	// mutation Rates 
	// todo 
	static const double MUTATE_CONNECTION = 0.25;
	static const double LinkMutation = 2.0;
	static const double BiasMutation = 0.40;
	static const double NodeMutation = 0.50;
	static const double DisableMutation = 0.4;
	static const double EnableMutation = 0.2;
	static const double StepSize = 0.1;


	static const double PerturbChance = 0.90;
	static const double CrossoverChance = 0.75;

	static bool callRandom = false;

	static void Random() 
	{
		if (callRandom) return;
		callRandom = true;
		std::srand((unsigned int)std::time(nullptr));
	}
		
	static bool RandomBool(double probability = 0.5f) // probability of true
	{
		Random();
		int randomInt = std::rand();
		//std::cout << randomInt << std::endl;
		double random = (double)randomInt / RAND_MAX;
		
		if (random <= probability)
			return true;
		else return false;
	}


	static int RandomRange(int x = 1, int y = 100)
	{
		Random();
		int randomInt = std::rand();
		int range = y - x + 1;
		return (randomInt % range) + x;
	}

	static double sigmoid(double value)
	{
		return 1 / (1 + std::exp(-value)); // todo
	}




}

