#include <iostream>
#include <cstdint>

int main()
{
    int t = 0;
    std::cin >> t;

    while (t-- > 0)
    {
        int a = 0, b = 0;
        std::cin >> a >> b;

        if (a == 0 && b == 0)
        {
            std::cout << "YES\n";
            continue;
        }
        bool c = (a + b) % 3 == 0;
        c &= a >= 1;
        c &= b >= 1;
        c &= a <= 2 * b;
        c &= b <= 2 * a;
        if (c)
            std::cout << "YES\n";
        else
            std::cout << "NO\n";
    }
}
