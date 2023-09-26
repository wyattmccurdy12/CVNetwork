#pragma once
#include "Perceptron.h"\
#include <vector>
class SigmoidNeuron : Perceptron
{

public:

	SigmoidNeuron(std::vector<double> inputs) : Perceptron(inputs) {}
	SigmoidNeuron(std::vector<double> inputs, std::vector<double> weights) : Perceptron(inputs, weights) {}
	SigmoidNeuron(std::vector<double> inputs, double bias) : Perceptron(inputs, bias) {}
	SigmoidNeuron(std::vector<double> inputs, std::vector<double> weights, double bias) : Perceptron(inputs, weights, bias) {}

	// Just need the function to get sigmoid output
	double getSigmoidOutput();
};

