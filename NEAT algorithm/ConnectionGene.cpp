#include "ConnectionGene.hpp"

namespace NEAT
{
	ConnenctionGene::ConnenctionGene(int inNode, int outNode, double weight, bool expressed, int innovation)
		: m_inNode(inNode), m_outNode(outNode), m_weight(weight), m_expressed(expressed), m_innovation(innovation)
	{}


}