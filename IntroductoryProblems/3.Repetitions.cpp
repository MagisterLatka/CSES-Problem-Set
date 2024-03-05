#include <iostream>
#include <cstdint>

int main()
{
    std::string line;
    std::cin >> line;
    int max = 1, curr = 1;
    for (int i = 1; i < line.length(); ++i)
    {
        if (line[i] == line[i - 1])
        {
            ++curr;
            max = std::max(max, curr);
        }
        else
            curr = 1;
    }
    std::cout << max << '\n';
}
