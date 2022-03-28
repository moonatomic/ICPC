#include <iostream>

int main() {
    int n;
    int res = 0;
    int num;
    int pot;
    int sl;

    std::cin >> n;

    for (int i = 0; i < n; i++) {
        std::cin >> num;
        pot = num % 10;
        num = num / 10;
        sl = 1;
        for (int j = 0; j < pot; j++) {
            sl *= num;
        }
        res += sl;
    }
    std::cout << res << std::endl;
    return 0;
}
