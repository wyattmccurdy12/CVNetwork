#pragma once
#include <vector>
class Perceptron
{

	// fields
private:
	std::vector<int> inputs;
	std::vector<double> weights;
	double bias;
	int nDim;

public:
	double getY();
	int getNDim();

};

