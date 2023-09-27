#pragma once

#include "SigmoidNeuron.h"
#include <vector>

class Network
{
	Network(std::vector<int> layerDims)
	{
		for (int i = 0; i < layerDims.size(); i++)
		{
			for (int j = 0; j < layerDims[i]; j++)
			{

			}
		}
	}
};