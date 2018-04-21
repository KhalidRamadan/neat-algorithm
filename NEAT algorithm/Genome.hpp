#pragma once

#include "NodeGene.hpp"
#include "ConnectionGene.hpp"
#include<vector>
#include<unordered_map>


namespace NEAT
{

	class Genome
	{
		typedef std::unordered_map<int, NodeGene> map_node;
		typedef std::unordered_map<int, ConnenctionGene> map_connenction;
		 
	private:
		map_node m_nodes;
		map_connenction m_connections;
		double m_fitness;
		int m_globalRank;

	public:
		Genome();
		void addNodeGene(const NodeGene &newNode);
		void addConnenctionGene(const ConnenctionGene &newConnenction);
		inline NodeGene getNodeGene(int id) { return m_nodes[id]; }
		inline ConnenctionGene getConnenctionGene(int innovation) { return m_connections[innovation]; }
		inline bool HaveNodeGene(int id) { return m_nodes.count(id) != 0; }
		inline bool HaveConnenctionGene(int innovation) { return m_connections.count(innovation) != 0; }
		inline double getFitness() const { return m_fitness; }
		// mutation 
		void mutation(); // todo random 
		void addNodeGeneMutation();
		void addConnenctionGeneMutation();
		void weightMutation(ConnenctionGene conGene);
		void connenctionStateMutation(ConnenctionGene conGene);


	// static fuctions 
	public:
		static Genome crossover(const Genome &genome1, const Genome &genome2);
		static double compatibilityDistance(const Genome &genome1, const Genome &genome2);
		static int countMatchingGenes(const Genome &genome1, const Genome &genome2);
		static int countDisjointGenes(const Genome &genome1, const Genome &genome2);
		static int countExcessGenes(const Genome &genome1, const Genome &genome2);
		static double averageWeightDiff(const Genome &genome1, const Genome &genome2);

	// sort
	};


}


/*
function newGenome()
local genome = {}
genome.genes = {}
genome.fitness = 0
genome.adjustedFitness = 0
genome.network = {}
genome.maxneuron = 0
genome.globalRank = 0
genome.mutationRates = {}
genome.mutationRates["connections"] = MutateConnectionsChance
genome.mutationRates["link"] = LinkMutationChance
genome.mutationRates["bias"] = BiasMutationChance
genome.mutationRates["node"] = NodeMutationChance
genome.mutationRates["enable"] = EnableMutationChance
genome.mutationRates["disable"] = DisableMutationChance
genome.mutationRates["step"] = StepSize

return genome
end


*/