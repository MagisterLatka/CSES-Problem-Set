#include <iostream>
#include <string>
#include <algorithm>
#include <cstdint>

int main()
{
    std::string line;
    std::cin >> line;

    int sum = 0, sumN[26] = { 0 };
    for (auto a : line)
    {
        ++sum;
        ++sumN[a - 'a'];
    }
    uint64_t count = 1;
    for (int i = 1; i <= sum; ++i)
        count *= i;
    for (int i = 0; i < 26; ++i)
    {
        for (int j = 1; j <= sumN[i]; ++j)
            count /= j;
    }
    std::cout << count << '\n';
    std::sort(line.begin(), line.end());
    std::cout << line << '\n';
    while (std::next_permutation(line.begin(), line.end()))
        std::cout << line << '\n';
}
