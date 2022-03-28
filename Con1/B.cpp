#include <bits/stdc++.h>

int main() {
    int n, c, m;
    int am = 0, mass = 0;
    std::vector<int> fr;

    std::cin >> n >> c;

    for (int i = 0; i < n; i++) {
        std::cin >> m;
        if (mass + m > c) {
            if (mass + m - fr[0] <= c) {
                mass -= fr[0];
                mass += m;
                fr.push_back(m);
                fr.erase(fr.begin());
            }
        } else {
            mass += m;
            am++;
            fr.push_back(m);
        }
       
        
    }
    std::cout << am << std::endl;
}