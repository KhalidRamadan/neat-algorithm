#include "Species.hpp"
#include "neat.hpp"

namespace NEAT
{
	Species::Species()
	{
	}

	bool Species::sameSpecies(const Genome &genome1, const Genome &genome2)
	{
		return Genome::compatibilityDistance(genome1, genome2) < DELTA_THRESHOLD;
	}

	void Species::breedChild()
	{

	}

}

