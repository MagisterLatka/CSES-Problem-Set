#include <iostream>
#include <cstdint>

int main()
{
    int n = 0;
    std::cin >> n;

    uint64_t prev = 0;
    std::cin >> prev;
    uint64_t sum = 0;
    for (int i = 1; i < n; ++i)
    {
        uint64_t curr = 0;
        std::cin >> curr;
        if (curr < prev)
            sum += prev - curr;
        else
            prev = curr;
    }
    std::cout << sum << '\n';
}
