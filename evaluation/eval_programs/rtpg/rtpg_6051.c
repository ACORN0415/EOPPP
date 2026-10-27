// RTPG_6051: vars=47 stmts=2
int test_func(int n) {
    if (n <= 2) return 0;
    return 2 * test_func(n - 1);
}
int main() { test_func(10); return 0; }

