#include <iostream>
#include <cstdint>
#include <stack>
#include <vector>

void tower(std::vector<std::pair<int, int>>& moves, int n, int from, int to, int aux)
{
    if (n == 0)
        return;
    tower(moves, n - 1, from, aux, to);
    moves.push_back({from, to});
    tower(moves, n - 1, aux, to, from);
}

int main()
{
    int n = 0;
    std::cin >> n;

    std::vector<std::pair<int, int>> moves;
    tower(moves, n, 1, 3, 2);
    std::cout << moves.size() << '\n';
    for (auto [i, j] : moves)
        std::cout << i << ' ' << j << '\n'; 
}
