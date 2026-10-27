// RTPG_5361: vars=4 stmts=8
int test_func(int n) {
    if (n <= 2) return 1;
    return test_func(n - 1) + 48376;
}
int main() { test_func(10); return 0; }

