// CVNetwork.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Perceptron.h"
#include "SigmoidNeuron.h"


int main()
{
	SigmoidNeuron s({ 0 });
	std::cout << s.getSigmoidOutput() << "\n";
	std::cout << "Neuron output above \n";
}