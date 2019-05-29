#pragma once

#include "layer.h"

class SigmoidLayer : public Layer
{
public:
    SigmoidLayer(unsigned int nodes, unsigned int prevNodes) : Layer(nodes, prevNodes) {};

    virtual NNDataType activationFunction(NNDataType value) const;
    virtual NNDataType activationDerivative(NNDataType value) const;
};