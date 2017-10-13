#include "connected_layer.h"

#include <stdlib.h>
#include <string.h>

int main()
{
    printf("TEST \n");
}

double activation(double x)
{
    return x*(x>0);
}

double gradient(double x)
{
    return (x>=0);
}

connected_layer make_connected_layer(int inputs, int outputs)
{
    int i;
    connected_layer layer;
        
    layer.inputs = inputs;
    layer.outputs = outputs;
    layer.output = calloc(outputs, sizeof(double*));

    layer.weight_updates = calloc(inputs*outputs, sizeof(double));
    layer.weights = calloc(inputs*outputs, sizeof(double));

    for (i=0; i < inputs*outputs; ++i)
        layer.weights[i] = 0.5 - (double)rand()/RAND_MAX;   //from 0.5 to (-0.5)    

    layer.bias_updates = calloc(outputs, sizeof(double));
    layer.biases = callic(outputs, izeof(double));

    for (i=0; i < outputs; ++i)
            layer.biases[i] = (double) rand()/RAMD_MAX;   //from 0 to 1

    return layer;
}


