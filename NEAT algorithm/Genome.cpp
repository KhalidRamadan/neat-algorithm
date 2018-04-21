#include "Genome.hpp"
#include "neat.hpp"

namespace NEAT
{

	Genome::Genome()
	{
	}

	void Genome::addNodeGene(const NodeGene &newNode)
	{
		m_nodes[newNode.getId()] = newNode;
	}

	void Genome::addConnenctionGene(const ConnenctionGene &newConnenction)
	{
		m_connections[newConnenction.getInnovation()] = newConnenction;
	}


	void Genome::mutation()
	{

	}

	void Genome::addNodeGeneMutation()
	{

	}

	void Genome::addConnenctionGeneMutation()
	{
	}

	void Genome::weightMutation(ConnenctionGene conGene)
	{
	}

	void Genome::connenctionStateMutation(ConnenctionGene conGene)
	{
	}

	Genome Genome::crossover(const Genome & parent1, const Genome & parent2)
	{
		//if (parent1.getFitness() < parent2.getFitness)
			//std::swap(parent1, parent2);

		Genome child();


		return Genome();
	}

	double Genome::compatibilityDistance(const Genome & genome1, const Genome & genome2)
	{
		int excessGenes = countExcessGenes(genome1, genome2);
		int disjointGenes = countDisjointGenes(genome1, genome2);
		float avgWeightDiff = averageWeightDiff(genome1, genome2);

		return excessGenes * DELTA_EXCESS + disjointGenes * DELTA_DISJOINT + avgWeightDiff * DELTA_WEIGHTS;
	}

	int Genome::countMatchingGenes(const Genome & genome1, const Genome & genome2)
	{
		return 0;
	}

	int Genome::countDisjointGenes(const Genome & genome1, const Genome & genome2)
	{
		return 0;
	}

	int Genome::countExcessGenes(const Genome & genome1, const Genome & genome2)
	{
		return 0;
	}

	double Genome::averageWeightDiff(const Genome & genome1, const Genome & genome2)
	{
		return 0.0;
	}

}