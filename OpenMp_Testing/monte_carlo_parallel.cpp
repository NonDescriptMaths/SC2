#include <iostream>
#include <random>
#include <cmath>
#include <omp.h>


// copilot code
int main(int argc, const char **argv)
{
    int n = 1000000;
    int n_inside = 0;

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_real_distribution<> dis(0, 1);

    #pragma omp parallel for reduction(+:n_inside)
    for (int i=0; i<n; ++i)
    {
        double x = dis(gen);
        double y = dis(gen);

        if (std::sqrt(x*x + y*y) <= 1)
        {
            ++n_inside;
        }
    }

    double pi = 4.0 * n_inside / n;

    std::cout << "The value of pi is " << pi << ".\n";

    return 0;
}


// my code 

int main(){
    std::random_device rd;

    std::default_random_engine generator(rd());


}