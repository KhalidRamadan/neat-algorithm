#pragma once
#include "Genome.hpp"
#include<vector>




namespace NEAT
{
	class Species
	{

	private:
		double topFitness;
		double averageFitness;
		std::vector<Genome> genomes;

	public:
		Species();
		bool sameSpecies(const Genome &genome1, const Genome &genome2);
		void breedChild();

	};

}


/*

function newSpecies()
local species = {}
species.topFitness = 0
species.staleness = 0
species.genomes = {}
species.averageFitness = 0

return species
end


*/