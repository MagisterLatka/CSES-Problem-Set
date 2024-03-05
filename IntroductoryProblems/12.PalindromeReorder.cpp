#include <iostream>
#include <cstdint>

int main()
{
    std::string line;
    std::cin >> line;

    int count[26] = { 0 };
    for (int i = 0; i < line.length(); ++i)
        ++count[line[i] - 'A'];

    int odd = -1;
    for (int i = 0; i < 26; ++i)
    {
        if (count[i] % 2 == 1)
        {
            if (odd == -1)
                odd = i;
            else
            {
                std::cout << "NO SOLUTION\n";
                return 0;
            }
        }
    }

    for (int i = 0; i < 26; ++i)
    {
        if (i == odd)
            continue;
        for (int j = 0; j < count[i] / 2; ++j)
            std::cout << (char)('A' + i);
    }
    if (odd != -1)
    {
        for (int i = 0; i < count[odd]; ++i)
            std::cout << (char)('A' + odd);
    }
    for (int i = 25; i >= 0; --i)
    {
        if (i == odd)
            continue;
        for (int j = 0; j < count[i] / 2; ++j)
            std::cout << (char)('A' + i);
    }
    std::cout << '\n';
}
