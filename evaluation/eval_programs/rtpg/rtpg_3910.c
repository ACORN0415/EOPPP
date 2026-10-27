// RTPG_3910: vars=4 stmts=4
int test_func(int n) {
    if (n <= 0) return 0;
    return 4 * test_func(n - 1);
}
int main() { test_func(10); return 0; }

