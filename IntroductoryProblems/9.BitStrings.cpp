#include <iostream>
#include <cstdint>

int main()
{
    uint64_t n = 0;
    std::cin >> n;

    uint64_t sum = 1;
    for (uint64_t i = 1; i <= n; ++i)
    {
        sum *= 2;
        sum %= 1000000007;
    }
    std::cout << sum << '\n';
}
