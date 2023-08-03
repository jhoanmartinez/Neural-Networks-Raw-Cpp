#include "LayerDense.h"
#include <iostream>

LayerDense::LayerDense(int n_inputs, int n_neurons) : n_inputs(n_inputs), n_neurons(n_neurons) {
    std::cout << n_inputs << std::endl;
    std::cout << n_neurons << std::endl;
}