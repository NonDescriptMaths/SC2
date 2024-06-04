#include <iostream>
#include <cmath>
#include <random>
#include <omp.h>

int main() {
    std::random_device rd;

    std::default_random_engine generator(rd());
    std::uniform_real_distribution<double> distribution(0.0, 1.0);

    double x = distribution(generator);

    std::cout << "Random number: " << x << std::endl;
    int n_inside = 0;
    int n_total = 10000000;
    #pragma omp parallel reduction(+:n_inside)
    {
        #pragma omp for
            for (int i = 0; i < n_total; i++) {
                double x = distribution(generator);
                double y = distribution(generator);
                if (std::sqrt(x*x + y*y) < 1.0) {
                    n_inside++;
                }
            
        }
    }

    double pi = (4.0* n_inside)/n_total;
    std::cout << "Pi: " << pi << std::endl;
}