#include <iostream>
using namespace std;
#include "aritmetica.h"

int main() {
    //invocar al template
    aritmetica<int>(10, 45);
    aritmetica<double>(3.45, 8.10);
    aritmetica<float>(0.14f, 0.147f);

    return 0;
}