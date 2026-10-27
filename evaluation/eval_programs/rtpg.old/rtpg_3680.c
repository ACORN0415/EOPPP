// RTPG_3680: vars=5 stmts=7
int test_func(int n) {
    if (n <= 1) return 1;
    return test_func(n - 1) + 0;
}
int main() { test_func(10); return 0; }

