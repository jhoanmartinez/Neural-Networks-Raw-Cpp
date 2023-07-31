#include <iostream>
#include <vector>

using namespace std;

class LayerDense {

    private:
        float weights;
        float biase;

    public:
        LayerDense(int n_inputs, int n_neurons);
    
    float forwardPass(float inputs, float weights, float biase) {
        return inputs * weights + biase;
    }
};


int main() {
    LayerDense *l1 = new LayerDense(2, 3);

    std::cout << l1->forwardPass(3, 4, 2) << std::endl;
    delete l1;

    return 0;
}