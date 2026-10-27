// RTPG_5623: vars=18 stmts=6
int test_func(int n) {
    if (n <= 2) return 1;
    return 4 * test_func(n - 1);
}
int main() { test_func(10); return 0; }

