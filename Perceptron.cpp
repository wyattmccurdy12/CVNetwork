#include "Perceptron.h"

/// <summary>
/// Get output of perceptron. This will be one if the dot product of the weights and inputs 
/// is greater than zero, and zero otherwise.
/// </summary>
/// <returns></returns>
double Perceptron::getOutput()
{
    double dotSum = 0;
    for (int i = 0; i < nDim; i++)
    {
        dotSum += inputs[i] * weights[i];
    }
    dotSum += bias;
    return dotSum > 0 ? 1 : 0;
}

int Perceptron::getNDim()
{
    return this->nDim;
}
