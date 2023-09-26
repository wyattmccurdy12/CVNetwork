#include "SigmoidNeuron.h"

/// <summary>
/// This will give an output exactly like that of a perceptron, with the 
/// caveat that the output will projected onto a sigmoid curve as opposed to 
/// a step function curve.
/// </summary>
/// <returns>Sigmoid-projected output between zero and one inclusive.</returns>
double SigmoidNeuron::getSigmoidOutput()
{
    // TODO
    double z = getDotSum();
    double ret = 1 / (1 + exp(-z));
    return ret;
}
