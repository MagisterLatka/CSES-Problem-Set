#include <iostream>
#include <cstdint>

int main()
{
    int n = 0;
    std::cin >> n;

    for (int64_t i = 1; i <= n; ++i)
    {
        int64_t a = i * i * (i * i - 1) / 2, b = 4 * (i - 1) * (i - 2);
        std::cout << a - b << '\n';
    }
}
