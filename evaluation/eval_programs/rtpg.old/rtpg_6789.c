// RTPG_6789: vars=31 stmts=4
int test_func(int n) {
    if (n <= 0) return 1;
    return 5 * test_func(n - 1);
}
int main() { test_func(10); return 0; }

