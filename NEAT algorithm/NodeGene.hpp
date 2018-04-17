#pragma once



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
		int m_id;

	public:
		NodeGene(TYPE type, int id);
		inline TYPE getType() const { return m_type; }
		inline int getId() const { return m_id; }
	};

}