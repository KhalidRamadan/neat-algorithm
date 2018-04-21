#pragma once
#include<cmath>
#include<random>


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

	
		
		
		
		
		
		
		
		
	static bool RandomBool(double problemalty)
	{
		
	}

	static double sigmoid(double value)
	{
		return 1 / (1 + std::exp(-value)); // todo
	}




}

