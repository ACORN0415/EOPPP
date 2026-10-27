// RTPG_7580: vars=32 stmts=3
int test_func(int n) {
    if (n <= 0) return 1;
    return 5 * test_func(n - 1);
}
int main() { test_func(10); return 0; }

