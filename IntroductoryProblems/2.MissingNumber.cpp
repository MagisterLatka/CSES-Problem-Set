#include <iostream>
#include <cstdint>

int main()
{
    int n = 0;
    std::cin >> n;

    uint64_t sumN = (uint64_t)n * (n + 1) / 2;
    uint64_t sum = 0;
    for (int i = 0; i < n - 1; ++i)
    {
        int a = 0;
        std::cin >> a;
        sum += a;
    }
    std::cout << sumN - sum << '\n';
}
