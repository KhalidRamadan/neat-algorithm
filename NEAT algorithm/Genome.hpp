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


	public:
		Genome();
		void addNodeGene(NodeGene newNode);
		void addConnenctionGene(ConnenctionGene newConnenction);
		inline NodeGene getNodeGene(int id) { return m_nodes[id]; }
		inline ConnenctionGene getConnenctionGene(int innovation) { return m_connections[innovation]; }
		// mutation 
		void mutation(); // todo random 
		void AddNodeGeneMutation();
		void AddConnenctionGeneMutation();
		void weightMutation(ConnenctionGene conGene);
		void ConnenctionStateMutation(ConnenctionGene conGene);


	// static fuctions 
	public:
		static Genome crossover(const Genome &parent1, const Genome &parent2);
		static double distance(const Genome &parent1, const Genome &parent2, double c1, double c2, double c3);
		static int countMatchingGenes(const Genome &parent1, const Genome &parent2);
		static int countDisjointGenes(const Genome &parent1, const Genome &parent2);
		static int countExcessGenes(const Genome &parent1, const Genome &parent2);
		static double averageWeightDiff(const Genome &parent1, const Genome &parent2);

	// sort
	};


}