// RTPG_7351: vars=20 stmts=3
int test_func(int n) {
    if (n <= 2) return 1;
    return test_func(n - 1) + 14;
}
int main() { test_func(10); return 0; }

