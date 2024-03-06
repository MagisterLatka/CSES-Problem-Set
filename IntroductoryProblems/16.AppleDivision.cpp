#include <iostream>
#include <vector>
#include <cstdint>

int main()
{
    int n = 0;
    std::cin >> n;

    std::vector<int64_t> tab;
    int64_t sum = 0u;
    for (int i = 0; i < n; ++i)
    {
        int64_t a;
        std::cin >> a;
        sum += a;
        tab.push_back(a);
    }

    int64_t min = INT64_MAX;
    for (int i = 1; i < (1 << n); ++i)
    {
        int64_t a = 0;
        for (int j = 0; j < n; ++j)
        {
            if (i & (1 << j))
                a += tab[j];
        }
        int64_t diff = std::abs(2 * a - sum);
        min = std::min(min, diff);
    }
    std::cout << min << '\n';
}
