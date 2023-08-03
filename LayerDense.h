#ifndef LAYERDENSE_H
#define LAYERDENSE_H

#include <vector>

class LayerDense {
private:
    int n_inputs;
    int n_neurons;
    std::vector<std::vector<float>> weights;
    std::vector<float> bias;

public:
    LayerDense(int n_inputs, int n_neurons);
};

#endif // LAYERDENSE_H