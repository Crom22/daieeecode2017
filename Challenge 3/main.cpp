#include <iostream>
#include "fonction.h"

bool test() {
    return 	fonction(0b0) == 0 && \
		fonction(0b1) == 1 && \
        fonction(0b01) == 1 && \
        fonction(0b11) == 2 && \
        fonction(0b101) == 2 && \
		fonction(0b111) == 3;

}

int main()
{
    if (test()) {
        std::cout << "Succes" << std::endl;
        return 0;
    } else {
        std::cout << "Nope" << std::endl;
        return -1;
    }
}
