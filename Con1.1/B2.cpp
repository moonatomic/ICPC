#include <bits/stdc++.h>

int main() {
    int n, c;
    int ans = 0;
    int fr;
    std::vector<int> fs;
    int mass;
    int am;

    std::cin >> n >> c;

    for (int i = 0; i < n; i++) {
        std::cin >> fr;
        fs.push_back(fr);
    }
    for (int j = 0; j < n; j++) {
        am = 0;
        mass = 0;
        for (int k = j; k < n; k++) {
            if (mass + fs[k] <= c) {
                ++am;
                mass += fs[k];
            }
        }
        ans = std::max(am, ans);
    }
    std::cout << ans << std::endl;
}