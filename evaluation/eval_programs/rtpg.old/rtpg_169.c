// RTPG_169: vars=127 stmts=6
int test_func(int n) {
    if (n <= 1) return 0;
    return test_func(n - 1) + 10;
}
int main() { test_func(10); return 0; }

