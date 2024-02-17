#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int n, s, p,q;
int main() {
    constexpr uint64_t mask = ~(1 << 31);
    std::vector<int> vec = {};
    std::cin >> n >> s >> p >> q;
    vec.reserve(n);
    uint64_t prev = s & mask;
    vec.push_back(prev);
    for(int i = 1; i < n; i++)
    {
        prev = (prev * p + q) & mask;
        vec.push_back(prev);
    }
    auto it = std::unique(vec.begin(), vec.end());
    std::cout << std::distance(vec.begin(), it);
    return 0;
}