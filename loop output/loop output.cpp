#include <iostream>

int main()
{
    for (int i = 0; i < 10000; i++) {
        if (i % 100 == 0) std::cout << "." << std::flush;
    }

    return 0;
}