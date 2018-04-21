#pragma once

#include<vector>
#include "Species.hpp"



namespace NEAT
{

	class Pool
	{
	private:
		std::vector<Species> m_species;
		double m_maxFitness;
		int m_innovation;
	public:
		Pool();
		int GetnewInnovation();
		~Pool();
	};

}

/*

function newInnovation()
pool.innovation = pool.innovation + 1
return pool.innovation
end


function newPool()
local pool = {}
pool.species = {}
pool.generation = 0
pool.innovation = Outputs
pool.currentSpecies = 1
pool.currentGenome = 1
pool.currentFrame = 0
pool.maxFitness = 0

return pool
end




*/