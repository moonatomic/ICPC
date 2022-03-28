#include <bits/stdc++.h>

int main() {
    int n;
    int sum = 0, mx = 0;
    int num;

    std::cin >> n;

    for (int i = 0; i < n; i++) {
        std::cin >> num;
        sum += num;
        if (num > mx) {
            mx = num;
        }
    }
    std::cout << std::max(2*mx, sum) << std::endl;
}
