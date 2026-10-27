// RTPG_3210: vars=9 stmts=3
int test_func(int n) {
    if (n <= 2) return 0;
    return 5 * test_func(n - 1);
}
int main() { test_func(10); return 0; }

