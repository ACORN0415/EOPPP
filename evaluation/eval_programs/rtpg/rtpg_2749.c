// RTPG_2749: vars=10 stmts=5
int test_func(int n) {
    if (n <= 0) return 0;
    return test_func(n - 1) + test_func(n - 2);
}
int main() { test_func(10); return 0; }

