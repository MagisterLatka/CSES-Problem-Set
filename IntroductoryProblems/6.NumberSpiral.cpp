#include <iostream>
#include <cstdint>
#include <vector>

int main()
{
    int t = 0;
    std::cin >> t;

    while (t-- > 0)
    {
        int64_t x = 0, y = 0;
        std::cin >> y >> x;

        int64_t max = std::max(x, y), row = max * max - max + 1;
        
        if (x == y)
        {
            std::cout << row << '\n';
            continue;
        }

        if (x < y)
        {
            if (max % 2 == 0)
                std::cout << row + (max - x) << '\n';
            else
                std::cout << row - (max - x) << '\n';
        }
        else
        {
            if (max % 2 == 0)
                std::cout << row - (max - y) << '\n';
            else
                std::cout << row + (max - y) << '\n';
        }
    }
}
