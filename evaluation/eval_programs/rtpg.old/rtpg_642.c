// RTPG_642: vars=5 stmts=4
int test_func(int n) {
    if (n <= 1) return 0;
    return 5 * test_func(n - 1);
}
int main() { test_func(10); return 0; }

