#include <iostream>
#include <vector>

class LayerDense {

    private:
        int n_inputs;
        int n_neurons;
        std::vector<std::vector<float>> weights;
        std::vector<float> bias;

    LayerDense(int n_inputs, int n_neurons): 
        n_inputs(n_inputs),
        n_neurons(n_neurons) {
            std::cout << n_inputs << std::endl;
            std::cout << n_neurons << std::endl;
        }
};
