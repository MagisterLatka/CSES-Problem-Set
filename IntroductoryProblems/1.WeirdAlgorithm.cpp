#include <iostream>
#include <cstdint>

int main()
{
    uint64_t n = 0;
    std::cin >> n;

    while (n != 1)
    {
        std::cout << n << ' ';
        if (n % 2 == 0)
            n >>= 1;
        else
            n = n * 3 + 1;
    }
    std::cout << n << '\n';
}
