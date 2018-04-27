#pragma once

#include<vector>


namespace NEAT
{
	enum TYPE
	{
		INPUT,
		OUTPUT,
		HIDDEN
	};

	class NodeGene
	{

	private:
		TYPE m_type;
		int m_id; // unique
		double m_value;
		std::vector<int> m_incomingNodes;

	public:
		NodeGene();
		NodeGene(TYPE type, int id);
		inline TYPE getType() const { return m_type; }
		inline int getId() const { return m_id; }
		inline double getValue() const { return m_value; }
	};

}