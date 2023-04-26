#include "iter.hpp"
#include <string>

void print(const std::string& Parole) {
  	std::cout << Parole << std::endl;
}

int main() {
    std::string Parole[] = {"Cane", "Albero", "Fiori", "Jack"};
    float numeri[] = {4.51, 4.32, 5.11, 5.41};
    int numeri2[] = {5, 8, 1, 4};

    ::iter(Parole, 4, print);

    ::iter(Parole, 4, print_t<std::string>);

    ::iter(numeri, 4, print_t<float>);

    ::iter(numeri2, 4, print_t<int>);

}
