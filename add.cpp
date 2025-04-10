#include <pybind11/pybind11.h>

int add(int a, int b) {
    return a + b;
}

PYBIND11_MODULE(my_module, m) {
    m.doc() = "Simple add function exposed to Python";
    m.def("add", &add, "A function that adds two numbers");
}
