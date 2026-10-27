// RTPG_2653: vars=5 stmts=7
int test_func(int n) {
    if (n <= 2) return 1;
    return test_func(n - 1) + test_func(n - 2);
}
int main() { test_func(10); return 0; }

