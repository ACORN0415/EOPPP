// RTPG_5726: vars=7 stmts=10
int test_func(int n) {
    if (n <= 0) return 1;
    return 2 * test_func(n - 1);
}
int main() { test_func(10); return 0; }

