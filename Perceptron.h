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
	}

	double getY();
	int getNDim();

};

