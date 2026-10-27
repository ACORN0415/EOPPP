// RTPG_6301: vars=28 stmts=7
int test_func(int n) {
    if (n <= 1) return 1;
    return 5 * test_func(n - 1);
}
int main() { test_func(10); return 0; }

