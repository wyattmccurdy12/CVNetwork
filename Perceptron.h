#pragma once
#include <vector>
#include <stdexcept>
class Perceptron
{

// fields
private:
	std::vector<int> inputs;
	std::vector<int> weights;
	int bias;
	int nDim;

public:
	// Constructor -- basic,  just with inputs
	Perceptron(std::vector<int> inputs) {
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
	Perceptron(std::vector<int> inputs, std::vector<int> weights) {
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
	Perceptron(std::vector<int> inputs, std::vector<int> weights, int bias) {
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
	int getOutput();
	int getNDim();
};