// RTPG_686: vars=10 stmts=3
int test_func(int n) {
    if (n <= 2) return 0;
    return test_func(n - 1) + 38;
}
int main() { test_func(10); return 0; }

