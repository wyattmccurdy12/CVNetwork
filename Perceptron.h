#pragma once
#include <vector>
#include <stdexcept>
class Perceptron
{

// fields
private:
	std::vector<double> inputs;
	std::vector<double> weights;
	double bias;
	int nDim;

public:
	// Constructor -- basic,  just with inputs
	Perceptron(std::vector<double> inputs) {
		this->nDim = inputs.size();
		for (int i = 0; i < this->nDim; i++) {
			if (inputs[i] != 0 && inputs[i] != 1) {
				throw std::invalid_argument("The perceptron only takes binary inputs");
			}
			weights.push_back(1.0);
		}

		this->inputs = inputs;
		this->bias = ((this->nDim) / 2) * (-1);
	}

	// Constructor -- overloaded, with inputs and custom weights
	Perceptron(std::vector<double> inputs, std::vector<double> weights) {
		this->nDim = inputs.size();
		for (int i = 0; i < this->nDim; i++) {
			if (inputs[i] != 0 && inputs[i] != 1) {
				throw std::invalid_argument("The perceptron only takes binary inputs");
			}
		}
		this->weights = weights;
		this->inputs = inputs;
		this->bias = ((this->nDim) / 2) * (-1);
	}

	// Constructor -- overloaded, with inputs and custom weights and custom bias
	Perceptron(std::vector<double> inputs, std::vector<double> weights, double bias) {
		this->nDim = inputs.size();
		for (int i = 0; i < this->nDim; i++) {
			if (inputs[i] != 0 && inputs[i] != 1) {
				throw std::invalid_argument("The perceptron only takes binary inputs");
			}
		}
		this->weights = weights;
		this->inputs = inputs;
		this->bias = bias;
	}

	// methods
	double getOutput();
	int getNDim();
};