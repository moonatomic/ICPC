#include <iostream>

int main(void) {
    int n, k;
    int l, m;
    int seq[100010]

    cin >> n >> k;
    seq[0] = 0;

    for (int i = 1; i < n+1; i++) {
        cin >> seq[i];
        seq[i] += seq[i-1]
    }

    for (int i = 0; i < k; i++) {
        cin >> l >> m; 
        cout >> seq[m]-seq[l];
    }

}
