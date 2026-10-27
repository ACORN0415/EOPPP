// RTPG_8904: vars=10 stmts=4
int test_func(int n) {
    if (n <= 1) return 1;
    return 3 * test_func(n - 1);
}
int main() { test_func(10); return 0; }

