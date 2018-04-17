#pragma once


namespace NEAT
{

	class ConnenctionGene
	{
	private:
		int m_inNode;
		int m_outNode;
		double m_weight;
		bool m_expressed;
		int m_innovation;

	public:
		ConnenctionGene(int inNode, int outNode, double weight, bool expressed, int innovation);
		// getters
		inline int getInNode() const { return m_inNode; }
		inline int getOutNode() const { return m_outNode; }
		inline double getWeight() const { return m_weight; }
		inline bool isExpressed() const { return m_expressed; }
		inline int getInnovation() const { return m_innovation; }
	};

}