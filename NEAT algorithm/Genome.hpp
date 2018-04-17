#pragma once

#include "NodeGene.hpp"
#include "ConnectionGene.hpp"
#include<vector>


namespace NEAT
{

	class Genome
	{
	private:
		std::vector<NodeGene> m_nodes;
		std::vector<ConnenctionGene> m_connections;
	};


}