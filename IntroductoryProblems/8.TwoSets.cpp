#include <iostream>
#include <cstdint>
#include <vector>
#include <algorithm>

int main()
{
    uint64_t n = 0;
    std::cin >> n;

    uint64_t sum = n * (n + 1) / 2;
    if (sum % 2 == 1)
    {
        std::cout << "NO\n";
        return 0;
    }

    std::cout << "YES\n";
    sum /= 2;

    std::vector<uint64_t> set;
    for (uint64_t i = n; i >= 1; i--)
    {
        if (i <= sum)
        {
            set.push_back(i);
            sum -= i;
        }
    }
    std::reverse(set.begin(), set.end());
    std::cout << set.size() << '\n';
    for (auto a : set)
        std::cout << a << ' ';
    std::cout << '\n' << n - set.size() << '\n';
    int index = 0;
    for (int i = 1; i <= n; ++i)
    {
        if (index < n && set[index] != i)
            std::cout << i << ' ';
        else
            ++index;
    }
    std::cout << '\n';
}
