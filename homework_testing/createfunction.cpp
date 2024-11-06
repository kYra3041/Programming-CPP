#include <iostream>
#include <cmath>

float calc_sum(unsigned int x[], int size) {
    float sum = 0;
    for (size_t)
}
    }
    return sum;
}

float calc_average(unsigned int x[], int size) {
    if (size == 0) return 0;
    float sum = calc_sum(x, size);
    return sum / size;
}

float calc_standard_deviation(unsigned int x[], int size) {
    if (size == 0) return 0;
    float mean = calc_average(x, size);
    float sum_squared_diff = 0;
    for (int i = 0; i < size; i++) {
        sum_squared_diff += pow(x[i] - mean, 2);
    }
    return sqrt(sum_squared_diff / size);
}

int main() {
    unsigned int x[] = {1, 2, 3, 4, 5};
    int size = sizeof(x) / sizeof(x[0]);

    cout << "Sum: " << calc_sum(x, size) << endl;
    cout << "Average: " << calc_average(x, size) << endl;
    cout << "Standard Deviation: " << calc_standard_deviation(x, size) << endl;

    return 0;
}

float calc_sum(unsigned int x[])
{
    // write codes to compute the sum of the elements of x
}

float calc_average(unsigned int x[])
{
    // write codes to compute the average of the elements of x
}

float calc_standard_deviation(unsigned int x[])
{
    // write codes to compute the standard deviation of the elements of x
}