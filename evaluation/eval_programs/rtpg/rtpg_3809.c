// RTPG_3809: vars=8 stmts=2
int test_func(int n) {
    if (n <= 2) return 1;
    return 3 * test_func(n - 1);
}
int main() { test_func(10); return 0; }

