#include<iostream>
#include "neatalgorithm.hpp";


using namespace std;
using namespace NEAT;


int main()
{

	ConnenctionGene x(1, 1, 1, 0, 5);
	ConnenctionGene y = x;
	y.setWeight(33);
	cout << x.getWeight() << endl;
	cout << y.getWeight() << endl;

	system("PAUSE");
	return 0;
}