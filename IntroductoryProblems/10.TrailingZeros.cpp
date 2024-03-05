#include <iostream>
#include <cstdint>
#include <vector>
#include <algorithm>

int main()
{
    uint64_t n = 0;
    std::cin >> n;

    uint64_t count = 0;
    for (uint64_t i = 5; i <= n; i += 5)
    {
        uint64_t j = i;
        while (j % 5 == 0 && j > 0)
        {
            ++count;
            j /= 5;
        }
    }
    std::cout << count << '\n';
}
