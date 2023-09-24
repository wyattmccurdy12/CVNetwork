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
	// Constructor
	Perceptron(std::vector<int> inputs) {
		this->inputs = inputs;
		this->nDim = inputs.size();
		for (int i = 0; i < nDim; i++) {
			weights.push_back(1.0);
		}
	}

	// methods
	double getOutput();
	int getNDim();
};