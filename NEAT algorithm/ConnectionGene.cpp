#include "ConnectionGene.hpp"

namespace NEAT
{
	ConnenctionGene::ConnenctionGene()
		: m_inNode(0), m_outNode(0), m_weight(0.0), m_expressed(true), m_innovation(0)
	{}

	ConnenctionGene::ConnenctionGene(int inNode, int outNode, double weight, bool expressed, int innovation)
		: m_inNode(inNode), m_outNode(outNode), m_weight(weight), m_expressed(expressed), m_innovation(innovation)
	{}


}