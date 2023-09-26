#pragma once
#include "Perceptron.h"\
#include <vector>
class SigmoidNeuron : Perceptron
{

public:

	SigmoidNeuron(std::vector<double> inputs) : Perceptron(inputs) {}

	// Just need the function to get sigmoid output
	double getSigmoidOutput();
};

